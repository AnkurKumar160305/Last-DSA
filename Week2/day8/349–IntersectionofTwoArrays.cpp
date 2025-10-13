#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int s1 = 0, s2 = 0;
        vector<int> ans;

        while (s1 < nums1.size() && s2 < nums2.size()) {
            if (nums1[s1] == nums2[s2]) {
                if (ans.empty() || ans.back() != nums1[s1]){
                    ans.push_back(nums1[s1]);
                }
                s1++;
                s2++;
            } 
            else if (nums1[s1] < nums2[s2]) {
                s1++;
            } 
            else {
                s2++;
            }
        }

        return ans;
    }
};
