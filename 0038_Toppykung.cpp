#include <bits/stdc++.h>
using namespace std;
set<string> s;
int main(){
    cin.tie(0)->sync_with_stdio(0); 
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        s.insert(str);
    }
    for(string str : s){
        cout << str << "\n";
    }
    return 0;
}