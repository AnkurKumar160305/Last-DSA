class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            if(m[nums[i]]>=2){
                return true;
            }
        }
        return false;
    }
};

//Optimal O(n) using hashset
//Space complexity is O(n)
//using less memory than hashmap not storing count if each item in set
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(s.find(nums[i])!=s.end()){
                return true;
            }else{
                s.insert(nums[i]);
            }
        }
        return false;
    }
};