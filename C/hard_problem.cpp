#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int m{}, a{}, b{}, c{}, ans{};
        std::cin >> m >> a >> b >> c;

        ans = std::min(m, a) + std::min(m, b);
        m = m * 2 - ans;
        ans = ans + std::min(m, c);
        std::cout << ans << '\n';
    }

    return 0;
}
