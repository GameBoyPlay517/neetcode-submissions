class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //sort(nums.begin(), nums.end());

        if((nums.front() + nums.back()) == target)
        {
            int i = 0;
            int j = nums.size() - 1;
            vector<int> ans = {i,j};
            return ans;

        } 

        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if((nums[j] + nums[i]) == target)
                {
                    vector<int> ans = {i,j};
                    return ans;
                } 
            }
        }
    }
};
