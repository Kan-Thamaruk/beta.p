#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int x,y,z;
    cin >> x >> y >> z;
    int a,b,c,d;
    for(a=1;a<=100;a++){
        if(x%a==0){
            c=x/a;
            for(b=-100;b<=100;b++){
                if(b!=0){
                    if(z%b==0){
                    d=z/b;
                    if(y==(a*d)+(b*c)){
                        cout << a << " " << b << " " << c << " " << d;
                        exit(0);
                    }
                }
                }
                
            }
        } 
    }
    cout << "No Solution";
    return 0;
}