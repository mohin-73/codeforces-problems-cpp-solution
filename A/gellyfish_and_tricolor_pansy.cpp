#include <iostream>
#include <cstdio>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int a{}, b{}, c{}, d{}, g{}, f{};
        std::cin >> a >> b >> c >> d;
        g = std::min(a, c);
        f = std::min(b, d);
        if (g >= f) {
            std::cout << "Gellyfish\n";
        } else {
            std::cout << "Flower\n";
        }
    }

    return 0;
}
