//Brute force O(n^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

//Optimal O(n) using hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int first=target-nums[i];
            if(m.find(first)!=m.end()){
                return {m[first],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};