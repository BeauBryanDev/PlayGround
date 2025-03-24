//Search in Routated Array  nums[ target ] if not in nums return -1 ....

#include <iostream>
#include <vector>

using namespace std;

int p = 0;

// Fix: Change function declaration to match the definition later
int SearchInRotatedArray(vector<int> &nums, int target);

int main(void) {

    vector<int> Arr = {1, 3, 5, 7, 9, 2, 4, 6, 8};
    
    int trgt = 5;

    p = SearchInRotatedArray(Arr, trgt);

    // Fix: p should be checked to output appropriate message
    if (p == -1)
        cout << "Target was Never Found in Array\n";
    else
        cout << "Target was Found at Position: " << p << " in Array Nums\n";

    return 0;
}

// Fix: Function name corrected to "SearchInRotatedArray"
int SearchInRotatedArray(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int mid = 0;

    while (left <= right) {
        mid = (left + right) / 2;

        // If target is found
        if (nums[mid] == target)
            return mid;

        // Check if the left half is sorted
        if (nums[left] <= nums[mid]) {
            // If target is within the left half range
            if (target >= nums[left] && target < nums[mid])
                right = mid - 1; // Fix: Set right to mid - 1
            else
                left = mid + 1;
        }
        // Otherwise, the right half is sorted
        else {
            // If target is within the right half range
            if (target > nums[mid] && target <= nums[right])
                left = mid + 1; // Fix: Set left to mid + 1
            else
                right = mid - 1;
        }
    }

    return -1; // Target was not found
}



