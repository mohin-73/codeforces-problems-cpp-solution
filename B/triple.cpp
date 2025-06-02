#include <iostream>
#include <cstdio>
#include <map>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, in{};
        std::cin >> n;

        std::map<int, int> mp;
        int ans = -1;

        for (int i = 0; i < n; ++i) {
            std::cin >> in;
            ++mp[in];
            if (mp[in] == 3) ans = in;
        }

        std::cout << ans << '\n';
    }

    return 0;
}
