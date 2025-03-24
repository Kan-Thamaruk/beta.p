#include <bits/stdc++.h>
using namespace std;
vector<int> arr(10001,0);
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        arr[a]++;
    }
    int max = *max_element(arr.begin(),arr.end());
    for(int i=1;i<10001;i++){
        if(arr[i] == max){
            cout << i << " ";
        }
    }
    return 0;
}