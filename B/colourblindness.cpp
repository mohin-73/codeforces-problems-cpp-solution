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

        std::string str1{}, str2{};
        std::cin >> str1 >> str2;

        for (int i = 0; i < len; ++i) {
            if (str1[i] == 'G') {
                str1[i] = 'B';
            }
            if (str2[i] == 'G') {
                str2[i] = 'B';
            }
        }

        if (str1 == str2) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
