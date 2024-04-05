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
void deletionofnode(){
    
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
    
    return 0;
}