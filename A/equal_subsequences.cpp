#include <iostream>
#include <cstdio>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, k{};
        std::cin >> n >> k;

        std::string ans{};
        for (int i = 0; i < n; ++i) {
            ans += '0';
        }
        for (int i = 0; i < k; ++i) {
            ans[i] = '1';
        }

        std::cout << ans << '\n';
    }

    return 0;
}
