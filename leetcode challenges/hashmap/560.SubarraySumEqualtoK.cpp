/*Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
 

Constraints:

1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107
*/


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int>mp;

        int ans =0;
        /// store current sum and how many time occur
        mp.insert({0,1});
        int cumSum =0;
        for(int i=0;i<n;i++){
            cumSum+=nums[i];
            if(mp.find(cumSum-k)!=mp.end()){
                ans+=mp[cumSum-k];
            }
            mp[cumSum]++;
        }
        return ans;
    }
};