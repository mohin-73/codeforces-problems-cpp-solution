#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, len{}, ans{};
    std::cin >> n;

    std::string str{};
    std::cin >> str;

    len = static_cast<int>(str.length());

    for (int i = 1; i < len; ++i) {
        if (str[i] == str[i - 1]) {
            ++ans;
        }
    }

    std::cout << ans << '\n';

    return 0;
}
