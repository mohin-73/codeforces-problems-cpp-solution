#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{}, n{};
    std::cin >> t;

    while (t--) {
        std::cin >> n;
        std::cout << 1 << ' ' << n - 1 << '\n';
    }

    return 0;
}
