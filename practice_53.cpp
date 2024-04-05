// binary search tree
#include <iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this->data = d;
        this->left=NULL;
        this->right=NULL;

    }
};
Node* insertintobst(Node* &root,int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d>root->data){
        root->right = insertintobst(root->right,d);
    }
    else{
        root->left = insertintobst(root->left,d);
    }
    return root;
}

Node* minval(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}

Node* deletionofnode(Node* root,int val){
    if(root == NULL){
        return root;
    }
    if(root->data==val){
        if(root->left==NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        if(root->left!=NULL && root->right == NULL){
            Node* temp = root ->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right != NULL){
            Node* temp = root ->right;
            delete root;
            return temp;
        }
        if(root->left != NULL && root->right != NULL){
            int mini = minval(root->right)->data;
            root->data = mini;
            root->right = deletionofnode(root->right,mini);
            return root;
        }
    }
    else if(root->data>val){
        root->left=deletionofnode(root->left,val);
        return root;
    }
    else{
        root->right=deletionofnode(root->right,val);
        return root;
    }
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        insertintobst(root,data);
        cin>>data;
    }
}

void levelordertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
            }
        }
    }
}

int main(){
    Node* root = NULL;
    cout<<"enter data for bst"<<endl;
    takeInput(root);
    cout<<"printing the bst"<<endl;
    levelordertraversal(root);
    root = deletionofnode(root,10);
    cout<<"min value is "<<minval(root)->data;

    return 0;
}