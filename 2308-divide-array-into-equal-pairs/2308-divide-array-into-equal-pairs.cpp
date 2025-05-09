// ---------------------- Using Set --------------------------------------------------------
// class Solution {
// public:
//     bool divideArray(vector<int>& nums) {
//         unordered_set<int> hashSet; // Correct name for the set
//         for (int num : nums) {
//             if (hashSet.find(num) != hashSet.end()) { // Check if the element exists in the set
//                 hashSet.erase(num); // Remove the element
//             } else {
//                 hashSet.insert(num); // Add the element
//             }
//         }
//         return hashSet.empty(); // Check if the set is empty
//     }
// };
// ---------------------- Using Set --------------------------------------------------------

class Solution {
public:
    bool divideArray(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i+=2)
       {
        if(nums[i]!=nums[i+1])
        {
            return false;
        }
       }
       return true;
    }
};