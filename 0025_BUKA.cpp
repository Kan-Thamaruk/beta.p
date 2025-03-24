#include <bits/stdc++.h>
using namespace std;
string num1 = "1", num2 = "1";
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int digit1 = 0, digit2 = 0;
    char operand;
    cin >> num1 >> operand >> num2;
    if (num2 > num1) swap(num1, num2);
    if (operand == '+') {
        if (num1 != num2) num1.replace(num1.size() - num2.size(), 1, "1");
        else num1.replace(0, 1, "2");
    } else {
        for (int i = 1; i < num2.size(); i++) num1 += '0';
    }
    cout << num1;
    return 0;
}