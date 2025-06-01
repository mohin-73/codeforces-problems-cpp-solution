#include <iostream>
#include <cstdio>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, sum{};
        std::cin >> n;
        std::vector<int> v(n);
        int cnt{};
        int odd = n / 2;
        int even = n - odd;
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
            if (i % 2 != v[i] % 2) ++cnt;
            if (v[i] % 2) {
                --odd;
            } else {
                --even;
            }
        }
        if (odd == 0 && even == 0) {
            std::cout << cnt / 2 << '\n';
        } else {
            std::cout << -1 << '\n';
        }
    }

    return 0;
}
