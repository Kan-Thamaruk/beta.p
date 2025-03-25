#include <bits/stdc++.h>
using namespace std;
unordered_map<string,char> mp = {
  {" _ | ||_|",'0'},
  {"     |  |",'1'},
  {" _  _||_ ",'2'},
  {" _  _| _|",'3'},
  {"   |_|  |",'4'},
  {" _ |_  _|",'5'},
  {" _ |_ |_|",'6'},
  {" _   |  |",'7'},
  {" _ |_||_|",'8'},
  {" _ |_| _|",'9'},
};
string getNum(vector<string>&s,int sz) {
    string re="";
    for(int i=0;i<sz;i++){
        string mem="";
        for (int j=0;j<3;j++){
            mem+=s[j].substr(i*4,3);
        }
        re+=mp[mem];

    }
    return re;
}
vector<string> s1(3),s2(3);
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    cin.ignore();
    for(int i=0;i<3;i++){
        getline(cin,s1[i]);
    }
    for(int i=0;i<3;i++){
        getline(cin,s2[i]);
    }
    long long a = stoll(getNum(s1,n));
    long long b = stoll(getNum(s2,m));
    cout<<a+b<<'\n';
    return 0;
}