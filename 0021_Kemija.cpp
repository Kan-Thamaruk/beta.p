#include <bits/stdc++.h>
using namespace std;
string ans;
int main() {
    getline(cin,ans);
    int n = ans.length();
    for(int i=0;i<ans.length();i++) {
        if(ans[i]=='a' || ans[i]=='e'||ans[i]=='i'||ans[i]=='o'||ans[i]=='u') {
            if(ans[i+1]=='p' && ans[i+2]==ans[i]) {
                ans.erase(ans.begin()+i);
                ans.erase(ans.begin()+i);
            }
        }
        else continue;
    }
    cout << ans;
    return 0;
}