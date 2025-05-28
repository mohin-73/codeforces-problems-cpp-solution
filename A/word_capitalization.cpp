#include <iostream>
#include <cstdio>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str{};
    std::cin >> str;
    
    str[0] = std::toupper(str[0]);
    std::cout << str << '\n';

    return 0;
}
