class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        vector<int> a(n+1,0);

        //a={};

        for(int i=0;i<n;i++)
        {
            
            if(a[nums[i]]==0)
            {
                a[nums[i]]=1;
            }
            
            else
            {
                return nums[i];
            }
        }
        return -1;
    }
};