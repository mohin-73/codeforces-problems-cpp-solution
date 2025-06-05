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
        std::string str{};
        std::cin >> str;

        std::string temp = str;

        std::sort(temp.begin(), temp.end());
        if (str != temp) {
            std::cout << "YES\n";
            std::cout << temp << '\n';
            continue;
        }

        std::reverse(temp.begin(), temp.end());
        if (str != temp) {
            std::cout << "YES\n";
            std::cout << temp << '\n';
            continue;
        }

        std::cout << "NO\n";
    }

    return 0;
}

