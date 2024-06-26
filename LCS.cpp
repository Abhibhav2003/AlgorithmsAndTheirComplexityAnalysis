#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string longestCommonSubsequence(string text1, string text2) {
    int m = text1.size();
    int n = text2.size();

    // Initialize the 2D dp array with zeros
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Fill the dp array
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Reconstruct the longest common subsequence
    string lcs;
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (text1[i - 1] == text2[j - 1]) {
            lcs = text1[i - 1] + lcs;
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    return lcs;
}

int main() {
    string text1 = "abcde";
    string text2 = "ace";

    cout << "Longest Common Subsequence: " << longestCommonSubsequence(text1, text2) << endl;

    return 0;
}
