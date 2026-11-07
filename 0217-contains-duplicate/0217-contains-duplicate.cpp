class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      sort(nums.begin(), nums.end());
            for(int j=1; j<nums.size(); j++){
                if(nums[j-1]==nums[j]){
                    return true;
                }
               
            }
        
        return false;
    }   

};