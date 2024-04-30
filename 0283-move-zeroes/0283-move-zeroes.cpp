class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int left = 0;
        int right = 1;
        int n=arr.size();
    while (right < n && left < n) {
        if (arr[left] == 0 && arr[right] != 0) {
            swap(arr[left], arr[right]);
            left++;
            right++;
        } else if (arr[left] == 0 && arr[right] == 0) {
            right++;
        } else {
            left++;
            right++;
        }
    }

        
    }
};