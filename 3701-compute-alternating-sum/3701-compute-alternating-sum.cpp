class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;
        for(int i = 0 ; i < size ; i++){
            if(i % 2 == 0){
                sum = sum + nums[i];
            }
            else{
                sum = sum - nums[i];
            }
        }
        return sum;
    }
};