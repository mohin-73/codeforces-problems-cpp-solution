#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{};
    std::cin >> n;

    std::vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());

    for (int i = 0; i < n; ++i) {
        std::cout << v[i] << ' ' << v[2 * n - i - 1] << '\n';
    }

    return 0;
}
