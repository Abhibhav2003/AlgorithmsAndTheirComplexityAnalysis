#include <iostream>
#include <vector>

using namespace std;

bool subsetSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));

    // Base case: an empty set can always have a sum of 0
    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    // Fill the dp array
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= target; j++) {
            if (nums[i - 1] <= j) {
                // If the current number can be included, then check if the remaining sum is possible
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            } else {
                // If the current number is greater than the current sum, it cannot be included
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // The answer is at the bottom-right cell of the dp array
    return dp[n][target];
}

int main() {
    vector<int> nums = {2, 3, 7, 8, 10};
    int target = 11;

    if (subsetSum(nums, target)) {
        cout << "Subset with sum " << target << " exists." << endl;
    } else {
        cout << "No subset with sum " << target << " exists." << endl;
    }

    return 0;
}
