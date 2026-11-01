#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    int a[n][n];
    long long dp[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = a[i][j];
            } else if (i == 0) {
                dp[i][j] = dp[i][j - 1] + a[i][j];
            } else if (j == 0) {
                dp[i][j] = dp[i - 1][j] + a[i][j];
            } else {
                long long best = dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1];
                dp[i][j] = best + a[i][j];
            }
        }
    }
    printf("%lld\n", dp[n - 1][n - 1]);
    return 0;
}
