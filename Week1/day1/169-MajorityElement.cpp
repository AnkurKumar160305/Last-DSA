class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            if(m[nums[i]]>n/2){
                return nums[i];
            }
        }
        return -1;
    }
};



// (Boyer-Moore Voting Algorithm)
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=0,cand=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cand=nums[i];
            }
            if(cand==nums[i]){
                    cnt++;
            }else{
                    cnt--;
            }
        }
        return cand;
    }
};