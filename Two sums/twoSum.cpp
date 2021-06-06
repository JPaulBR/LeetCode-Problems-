class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> mp;
        vector<int> result;
        for (int i=0; i<nums.size();i++){
            int temp = target - nums[i];
            if (mp.find(temp)!=mp.end()){
                result.push_back(i);
                result.push_back(mp[temp]);
                return result;
            }
            mp[nums[i]]=i;
        }
        return result;
    }
};