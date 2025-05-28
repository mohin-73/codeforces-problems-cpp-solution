#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str{}, ans{};
    std::cin >> str;

    int len = static_cast<int>(str.length());

    for (int i = 0; i < len; ++i) {
        if (str[i] == '.') {
            ans += '0';
        } else if (str[i + 1] == '-') {
            ans += '2';
            ++i;
        } else {
            ans += '1';
            ++i;
        }
    }

    std::cout << ans << '\n';

    return 0;
}
