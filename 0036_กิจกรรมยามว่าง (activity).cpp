#include<bits/stdc++.h>
using namespace std;
int ii=0;
void oo (int a , int b , int c){
    if(c<=0){
        if(abs(a-b)<=1){
            ii++;
        }
        return;
    }
    oo(a,b+1,c-1);
    oo(a+1,b,c-1);
}
int main(){
    cin.tie(0)->sync_with_stdio(0); 
    int o;
    cin >> o;
    oo(0,0,o);
    cout << ii;
    return 0;
} 