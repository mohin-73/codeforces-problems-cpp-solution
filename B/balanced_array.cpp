#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, sum{};
        std::cin >> n;
        if (n % 4 == 0) {
            std::cout << "YES\n";
            for (int i = 1; i <= (n / 2); ++i) {
                std::cout << i + i << ' ';
                sum += (i + i);
            }
            for (int i = 1; i < (n / 2); ++i) {
                std::cout << i + i - 1 << ' ';
                sum -= (i + i - 1);
            }
            std::cout << sum << '\n';
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
