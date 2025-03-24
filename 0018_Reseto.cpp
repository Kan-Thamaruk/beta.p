#include<iostream>
using namespace std;
bool marked[1001];
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int N, K; 
    cin >> N >> K;
    int count = 0;
    for (int i = 2; i <= N; i++) {
        if (!marked[i]) {
            for (int j = i; j <= N; j += i) {
                if (!marked[j]) {
                    marked[j] = true;
                    count++;
                    if (count == K) {
                        cout << j;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}