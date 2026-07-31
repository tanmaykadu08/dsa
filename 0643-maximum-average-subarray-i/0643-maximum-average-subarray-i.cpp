class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int n=nums.size();
        int window = 0;
         //first window
         for(int i=0; i<k; i++)
         {
            window += nums[i];
         }
         int maxsum = window; 

        //second window
         for(int i=k; i<n ; i++)
         {
            window += nums[i];
            window -= nums[i-k];
            maxsum = max(maxsum, window);
         }
        
        return (double)maxsum / k;
        
    }
};