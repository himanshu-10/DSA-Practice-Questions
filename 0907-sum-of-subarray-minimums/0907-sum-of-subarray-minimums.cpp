class Solution {
public:
    const int MOD = 1000000007;
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
    stack<int> s;
    vector<long long> left(n), right(n);

    // Calculate the number of elements to the left of the current element that are greater than or equal to it
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && arr[i] < arr[s.top()]) {
            s.pop();
        }
        left[i] = s.empty() ? i + 1 : i - s.top();
        s.push(i);
    }

    while (!s.empty()) {
        s.pop();
    }

    // Calculate the number of elements to the right of the current element that are greater than or equal to it
    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && arr[i] <= arr[s.top()]) {
            s.pop();
        }
        right[i] = s.empty() ? n - i : s.top() - i;
        s.push(i);
    }

    long long result = 0;

    // Calculate the contribution of each element to the final result
    for (int i = 0; i < n; ++i) {
        result = (result + arr[i] * left[i] * right[i]) % MOD;
    }

    return static_cast<int>(result);
    }
};