#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str{};
    std::cin >> str;

    int len = static_cast<int>(str.length());
    int cnt{};

    for (int i = 0; i < len; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') 
            ++cnt;
    }  

    if (cnt * 2 >= len) {
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    } else {
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    }

    std::cout << str << '\n';

    return 0;
}
