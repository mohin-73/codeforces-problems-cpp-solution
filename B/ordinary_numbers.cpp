#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        int ans{};
        for (int i = 1; i < 10; ++i) {
            long long temp = i;
            while(temp <= n) {
                ++ans;
                temp = temp * 10 + i;
            }
        }

        std::cout << ans << '\n';
    }

    return 0;
}
