#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

void printVector(const std::vector<int>& vec) {
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, mx{};
        std::cin >> n;

        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
            mx = std::max(mx, v[i]);
        }

        std::vector<int> temp = v;
        std:sort(temp.begin(), temp.end());
        
        for (int i = 0; i < n; ++i) {
            if (v[i] == mx) {
                v[i] = v[i] - temp[n - 2];
                continue;
            }
            v[i] -= mx;
        }

        printVector(v);
    }

    return 0;
}
