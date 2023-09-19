class Solution {
private:
    void solve(vector<int>& nums,int index,vector<vector<int>> &ans){
        // base case 
        if(index >= nums.size()){
            // put nums into ans
            ans.push_back(nums);
            return ;
        }

        //for 
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            // recursive relation
            solve(nums,index+1,ans);
            // backtracking -> after find the final ans we need to nums in previous state
            swap(nums[index],nums[i]);
        }

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index = 0;
        solve(nums,index,ans);
        return ans;
    }
};
