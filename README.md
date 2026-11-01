# DESIGN AND ANALYSIS OF ALGORITHMS
## Dynamic Programming

This repository contains C implementations of classic and practical Dynamic Programming (DP) problems.

---

### Problems & Solutions

#### 1. Playing with Numbers (`question1.c`)
- **Problem Statement**:
  Find the total number of ways a positive integer $n$ can be represented as a sum of 1s and 3s.
- **DP Formulation**:
  - State: `dp[i]` represents the number of ways to form sum $i$.
  - Transition:
    $$dp[i] = dp[i-1] + (i \ge 3 \text{ ? } dp[i-3] : 0)$$
  - Base case: `dp[0] = 1`
- **Time Complexity**: $O(n)$
- **Space Complexity**: $O(n)$

---

#### 2. Playing with Chessboard (`question2.c`)
- **Problem Statement**:
  Given an $n \times n$ chessboard where each cell has a monetary value, find the maximum monetary path starting at $(0, 0)$ and reaching $(n-1, n-1)$ by only moving one step right or one step down.
- **DP Formulation**:
  - State: `dp[i][j]` is the maximum path sum to reach cell $(i, j)$.
  - Transition:
    $$dp[i][j] = a[i][j] + \max(dp[i-1][j], dp[i][j-1])$$
- **Time Complexity**: $O(n^2)$
- **Space Complexity**: $O(n^2)$

---

#### 3. Longest Common Subsequence (`question3.c`)
- **Problem Statement**:
  Find the length of the longest common subsequence (LCS) between two given strings $s_1$ and $s_2$.
- **Optimization**:
  Uses space optimization with 2 rows (`dp[2][m+1]`) to reduce auxiliary space from $O(n \times m)$ to $O(m)$.
- **Time Complexity**: $O(n \times m)$
- **Space Complexity**: $O(m)$

---

#### 4. Longest Non-Decreasing Subsequence (`question4.c`)
- **Problem Statement**:
  Find the length of the longest non-decreasing subsequence in a sequence of $n$ integers.
- **Algorithm**:
  Patience sorting / tails array with binary search (upper bound) to achieve $O(n \log n)$ time complexity.
- **Time Complexity**: $O(n \log n)$
- **Space Complexity**: $O(n)$

---

### How to Compile & Run

Using `gcc`:
```bash
gcc question1.c -o question1
./question1
```
