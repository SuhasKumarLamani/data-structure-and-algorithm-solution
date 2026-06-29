class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        /*int i,n,j;
        cout<<"enter the number for array "<<"\n";
        cin>>n;
        int a[100];
        //int sum=0;*/
        int n = nums.size();
        vector<int> result;

        for(int i=0;i<n;i++)
        {
             int sum=0;
            for(int j=0;j<i+1;j++)
            {
               /* if(j==1)
                {
                    cout<<a[j];
                }*/
                sum=sum+nums[j];
              //  sum=sum+a[j];
                //a[j]=sum;

            }
           /* a[j]=sum;
            cout<<a[j];*/
            result.push_back(sum);
            
        }
         return result ;
    }
 
};