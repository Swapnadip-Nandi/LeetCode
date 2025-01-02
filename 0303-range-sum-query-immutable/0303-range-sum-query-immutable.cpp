class NumArray {
public:
vector<int>Store_prefix ={0};
    NumArray(vector<int>& nums) {
        int sum = 0;
        for(int n : nums){
        sum += n;
        Store_prefix.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        return Store_prefix[right+1] - Store_prefix[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */