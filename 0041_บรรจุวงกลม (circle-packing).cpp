#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin>>n;
    cout<<fixed<<setprecision(6);
    if(!(n%2)) cout<<(double)n;
    else if(n==1) cout<<(double)2;
    else if(n==3) cout<<2+sqrt(3);
    else cout<<(n-3)+2*sqrt(3);
    return 0;
}