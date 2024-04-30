class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int n = arr.size();
        int left = 0;
        int count = 0; // Initialize count to 0
        for (int right = 0; right < n; ++right) {
            if (arr[right] != val) {
                arr[left++] = arr[right];
            } else {
                count++; // Increment count when value is found
            }
        }
        return n - count; // Return the new size of the array
    }
};
