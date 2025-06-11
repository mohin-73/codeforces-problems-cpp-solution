#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, f{}, k{};
        std::cin >> n >> f >> k;

        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
        }

        int x = v[f - 1];
        std::sort(v.begin(), v.end(), std::greater<int>());

        int a{};
        for (int i = 0; i < k; ++i) {
            if (v[i] == x) {
                ++a;
                break;
            }
        }

        int b{};
        for (int i = k; i < n; ++i) {
            if (v[i] == x) {
                ++b;
                break;
            }
        }

        if (a == 1 && b == 1) {
            std::cout << "MAYBE\n";
        } else if (b == 1) {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
        }
    }

    return 0;
}
