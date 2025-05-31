#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;
        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
        }
        std::sort(v.begin(), v.end());
        int cnt1{};
        for (int i = 0; i < n - 1; ++i) {
            if (v[i] % 2 == v[n - 1] % 2) {
                break;
            }
            ++cnt1;
        }
        int cnt2{};
        for (int i = n - 1; i > 0; --i) {
            if (v[i] % 2 == v[0] % 2) {
                break;
            }
            ++cnt2;
        }
        std::cout << std::min(cnt1, cnt2) << '\n';
    }

    return 0;
}
