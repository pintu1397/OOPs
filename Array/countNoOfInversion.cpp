#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMerge(vector<int> &nums, int l, int mid, int r) {
        int n1 = mid - l + 1;
        int n2 = r - mid;
        int left[n1];
        int right[n2];

        for (int i = 0; i < n1; i++) left[i] = nums[l + i];
        for (int i = 0; i < n2; i++) right[i] = nums[mid + 1 + i];

        int res = 0;
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                nums[k++] = left[i++];
            } else {
                nums[k++] = right[j++];
                res += n1 - i;
            }
        }

        while (i < n1) nums[k++] = left[i++];
        while (j < n2) nums[k++] = right[j++];

        return res;
    }

    int countInversion(vector<int> &nums, int l, int r) {
        int res = 0;
        if (l < r) {
            int mid = l + (r - l) / 2;
            res += countInversion(nums, l, mid);
            res += countInversion(nums, mid + 1, r);
            res += countMerge(nums, l, mid, r);
        }
        return res;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution ob;
    cout << ob.countInversion(nums, 0, n - 1);
    return 0;
}
