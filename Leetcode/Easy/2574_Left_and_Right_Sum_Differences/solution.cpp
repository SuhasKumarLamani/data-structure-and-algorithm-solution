class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n= nums.size();
        vector<int> result;
        vector<int> start;
        vector<int>  end;

        int i,j,s,z;
        for(i=0;i<n;i++)
        {
            //int sum=0;
            int left=0;
            int right=0;
            for(j=0;j<i;j++)
            {
                left=left+nums[j];
            }
            start.push_back(left);

            for(j=i+1;j<n;j++)
            {
                right=right+nums[j];
            }
            end.push_back(right);
        }
        
            for(s=0;s<n;s++)
            {
                z=abs(start[s]-end[s]);
                 result.push_back(z);
            }
           // result.push_back(z);


        return result;
    }
};