class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(s==e){
                return nums[s];
            }
            if(mid%2==0){
                if(nums[mid]==nums[mid+1]){
                    s=mid+2;
                }
                else e=mid;
            }
            if(mid%2!=0){
                if(nums[mid]==nums[mid-1]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
};