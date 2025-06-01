#include <iostream>
#include <cstdio>
#include <set>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, num{};
        std::cin >> n;

        std::set<int> s;
        for (int i = 0; i < n; ++i) {
            std::cin >> num;
            s.insert(num);
        }

        if (n == s.size()) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
