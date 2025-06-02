#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <climits>

int minDifference(int n, std::vector<int>& v) {
    int res = INT_MAX;
    for (int i = 1; i < n; ++i) {
        if (v[i] - v[i - 1] < res) {
            res = v[i] - v[i - 1];
        }
    }
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        std::vector<int> vec(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> vec[i];
        }
        std::sort(vec.begin(), vec.end());

        int ans = minDifference(n, vec);
        std::cout << ans << '\n';
    }

    return 0;
}
