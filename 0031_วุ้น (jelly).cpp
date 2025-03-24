#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int a,cnt=0;
    for(int i=0;i<3;i++){
        cin >> a;
        while(a!=1){
            a/=2;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}