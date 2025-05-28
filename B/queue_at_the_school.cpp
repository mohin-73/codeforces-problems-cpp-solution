#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, t{};
    std::cin >> n >> t;

    std::string str{};
    std::cin >> str;

    for (int step = 0; step < t; ++step) {
        for (int i = 1; i < n; ++i) {
            if (str[i] == 'G' && str[i - 1] == 'B') {
                std::swap(str[i], str[i - 1]);
                ++i;
            }
        }
    }
    
    std::cout << str << '\n';

    return 0;
}
