#include <iostream>
#include <cstdio>
#include <string>

std::string hour(int h) {
    if (h == 0 || h == 12) {
        return "12";
    }
    h = h % 12;
    return (h < 10 ? "0" : "") + std::to_string(h);
}

std::string minute(int m) {
    return (m < 10 ? "0" : "") + std::to_string(m);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int hh{}, mm{};
        std::string s{};
        std::cin >> s;

        hh = (int)(s[1] - '0');
        hh = hh + ((int)(s[0] - '0') * 10);

        mm = (int)(s[4] - '0');
        mm = mm + ((int)(s[3] - '0') * 10);

        std::string h = hour(hh);
        std::string m = minute(mm);
        std::string period = (hh >= 12) ? "PM" : "AM";

        std::cout << h << ':' << m << ' ' << period << '\n';
    }

    return 0;
}
