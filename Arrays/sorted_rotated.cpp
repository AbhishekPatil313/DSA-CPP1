//function to cheak array is rotated and sorted.
// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int count = 0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[(i+1)%nums.size()]<nums[i]){
//                 count++;
//             }
//         }
//         return count<=1;
//     }
// };