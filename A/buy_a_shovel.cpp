#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k{}, r{}, ans{};
    std::cin >> k >> r;

    int t = k;
    while (k % 10 != 0 && k % 10 != r) {
        k += t;
        ++ans;
    }

    std::cout << ans + 1 << '\n';

    return 0;
}
