#include<bits/stdc++.h>
using namespace std;
struct Data {
    string name;
    int score=0;
    int goal=0;
    int ttgoal=0;
    bool operator<(const Data &o) const {
        if(score==o.score) {
            if(goal==o.goal) return ttgoal>o.ttgoal;
            return goal>o.goal;
        }
        return score>o.score;
    }
};
int main() {
    int goals[4][4];
    vector<Data> score(4);
    for(int i=0;i<4;i++){
        cin>>score[i].name;
    }
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            cin>>goals[i][j];
            score[i].ttgoal+=goals[i][j];
        }
    }
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            score[i].goal+=(goals[i][j]-goals[j][i]);
            if(i==j) continue;
            int ot = goals[j][i],us=goals[i][j];
            if(us>ot) score[i].score+=3;
            else if(ot==us){
                score[i].score++;
            }
        }
    }
    sort(score.begin(),score.end());
    for(int i=0;i<4;i++) {
        cout<<score[i].name<<" "<<score[i].score<<endl;
    }
    return 0;
}