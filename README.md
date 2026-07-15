# CPSC 335: Algorithm Engineering - Project 4: Longest Common Subsequence (LCS)

## 👥 Team

| Name | Role / Email |
| --- | --- |
| **Charles Edwill Gabut** | Student ([charles_g@csu.fullerton.edu](mailto:charles_g@csu.fullerton.edu)) |

---

## 🛠 Project Components

### 1. Longest Common Subsequence (Project 4 - Part B)
A sequence matching algorithm utilizing **Dynamic Programming** (DP) to compute the longest subsequence common to two input strings, complete with an interactive matrix visualization and a backtracking solver.
*   **Objective:** Compute the maximum length of a shared subsequence between two string inputs and reconstruct the exact string sequence using optimal path backtracking.
*   **Logic:**
    *   **DP Matrix Calculation:** Constructs a 2D table `dp[n+1][m+1]` where matching characters ($A[i-1] == B[j-1]$) increment the diagonal value ($dp[i-1][j-1] + 1$). Mismatched characters take the maximum of the adjacent cell values (top or left).
    *   **Backtracking:** Traverses backward from $dp[n][m]$ to $dp[0][0]$. Matching characters are prepended to the result string, while mismatches shift the coordinates toward the larger adjacent cell to trace the optimal LCS path.
    *   **Visualization:** Displays the populated DP matrix formatted with original string characters as row/column headers for clear debugging.
*   **Efficiency:** 
    *   **Time Complexity:** $\mathcal{O}(n \cdot m)$ where $n$ and $m$ are the lengths of the two input strings. Populating the grid requires a nested loop of size $n \times m$, while the backtracking step runs in linear time $\mathcal{O}(n + m)$.
    *   **Space Complexity:** $\mathcal{O}(n \cdot m)$ auxiliary space to store the 2D DP matrix table.

---

## 💻 Tech Stack

| Category | Tools / Concepts |
| --- | --- |
| **Language** | C++ (Standard C++17) |
| **Algorithms** | Dynamic Programming, Matrix Backtracking |
| **Data Structures** | 2D Vectors (`std::vector<std::vector<int>>`), File Streams (`std::ifstream`) |

---

## 🚀 Getting Started

### Prerequisites
Ensure your input test file is placed in the same directory as your executable:
*   **File Name:** `in4b.txt`

### Compilation
To compile the **LCS Dynamic Programming** executable, run the following command in your terminal:
```bash
./algo2_r.sh
