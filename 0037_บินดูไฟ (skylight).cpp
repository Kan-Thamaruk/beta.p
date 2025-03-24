#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll n,m,l,k,c,sum=0;
    cin>>n>>m>>l>>k>>c;
    for(ll i=0;i<n*m;i++) {
        ll t;
        cin>>t;
        sum+=t;
    }
    sum+=k*l*c;
    cout<<(sum%c ? sum/c+1 : sum/c);
    return 0;
}