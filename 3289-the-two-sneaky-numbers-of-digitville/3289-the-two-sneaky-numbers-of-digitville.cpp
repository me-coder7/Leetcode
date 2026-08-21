class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> hash(size-2);
        vector<int> ans;

        for(int i = 0 ; i < size ; i ++){
            hash[nums[i]] = hash[nums[i]]+1;
        }

        for(int i = 0 ; i < size-2; i++){
            if(hash[i] == 2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};