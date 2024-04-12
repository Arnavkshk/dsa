// hash maps
#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
// creation
    unordered_map<string,int> m; //if we use map instead of unordered map then the order is preserved
// inserting
// first method
    pair<string,int> pair1 = make_pair("hello",2);
    m.insert(pair1);
// second method
    pair<string,int> pair2("yoyo",1);
    m.insert(pair2);
// third method
    m["mera"] = 3;
    m["khekhe"] = 9;
    m["lol"] = 90;
    m["true"] = 88;
    m["sad"] = 76; //this will only update the value of mera as <mera,4>

// searching
    cout<<m["mera"]<<endl; //if the entry no0t found it will create a new entry with 0
    cout<<m.at("hello")<<endl; //if the entry is not found it will give an error
// size
    cout<<m.size()<<endl;
// to check presence
    cout<<m.count("hello")<<endl;
// erase
    m.erase("yoyo");
    cout<<m.size()<<endl;
// traversing
    for(auto i : m){
        cout<<i.first << " " << i.second << endl;
    }
    cout<<endl;
//traversing using iterator
    unordered_map<string,int> :: iterator it = m.begin();

    while(it!=m.end()){
        cout<< it->first <<" "<<it->second<<endl;
        it++;
    }

    return 0;
}