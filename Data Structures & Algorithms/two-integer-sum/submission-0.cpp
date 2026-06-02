class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        int flag = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(i!=j){
                    if(nums[i]+nums[j] == target){
                        flag = 1;
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                }
                if(flag == 1) break;
            }
        }
        return ans;
    }
};
