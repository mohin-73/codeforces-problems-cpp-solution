#include <iostream>
#include <cstdio>
#include <vector>

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
        int mx{};
        for (int i = 0; i < n; ++i) {
            if (v[i] == 0) {
                int cnt = 1;
                ++i;
                while (i < n && v[i] == 0) {
                    ++i;
                    ++cnt;
                }
                mx = std::max(mx, cnt);
            }
        }
        std::cout << mx << '\n';
    }

    return 0;
}
