#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void find_lcs(string a, string b) {
    int n = a.size();
    int m = b.size();

    string found_strings = "";
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    // n+1 and m+1 because we want to include the zeros for the base case
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
        //===========================================================
            if (a[i - 1] == b[j - 1]) { //if the characters match then add 1 to the value of the diagonal up left
                dp[i][j] = dp[i- 1][j- 1] + 1;


                //if (dp[i][j] > current_length) {
                //current_length = dp[i][j];
                //found_strings = found_strings + a[i - 1];
                //}
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); // find the max of the left and top values
                                                            // then return the max value 
            }
        //==========================================================
        }
    }


    //&& current_string != a[i - 1]
    cout << "    ";
    for (auto &b : b) {
        cout << b << " ";
    }
    cout << endl;
    for (int i = 0; i <= n; i++) {
         if (i == 0) {
            cout << "  ";
        } else {
         cout << a[i - 1] << " ";
        }
        for (int j = 0; j <= m; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    //backtrack to find the longest common subsequence
    int i = n;
    int j = m;
    while (i > 0 && j > 0) {
        //if the characters mathed then add it to the foudn string
        if (a[i - 1] == b[j - 1]) {
            found_strings = a[i - 1] + found_strings; //add the matched character to the front of the found string
            i--; 
            j--; //disregard the matched characters and move diagonally up left
        } else if (dp[i - 1][j] > dp[i][j - 1]) { //if the value of left is greater the top then move to the left
            i--;
        } else { //otherwise move up 
            j--;
        }
    }



    cout << "Longest Common Subsequence: " << found_strings << endl;
    cout << "Length of Longest Common Subsequence: " << dp[n][m] << endl;

}
