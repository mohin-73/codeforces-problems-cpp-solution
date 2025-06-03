#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

std::string solve(std::string s) {
    int len = static_cast<int>(s.length());

    for (int i = 0; i < len; ++i) {
        if (s[i] == 'q') {
            s[i] = 'p';
        } else if (s[i] == 'p') {
            s[i] = 'q';
        }
    }
    reverse(s.begin(), s.end());
    
    return s;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        std::string str{};
        std::cin >> str;

        std::string ans = solve(str);
        std::cout << ans << '\n';
    }

    return 0;
}
