class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        vector<int> v;
        int size = nums.size();
        for(int i = 0 ; i < size ; i++){
            while(nums[i] != 0){
               int digit = nums[i]%10;
               nums[i] = nums[i]/10;
               v.push_back(digit);
            }
        }

        int size_v = v.size();
        int count = 0;
        for(int i = 0 ; i < size_v ; i++){
           if(v[i] == digit){
            count++;
           }
        }
        return count;
    }
};