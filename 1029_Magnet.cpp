#include <iostream>
using namespace std;
bool arr[100000001];
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int m,n,q;
    cin >> m >> n >> q;
    for(int i = 0;i<n;i++){
        int a,b;
        cin >> a >> b;
        for(int j = a;j<a+b;j++) arr[j] = !arr[j];
    }
    for(int i = 0;i<q;i++){
        int a,cnt = 1;
        cin >> a;
        for(int j = a-1;j>=1;j--){
            if(arr[a]==arr[j]){
                cnt++;
            }
            else break;
        }
        for(int j = a+1;j<=m;j++){
            if(arr[a]==arr[j]){
                cnt++;
            }
            else break;
        }
        cout << cnt << '\n';
    }
    return 0;
}