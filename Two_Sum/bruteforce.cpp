#include <bits/stdc++.h>
#include <iostream>
#include <vector>

class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> res;
        for (int ii=0;ii<nums.size();ii++){
            for (int jj=ii+1;jj<nums.size();jj++){
                if(nums[ii]+nums[jj]==target){
                    res.push_back(ii);
                    res.push_back(jj);
                    break;
                }
            }
        }
        return res;
    } 
};