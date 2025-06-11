#include <iostream>
#include <cstdio>
#include <set>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, k{};
        std::cin >> n;

        std::set<int> s;
        for (int i = 0; i < n; ++i) {
            std::cin >> k;
            s.insert(k);
        }

        k = n - s.size();

        if (k % 2 == 0) {
            std::cout << s.size() << '\n';
        } else {
            std::cout << s.size() - 1 << '\n';
        }
    }

    return 0;
}
