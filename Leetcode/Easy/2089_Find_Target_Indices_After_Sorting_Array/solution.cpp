class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>  result;

        int i,j,min_index,temp,z;
        for(i=0;i<n;i++)
        {
            min_index=i;
            for(j=i+1;j<n;j++)
            {
                if(nums[j]<=nums[min_index])
                {
                    min_index=j;
                }
               
               
            }
             if(min_index !=i )
                {
                    temp=nums[i];
                    nums[i]=nums[min_index];
                    nums[min_index]=temp;
                }
        }
        for(z=0;z<n;z++)
        {
            if(target==nums[z] )
            {
                result.push_back(z);
               // result.push_back(nums[z+1]);
            }
        }
        return result;
    }
};