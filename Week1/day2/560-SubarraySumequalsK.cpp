class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int n=nums.size();
        int cnt=0,sum=0;
        m[0]=1;
        for (int i = 0; i < n; i++) {
            sum+=nums[i];
            if(m.find(sum-k)!=m.end()){
                cnt+=m[sum-k];
            }
            m[sum]++;
        }
        return cnt;
    }
};
