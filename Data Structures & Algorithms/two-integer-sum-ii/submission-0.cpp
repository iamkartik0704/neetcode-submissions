class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // ascending ordered array is given
        // if the sum is greater than target move right ptr backwards and vice versa
        int n = numbers.size();
        int left = 0;
        int right = n-1;
        while(left<right){
            if(numbers[left]+numbers[right]<target){
                left++;
            }else if(numbers[left]+numbers[right]>target){
                right--;
            }else{
                return {left+1,right+1};
            }
        }
        return {};
    }
};
