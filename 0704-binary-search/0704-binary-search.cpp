class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high = nums.size()-1;

        while (low <= high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid] == target) //formula
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1; //formula
            }
            else
            {
                high = mid -1; //formula
            }
        }
        
        return -1;
        
    }
};