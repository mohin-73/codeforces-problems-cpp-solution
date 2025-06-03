#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{}, mn1 = INT_MAX, mn2 = INT_MAX;;
        std::cin >> n;

        std::vector<int> v1(n);
        std::vector<int> v2(n);
        long long ans{};

        for (int i = 0; i < n; ++i) {
            std::cin >> v1[i];
            mn1 = std::min(mn1, v1[i]);
        }
        for (int i = 0; i < n; ++i) {
            std::cin >> v2[i];
            mn2 = std::min(mn2, v2[i]);
        }

        for (int i = 0; i < n; ++i) {
            int k = v1[i] - mn1;
            int m = v2[i] - mn2;
            k = std::min(m, k);
            ans += k;
            v1[i] -= k;
            v2[i] -= k;
            ans += (v1[i] - mn1);
            ans += (v2[i] - mn2);
        }

        std::cout << ans << '\n';
    }

    return 0;
}
