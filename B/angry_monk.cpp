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
        int n{}, k{};
        std::cin >> n >> k;
        
        std::vector<int> v(k);
        for (int i = 0; i < k; ++i) {
            std::cin >> v[i];
        }
        std::sort(v.begin(), v.end());

        long long ans{};
        for (int i = 0; i < k - 1; ++i) {
            ans += (2LL * v[i] - 1);
        }

        std::cout << ans << '\n';
    }

    return 0;
}
