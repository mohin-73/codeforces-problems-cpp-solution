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

        int in{}, one{}, two{};
        for (int i = 0; i < n; ++i) {
            std::cin >> in;
            if (in == 1) {
                ++one;
            } else {
                ++two;
            }
        }

        if ((one % 2 == 1) || (two % 2 == 1 && one == 0)) {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
        } 
    }

    return 0;
}
