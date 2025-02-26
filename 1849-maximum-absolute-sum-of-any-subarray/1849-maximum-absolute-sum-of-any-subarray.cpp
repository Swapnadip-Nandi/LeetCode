class Solution {
public:
    int maxSumSubarrayKadanes(vector<int>& nums) {
        int max_sum = INT_MIN;
        int curr_sum = 0;
        for(int ele: nums){
            curr_sum += ele;
            max_sum = max(max_sum,curr_sum);
            if(curr_sum < 0)
                curr_sum = 0;
        }
        return max_sum ;
    } ///// Apply Kadane's Algo #######

    int maxAbsoluteSum(vector<int>& nums){
        int max_sum_subarray = maxSumSubarrayKadanes(nums);

        // Flip the sign to multiply(-1)
        for(int i = 0; i < nums.size(); ++i)
            nums[i] = (-1)*nums[i];

        int min_sum_subarray = maxSumSubarrayKadanes(nums);
        return max(max_sum_subarray, abs(min_sum_subarray));
    }

 };



// next approach: Prefix Sum
 
// class Solution{
// public:
//     int maxAbsoluteSum(vector<int>& nums){
//         int min_point = 0;
//         int max_point = 0;
//         int prefix_sum = 0;
//         for(int ele: nums){
//             prefix_sum += ele;

//             min_point = min(min_point, prefix_sum);
//             max_point = min(max_point, prefix_sum);
//         }
//         return max_point - min_point;

//     }

// };