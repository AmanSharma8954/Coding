class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int val = 1;
        int zero = 0;
        for(auto it : nums){
            if( it == 0 )
                zero++;
            else
                val *= it;
        }
        
        if( zero == 0 ){
            for(auto it : nums)
                ans.push_back(val/it);
        } else if ( zero == 1 )
        {
            for(auto it : nums){
                if( it == 0 )
                    ans.push_back(val);
                else
                    ans.push_back(0);
            }
        } 
        else {
            for(auto it : nums)
                ans.push_back(0);
        }
        return ans;
    }
};
