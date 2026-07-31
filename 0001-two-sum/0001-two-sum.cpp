#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;    
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> m; // Map to store number and its index]
       vector<int> result; // Vector to store the result indices
       for (int i = 0; i < nums.size(); i++) {
           int first = nums[i]; // Current number
           int second = target - first; // Number needed to reach the target
           
           
           if (m.find(second) != m.end()) {
             result.push_back(i);  // Add the current index to the result
            result.push_back(m[second]);// Add the index of the second number from the map to the result
              
               break; // Break the loop since we found the solution
           }
           m[first] = i;// Add the current number and its index to the map for future reference
       }
       
        return result;
    
    }
};