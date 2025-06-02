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

        int x{}, y{};
        std::string ans = "NO";
        for (int i = 0; i < len; ++i) {
            if (str[i] == 'L') {
                --x;
            } else if (str[i] == 'R') {
                ++x;
            } 
            else if (str[i] == 'U') {
                ++y;
            }
            else {
                --y;
            }
            if (x == y && x == 1) {
                ans = "YES";
                break;
            }
        }

        std::cout << ans << '\n';
    }

    return 0;
}
