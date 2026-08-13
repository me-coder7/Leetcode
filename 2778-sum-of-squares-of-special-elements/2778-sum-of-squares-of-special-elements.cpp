class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;
        for(int i = 0; i < size ; i++){
            if (size % (i+1) == 0){
                sum = sum + (nums[i]*nums[i]);
            }
        }
        return sum;
    }
};