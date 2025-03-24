#include<bits/stdc++.h>
using namespace std;
const int M[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
const string D[]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int a,b; 
    cin>>a>>b;
    int sum=a;
    for(int i=0;i<b;i++) sum+=M[i];
    cout<<D[(sum-1)%7]<<'\n';
    return 0;
}