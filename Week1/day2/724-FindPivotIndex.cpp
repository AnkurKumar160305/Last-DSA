class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int psum=0,ssum=0;
        int index=-1;
        for(int i=0;i<n;i++){
            ssum=sum-psum-nums[i];
            if(ssum==psum){
                index=i;
                break;
            }
            psum+=nums[i];
        }
        return index;
    }
};