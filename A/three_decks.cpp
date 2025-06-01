#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        long long a{}, b{}, c{};
        std::cin >> a >> b >> c;
        long long sum = a + b + c;
        if (sum % 3 == 0 && (sum / 3) >= b) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
