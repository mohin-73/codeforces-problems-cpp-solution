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

        ++v[0];
        int ans = 1;
        for (int i = 0; i < n; ++i) {
            ans *= v[i];
        }

        std::cout << ans << '\n';
    }

    return 0;
}
