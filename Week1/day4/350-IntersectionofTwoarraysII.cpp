class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> nums;
        int s1=0,s2=0;
        while(s1<n1 && s2<n2){
            if(nums1[s1]==nums2[s2]){
                nums.push_back(nums1[s1]);
                s1++;
                s2++;
            }else if(nums1[s1]<nums2[s2]){
                s1++;
            }else{
                s2++;
            }
        }
        return nums;
    }
};