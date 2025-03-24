#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	cin >> s;
	int n=s.size();
	if(n==0) return 0;
	for(int i=0;i<5;i++)
	{
		if(i==2) cout << "#";
		else cout << ".";
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<4;k++)
			{
				if(k==1 and i==2)
				{
					cout << s[j];
					continue;
				}
				if(j%3==1 and k==3 and j+1!=n)
				{
					if(i-k==3 or i-k==-1 or i+k==5 or i+k==1) cout << "*";
					else cout << ".";
					continue;
				}
				if(j%3==2)
				{
					if(i-k==3 or i-k==-1 or i+k==5 or i+k==1) cout << "*";
					else cout << ".";
					continue;
				}
				if(i-k==3 or i-k==-1 or i+k==5 or i+k==1) cout << "#";
				else cout << ".";
			}
		}
		cout << "\n";
	}
	return 0;
}