class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> rad;
        queue<int> dire;

        int n=senate.length();

        for(int i = 0; i < n; i++){
            if(senate[i] == 'R'){
                rad.push(i);
            }
            else{
                dire.push(i);
            }
        }

        while(!rad.empty() && !dire.empty()){
            int r = rad.front();
            int d = dire.front();
            rad.pop();
            dire.pop();

            if(r<d){
                rad.push(r+n);
            }
            else{
                dire.push(d+n);
            }

        }

        if(rad.empty()){
            return "Dire";
        }
        else{
            return "Radiant";
        }

        
    }
};