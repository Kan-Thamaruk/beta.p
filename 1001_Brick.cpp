#include <bits/stdc++.h>
using namespace std;
int dd[21], mk[22];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m; cin >> n >> m;
    string y[21];
    for(int j=0; j<m; j++){
        dd[j] = n;
    }
    for(int i=0;i<n;i++){
        cin >> y[i];
        for(int j=0;j<m;j++){
            if(y[i][j] == 'O' && mk[j]==0){
                dd[j] = i;
                mk[j] = 1;
            }
        }
    }
    for(int j=0;j<m;j++){
        int a; cin >> a;
        for(int i=dd[j]-1; i>=0 && a>0; i--){
            y[i][j] = '#';
            a--;
        }
    }
    for(int i=0;i<n;i++){
        cout << y[i] << '\n';
    }
    return 0;
}