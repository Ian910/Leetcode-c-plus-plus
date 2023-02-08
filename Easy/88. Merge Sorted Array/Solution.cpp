class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0)
            nums1 = nums2;
        else {
            int i = m - 1, j = n - 1, k = m + n - 1;
            while (j >= 0) {
                nums1[k--] = (i < 0 || nums1[i] < nums2[j]) ? nums2[j--] : nums1[i--];
            }
        }
    }
};