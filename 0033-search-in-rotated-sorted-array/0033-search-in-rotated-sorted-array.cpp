
int getPivot(vector<int>& nums, int n){
    int s = 0;
    int e = n-1;
    
     while(s<e){
        int mid = s+(e-s)/2;

        if(nums[mid] >=nums[0]){
            s =mid +1;
        }
        else {
            e =mid;
        }
     }
     return s;
}

int binarySearch(vector<int>& nums, int s, int e ,int key){
    
     
    while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid]==key){
            return  mid;
        }
        else if( nums[mid]<key){
            s = mid+1;
        }
        else {
            e = mid-1;
        }
    }
    return -1;
}

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();

        int pivot = getPivot(nums, n);

        if( target>=nums[pivot] && target<= nums[n-1]){
            return binarySearch (nums , pivot , n-1 , target);
        }
        else
        {
            return binarySearch (nums , 0 , pivot-1, target);
        }
        
        

        
    }
};