#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, x{}, sum{};
        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            std::cin >> x;
            sum += x;
        }
        std::cout << (sum + n - 1) / n << '\n';
    }

    return 0;
}
