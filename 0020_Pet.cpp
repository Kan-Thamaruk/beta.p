#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int Racer = 0, score = 0;
    for(int i = 0; i < 5; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            int x; cin >> x;
            sum += x;
        }
        if(sum > score) {
            score = sum;
            Racer = i;
        }
    }
    cout << Racer + 1 << " " << score;
    return 0;
}