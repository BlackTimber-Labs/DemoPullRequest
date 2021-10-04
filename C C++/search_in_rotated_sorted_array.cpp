class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        int min = 0;
        while(start <= end) {
            if(arr[start] < arr[end]) {
                min = start;
                break;
            }
            int mid = start + (end-start)/2;
            int next = (mid+1)%n;
            int prev = (mid+n-1)%n;
            
            if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
                min = mid;
                break;
            }
            
            if(arr[mid] >= arr[start]) {
                start = mid +1;
            } else if(arr[mid] <= arr[end]) {
                end = mid -1;
            }
        }
        
        
        start = 0;
        end = min-1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(arr[mid] == target) {
                return mid;
            } 
            if(arr[mid] < target) {
                start = mid+1;
            } else if(arr[mid] > target) {
                end = mid - 1;
            }
        }
        
        start = min;
        end = n-1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(arr[mid] == target) {
                return mid;
            } 
            if(arr[mid] < target) {
                start = mid+1;
            } else if(arr[mid] > target) {
                end = mid - 1;
            }
        }
        
        return -1;
    }
};
