#include <bits/stdc++.h>
using namespace std;
string s; 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; 
    cin>>n;
    while(n--) {
        cin>>s;
        char a=s.back();
        if(a%2==1 || s=="2") cout<<"T\n";
        else cout<<"F\n";
    }
    return 0;
}