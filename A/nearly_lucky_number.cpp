#include <iostream>
#include <string>

bool isLucky(int n) {
    if (n == 0) return false;
    while (n > 0) {
        int d = n % 10;
        if (d != 4 && d != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str{};
    std::cin >> str;

    int cnt{};

    for (char ch : str) {
        if (ch == '4' || ch == '7') {
            ++cnt;
        }
    }

    if (isLucky(cnt)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
