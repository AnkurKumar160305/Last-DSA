class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i-1]==nums[i]) continue;
            int left=i+1;
            int right=n-1;
            while(left<right){
                int total=nums[i]+nums[left]+nums[right];
                if(total==0){
                    ans.push_back({nums[i], nums[left], nums[right]});
                    while(left<right && nums[left+1]==nums[left]) left++;
                    while(left<right && nums[right-1]==nums[right]) right--;
                    left++;
                    right--;
                }else if(total<0){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return ans;
    }
};