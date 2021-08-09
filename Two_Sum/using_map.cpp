#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>

class Solution {
public:
    vector < int > twoSum(vector<int>& nums, int target) {
        vector <int> res;
        map <int , int> temp;
        for(int ii=0;ii<nums.size();ii++){
            temp.insert(pair< int , int  > (nums[ii] , ii+1) );
            if(temp[target-nums[ii]] >0 && ii != temp[target-nums[ii]]-1  ){
                res.push_back(ii);
                res.push_back(temp[target-nums[ii]]-1);
                break;
            }
        }
        return res;
    }
    
    
};