bool canbloom(vector<int>& bloomDay,int m,int k,int day){
        int cnt=0;
        int boq=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=day){
                cnt++;
            }
            else{
                boq+=cnt/k;
                cnt=0;
            }
        }
        boq+=cnt/k;
        return boq >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
          int n=bloomDay.size();
          if(1LL*m*k>n)
          {
            return -1;
          }
          
          int low = *min_element(bloomDay.begin(), bloomDay.end());
    int high = *max_element(bloomDay.begin(), bloomDay.end());

    while(low < high) {

        int mid = low + (high - low) / 2;

        if(canbloom(bloomDay, m, k, mid)) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }

    return low;
}
};