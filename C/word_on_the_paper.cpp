#include <iostream>
#include <cstdio>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        std::string str{}, ans{};
        for (int i = 0; i < 8; ++i) {
            std::cin >> str;
            for (int j = 0; j < 8; ++j) {
                if (str[j] != '.') {
                    ans += str[j];
                    break;
                }
            }
        }
        std::cout << ans << '\n';
    }

    return 0;
}
