class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;
        vector<int> v = nums;

        for (int i = 0; i < size ; i++){
             int count1 = 0;
             int count2 = 0;
            while(v[i]%3 != 0){
                v[i] = v[i] -1;
                count1++;
            }

            while(nums[i]%3 != 0){
                nums[i] = nums[i] +1;
                count2++;
            }
          sum = sum + min(count1,count2);
        }
        return sum;
    }
};