#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    int a[n], tails[n], len = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        int lo = 0, hi = len;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (tails[mid] <= a[i]) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        tails[lo] = a[i];
        if (lo == len) {
            len++;
        }
    }
    printf("%d\n", len);
    return 0;
}
