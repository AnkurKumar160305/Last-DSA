
// Example Input
// n = 6, k = 2
// a = [0, 3, 4, 2, 6, 2]
// We want MEX(a) = 2.

// Step 1: Identify numbers < k
// Numbers in [0, k-1] = [0, 1]
// Check which are present in the array:
// 0 → present ✅
// 1 → missing ❌
// Action: We need 1 operation to add 1.
// We can pick any element > k (like 3 or 4) and change it to 1.

// Step 2: Identify occurrences of k
// k = 2
// Check array: [0, 3, 4, 2, 6, 2] → 2 occurs twic
// Action: Both 2’s must be removed/changed to something else (any number not breaking step 1).
// This takes 2 operations.

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> freq(k, 0);
        int countK = 0, countAboveK = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < k) freq[a[i]] = 1;
            else if (a[i] == k) countK++;
            else countAboveK++;
        }

        int missing = k;
        for (int i = 0; i < k; i++) missing -= freq[i];

        // We can reuse countAboveK elements to fill missing numbers
        int ops = max(missing, countK);

        cout << ops << "\n";
    }
    return 0;
}

