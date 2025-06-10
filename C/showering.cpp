#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, s{}, m{};
        std::cin >> n >> s >> m;

        int first{}, flag{};
        int li{}, ri{}, t{};

        for (int i = 0; i < n; ++i) {
            std::cin >> li >> ri;
            t = li - first;
            if (t >= s) flag = 1;
            first = ri;
        }

        t = m - first;
        if (t >= s) flag = 1;

        if (flag == 1) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
