#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{};
    std::cin >> n;

    int x{}, y{}, z{};
    int sum_x{}, sum_y{}, sum_z{};

    while (n--) {
        std::cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if (sum_x || sum_y || sum_z) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
    }

    return 0;
}
