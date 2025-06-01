#include <iostream>
#include <cstdio>
#include <set>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, in{};
        std::cin >> n;
        std::set<int> s;
        for (int i = 0; i < n; ++i) {
            std::cin >> in;
            s.insert(in);
        }
        std::cout << s.size() << '\n';
    }

    return 0;
}
