#include <iostream>
#include <string>
#include <bitset>

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

        std::bitset<26> seen;
        int ans{};

        for (char ch : str) {
            int index = ch - 'A';
            if (!seen[index]) {
                ans += 2;
                seen[index] = true;
            } else {
                ++ans;
            }
        }

        std::cout << ans << '\n';
    }

    return 0;
}
