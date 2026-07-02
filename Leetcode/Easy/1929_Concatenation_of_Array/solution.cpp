class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        int i,j;
        for(i=0;i<2;i++)
        {
            for(j=0;j<n;j++)
            {
                result.push_back(nums[j]);
            }
        }
        return result;


    }
};