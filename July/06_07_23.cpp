// Problem: 209. Minimum Size Subarray Sum
// Date: 06_07_23
// Link: https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int tail=0,sum=0,len=INT_MAX;
        for(int head=0;head<nums.size();head++){
            sum+=nums[head];
            while(sum>=target){
                len=min(len,head-tail+1);
                sum-=nums[tail];
                tail++;
            }
        }
        return (len==INT_MAX) ? 0 : len;
    }
};