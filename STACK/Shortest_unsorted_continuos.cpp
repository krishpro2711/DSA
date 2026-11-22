class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> nums2;
        nums2=nums;
        sort(nums2.begin(),nums2.end());
        vector<int> nums3;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums2[i]){
                nums3.push_back(i);
            }
        }
        int ans=0;
        int n=nums3.size();
        if(n>=1){
           ans=nums3[n-1]-nums3[0]+1;
        }
        return ans;
    }
};