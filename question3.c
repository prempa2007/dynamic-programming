#include <stdio.h>
#include <string.h>

int main() {
    static char s1[10001], s2[10001];
    if (scanf("%10000s %10000s", s1, s2) != 2) {
        return 1;
    }
    int n = strlen(s1), m = strlen(s2);
    static int dp[2][10001];
    for (int i = 1; i <= n; i++) {
        int cur = i & 1, prev = cur ^ 1;
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[cur][j] = dp[prev][j - 1] + 1;
            } else {
                dp[cur][j] = dp[prev][j] > dp[cur][j - 1] ? dp[prev][j] : dp[cur][j - 1];
            }
        }
    }
    printf("%d\n", dp[n & 1][m]);
    return 0;
}
