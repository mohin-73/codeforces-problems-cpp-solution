#include <iostream>
#include <cstdio>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str1{}, str2{}, ans{};
    std::cin >> str1 >> str2;

    int len = static_cast<int>(str1.length());
    ans.reserve(len);

    for (int i = 0; i < len; ++i) {
        ans += (str1[i] == str2[i]) ? '0' : '1';
    }

    std::cout << ans << '\n';

    return 0;
}
