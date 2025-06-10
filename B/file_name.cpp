#include <iostream>
#include <cstdio>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int len{}, ans{};
    std::cin >> len;

    std::string str{};
    std::cin >> str;
    
    for (int i = 0; i < len; ++i) {
        if (str[i] == 'x') {
            int cnt = 1;
            while (str[++i] == 'x') {
                ++cnt;
            }
            if (cnt > 2) {
                ans = ans + cnt - 2;
            }
        }
    }

    std::cout << ans << '\n';

    return 0;
}
