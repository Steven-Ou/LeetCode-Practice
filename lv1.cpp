#include <iostream>
using namespace std; 

class Solution {
public:
    int twoSum(int& nums, int target) {
        int n = nums.size();
        for(int i =0; i<n-1;i++){
            for(int j =i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return{
                        i,j
                    };
                }
            }
        }
        return {};
    }
};
