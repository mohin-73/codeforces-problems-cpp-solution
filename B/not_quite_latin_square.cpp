#include <iostream>
#include <string>
#include <algorithm>

char missingLetter(std::string s) {
    std::sort(s.begin(), s.end());
    std::string st = "ABC";

    for (char c : st) {
        if (s.find(c) == std::string::npos) {
            return c;
        }
    }
    return 'X'; // Not Needed
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        std::string s;
        for (int i = 0; i < 3; ++i) {
            std::string row;
            std::cin >> row;
            if (row.find('?') != std::string::npos) {
                s = row;
            }
        }

        char ans = missingLetter(s);
        std::cout << ans << '\n';
    }

    return 0;
}
