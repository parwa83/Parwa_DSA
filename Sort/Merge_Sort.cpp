#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int> &nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] < nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } 
            else {
                temp.push_back(nums[right]);
                right++;
            }
        }
        while (left <= mid) temp.push_back(nums[left++]);
        while (right <= high) temp.push_back(nums[right++]);

        for (int i = low; i <= high; i++)
            nums[i] = temp[i - low];

        cout << "Sorted array:\n";

        for (int l=0;l<high;l++) 
            cout << nums[l] << " ";
            cout << endl;
    }

    void mergeSort(vector<int> &nums, int low, int high) {
        if (low >= high) return;

        int mid = low + (high - low) / 2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }

    void MS(vector<int> &nums, int n) {
        mergeSort(nums, 0, n - 1);
    }
};

int main() {
    Solution sol;
    vector<int> nums;
    int n, val;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        nums.push_back(val);
    }

    sol.MS(nums, nums.size());

    return 0;
}
