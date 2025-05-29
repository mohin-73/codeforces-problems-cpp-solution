#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, k{};
    std::cin >> n;

    std::vector<int> v[3];
    for (int i = 0; i < n; ++i) {
        std::cin >> k;
        v[k - 1].push_back(i + 1);
    }

    int x = std::min(v[0].size(), v[1].size());
    x = std::min(x, (int)(v[2].size()));

    std::cout << x << '\n';
    for (int i = 0; i < x; ++i) {
        std::cout << v[0][i] << ' ';
        std::cout << v[1][i] << ' ';
        std::cout << v[2][i] << '\n';
    }
    
    return 0;
}
