class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int,int> mp;
        int n = nums.size();
        for(int i = 0; i < n; ++i ){
            if(mp.find(nums[i]) == mp.end()){
                mp[target-nums[i]] = i;
            }else{
                ans.push_back(mp[nums[i]]);
                ans.push_back(i);
                return ans;
            }
        }
        return ans;
    }
};
