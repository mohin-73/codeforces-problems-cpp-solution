#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int len{};
        std::cin >> len;

        std::string str{};
        std::cin >> str;
        std::sort(str.begin(), str.end());

        int ans = static_cast<int>(str[len - 1] - 96);
        std::cout << ans << '\n';
    }

    return 0;
}
