class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=0;
        for(int i=0;i<nums.size();i++){
            xorr=xorr^nums[i];
        }
        return xorr;
    }
};


// show the same concept extended for the case where every number appears 3 times except one (which needs bitwise counting instead of XOR)?
// Input:  [2, 2, 3, 2]
// Output: 3

// 🔹 Bitwise Counting Approach (Optimal Solution)
// Idea:
// Each bit position (0–31) can be counted individually.
// If a bit is set 3 times, it should be ignored (since those 3s correspond to numbers appearing 3 times).
// The remaining bit pattern gives the unique number.
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ones = 0, twos = 0;

//         for (int num : nums) {
//             // Update 'twos' with bits that appear twice
//             twos |= (ones & num);

//             // Update 'ones' with current number bits
//             ones ^= num;

//             // Mask to clear bits appearing 3 times
//             int threes = ones & twos;
//             ones &= ~threes;
//             twos &= ~threes;
//         }

//         return ones;
//     }
// };

// int main() {
//     vector<int> nums = {2, 2, 3, 2};
//     Solution s;
//     cout << s.singleNumber(nums); // Output: 3
//     return 0;
// }
