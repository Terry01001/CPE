//uva108
#include <climits>//? 
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int max_sum = INT_MIN;
    int N = 0, sum = 0;
    vector<vector<int> > matrix, col_dp(matrix);
    while (cin >> N && N) {
        max_sum = INT_MIN;
        matrix.assign(N + 1, vector<int>(N, 0));
        col_dp.assign(matrix.begin(), matrix.end());

        // Input
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> matrix[i][j];
            }
        }

        // Create column dp table
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < N; j++) {
                col_dp[i][j] = col_dp[i - 1][j] + matrix[i][j];
            }
        }

        // List all possible situations
        for (int i = 1; i <= N; i++) {
            for (int j = i; j <= N; j++) {
                sum = 0;
                for (int k = 0; k < N; k++) {
                    sum += col_dp[j][k] - col_dp[i - 1][k];
                    if (sum > max_sum) {
                        max_sum = sum;
                    }
                    if (sum < 0) {
                        sum = 0;
                    }
                }
            }
        }
        cout << max_sum << endl;
    }
    return 0;
}
