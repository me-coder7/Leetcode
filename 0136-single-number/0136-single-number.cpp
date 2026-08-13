class Solution {
public:
    int singleNumber(vector<int>& nums) {
         unordered_map<int, int> map;

        for(int x : nums)
            map[x]++;

        for(auto it : map)
        {
            if(it.second == 1)
                return it.first;
        }

        return 0;
    }
};