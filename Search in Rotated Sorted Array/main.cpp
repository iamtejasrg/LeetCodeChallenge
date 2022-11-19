class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l =0, mid, h=nums.size()-1, n=nums.size();
        //if(n==0) return -1;
        
        while(l<=h){
            mid = (l+h)/2;
            
            if(nums[mid] == target) return mid;
            
            else if(nums[mid] > nums[n-1]) {
                if(target > nums[mid] || nums[0]>target) l = mid+1;
                else h = mid-1;
            }
            
            else if(nums[mid] < nums[0]) {
                if(target < nums[mid] || nums[n-1]<target) h = mid-1;
                else l = mid+1;
                
            }
            else if(target > nums[mid]) l=mid+1;
            else h=mid-1;
            
            
        }
        
        return -1;
        
    }
};