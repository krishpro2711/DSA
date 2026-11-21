Class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;

        for(int i = 1; i <= n; i++){
            q.push(i);
        }

        int count = 1;

        while(q.size() != 1){
            if(count < k){
                int front = q.front();
                q.pop();
                q.push(front);
                count++;
            }

            else{
                q.pop();
                count = 1;
            }
        }

        return q.front();
    }
};