#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> Series(int n) {
        vector<int> ans(0);
        if(n==0){
            return ans;
        }
        if(n==1){
            ans.push_back(1);
            return ans;
        }
        else{
            
        for(int i=0;i<n;i++){
            int a = ans[i]+ans[i+1];
            ans.push_back(a);
        }
        return ans;
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}