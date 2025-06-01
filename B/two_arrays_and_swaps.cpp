#include <iostream>
#include <cstdio>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, k{};
        std::cin >> n >> k;
        k = std::min(k, n);

        std::vector<int> a(n);
        std::vector<int> b(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            std::cin >> b[i];
        }

        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end(), std::greater<int>());

        int cnt{};
        for (int i = 0; i < k; ++i) {
            if (a[i] < b[cnt]) {
                std::swap(a[i], b[cnt]);
                ++cnt;
            } else {
                break;
            }
        }

        int sum = std::accumulate(a.begin(), a.end(), 0);
        std::cout << sum << '\n';
    }

    return 0;
}
