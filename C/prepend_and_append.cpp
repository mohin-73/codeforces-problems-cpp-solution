#include <iostream>
#include <cstdio>
#include <string>

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

        for (int i = 0, j = len - 1; i < j; ++i, --j) {
            if (str[i] == str[j]) break;
            len -= 2;
        }

        std::cout << len << '\n';
    }

    return 0;
}
