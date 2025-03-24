#include <bits/stdc++.h>
using namespace std;
int dd[10];
int main(){
    int y=0;
    int a,b;
    for(int i=1;i<=9;i++){
        cin >> dd[i];
        y += dd[i];
    }
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(y - dd[i] - dd[j] == 100){
                a = i;
                b = j;
                break;
            }
        }
    }
    for(int i=1;i<=9;i++){
        if(i==a || i==b) continue;
        cout << dd[i] << '\n';
    }
    return 0;
}