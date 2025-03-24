#include <bits/stdc++.h>
using namespace std;
char A[3]={'A','B','C'};
char B[4]={'B','A','B','C'};
char C[6]={'C','C','A','A','B','B'};
int x;
string lol;
int main()
{
    cin.tie(0) -> sync_with_stdio(0);  
    cin>>x>>lol;
    int a=0,b=0,g=0;
    for(int i=0;i<x;i++)
    {
        (lol[i]==A[i%3])?a++:0;
        (lol[i]==B[i%4])?b++:0;
        (lol[i]==C[i%6])?g++:0;
    }
    x=max(a,b);
    x=max(x,g);
    cout<<x;
    if(a==x) cout<<"\nAdrian";
    if(b==x) cout<<"\nBruno";
    if(g==x) cout<<"\nGoran";
    return 0;
}