#include<bits/stdc++.h>
using namespace std;
const int N=10;
queue<int> q[N];
int mp[1005];
char c;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n,m;
	cin >> n >> m;
	for(int i=1; i <= m; i++){
		int a,b;
		cin >> a >> b;
		mp[b] = a;
	}
	while(cin >> c){
		if(c == 'X'){
			cout << '0';
			return 0;
		}
		else if(c == 'E'){
			int x;
			cin >> x;
			if(q[mp[x]].empty()) q[0].push(mp[x]);
			q[mp[x]].push(x);
		}
		else if(c == 'D'){
			if(q[0].empty()){
				cout << "empty\n";
				continue;
			}
			int id = q[0].front();
			cout << q[id].front() << "\n";
			q[id].pop();
			if(q[id].empty()) q[0].pop();
		}
	}
    return 0;
}