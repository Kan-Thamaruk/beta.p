#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int arr[4] = {a, b, c, d};
    sort(arr, arr+4);
    cout << arr[0] * arr[2];
    return 0;
}