class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     // 0 to i-1 => non zeroes
        //i to j zeroes
        int i=0;
        int j=0;
        int n = nums.size();
        while(j<n){
            if(nums[j]==0){
                j++;
            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }

    }
};
