// Brute Force
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int m = nums1.size();
         int n = nums2.size();

         vector<int>merge;
         for(int i = 0; i < m; i++){
            merge.push_back(nums1[i]);
         }
        for(int i = 0; i < n; i++){
            merge.push_back(nums2[i]);
        }

        // sort the merge array
        sort(merge.begin(), merge.end());

        // calculate the total number of elements
        int total = merge.size();


        if(total % 2==1) { //odd element
         return static_cast<double>(merge[total / 2]);

        }
        else{
            //even element
            // calculate the avarage pf the two middle element as median
            int mid1 = merge[total/2 -1];
            int mid2 = merge[total/ 2];
            return (static_cast<double>(mid1) + static_cast<double>(mid2)) / 2.0;
        }
    }
};