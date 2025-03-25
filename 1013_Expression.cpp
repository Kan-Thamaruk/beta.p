#include <bits/stdc++.h>
using namespace std;

vector<int> qry;
map<char, int> key = {{'+', 1}, {'*', 2}, {'^', 3}};

string recur(int idx, string exp) {
    if (idx == qry.size()) return exp;
    if (exp.size() == 1) return qry[idx] ? "null" : recur(idx + 1, exp);

    int sz = exp.size(), is_par = 0, mn_key = 4;
    for (int i = 0; i < sz; ++i) {
        if (exp[i] == '(') ++is_par;
        else if (exp[i] == ')') --is_par;
        else if (!is_par && key[exp[i]]) mn_key = min(mn_key, key[exp[i]]);
    }

    if (mn_key == 4) return qry[idx] ? "null" : recur(idx + 1, exp.substr(1, sz - 2));

    vector<string> each_exp;
    string temp;
    is_par = 0;
    for (int i = 0; i < sz; ++i) {
        if (exp[i] == '(') ++is_par;
        else if (exp[i] == ')') --is_par;
        if (!is_par && key[exp[i]] == mn_key) {
            each_exp.push_back(temp);
            temp.clear();
        } else temp += exp[i];
    }
    each_exp.push_back(temp);

    return qry[idx] >= each_exp.size() ? "null" : recur(idx + 1, each_exp[qry[idx]]);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string str;
    cin >> str;
    int Q;
    cin >> Q;
    while (Q--) {
        int x;
        while (cin >> x && x) qry.push_back(--x);
        string pre = "p";
        for (int i = 0; i < qry.size(); ++i) pre = "op(" + to_string(qry[i] + 1) + ',' + pre + ')';
        cout << pre << "=" << recur(0, str) << '\n';
        qry.clear();
    }
    return 0;
}