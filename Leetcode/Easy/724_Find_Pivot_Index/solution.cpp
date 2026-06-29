class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n =nums.size();
        vector<int> result;

        for(int i=0;i<n;i++)
        {
           /* int pivot = nums[0];
            for(int j=0;j<n;j++)
            {
                if(1)
                {

                }
            }*/

            int left=0;
            int right=0;

            for(int j=0;j<i;j++)
            {
                left=left+nums[j];
            }

            for(int j=i+1;j<n;j++) 
            {
               right=right+nums[j];
            }

            if(left==right)
            {
                return i;
            }
        }
        return -1;
    }
};