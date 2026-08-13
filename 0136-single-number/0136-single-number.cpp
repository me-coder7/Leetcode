class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //unordered map approach
        //  unordered_map<int, int> map;

        // for(int x : nums)
        //     map[x]++;

        // for(auto it : map)
        // {
        //     if(it.second == 1)
        //         return it.first;
        // }

        // return 0;

        //XOR approach
         int ans = 0;
        for(int x : nums){
           
            ans = ans ^x;
        }
        return ans;
    }
};