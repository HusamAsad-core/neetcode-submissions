class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]){
                cout<<mp[nums[i]]<<" "<<i-1;
                return {mp[nums[i]]-1 , i};
            } 
            mp[target-nums[i]] = i+1;
        }
        return {};
    }
};

// 4 5 6
// 6 1
// 5 2
// 4 3


