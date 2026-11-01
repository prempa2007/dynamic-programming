#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    long long dp[n + 1];
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1];
        if (i >= 3) {
            dp[i] += dp[i - 3];
        }
    }
    printf("%lld\n", dp[n]);
    return 0;
}
