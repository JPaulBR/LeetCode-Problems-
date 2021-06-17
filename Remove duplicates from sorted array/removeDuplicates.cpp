class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if (size==0 || size==1){
            return size;
        }
        int i = 0;
        for (int j=0;j<size;j++){
            if (nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        } 
        return i+1;
    }
};