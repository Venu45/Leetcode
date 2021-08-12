class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int , int> temp;
        bool res = false;
        for(int ii=0;ii<nums.size();ii++){
            temp[nums[ii]]++;
            if(temp[nums[ii]] > 1){
                res = true;
            }
        }
        return res;
        
    }
       
    
};
