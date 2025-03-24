#include<bits/stdc++.h>
using namespace std;
vector<int>no(15);
vector<int>num;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++)cin>>no[i];
    for(int i=1;i<=n;i++)num.push_back(i);
    do{
        if(find(no.begin(),no.end(),num[0])==no.end())
        {
            for(int i=0;i<n;i++)
            {
                cout<<num[i]<<" ";
            }
            cout<<"\n";
        }
    }while(next_permutation(num.begin(),num.end()));
    return 0;
}