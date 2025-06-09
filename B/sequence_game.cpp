#include <iostream>
#include <cstdio>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
        }

        std::vector<int> ans;
        ans.push_back(v[0]);
        int k{};

        for (int i = 1; i < n; ++i) {
            if (ans[k] <= v[i]) {
                ans.push_back(v[i]);
                ++k;
            } else {
                ans.push_back(1);
                ans.push_back(v[i]);
                k += 2;
            }
        }

        std::cout << ans.size() << '\n';
        for (int x : ans) {
            std::cout << x << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
