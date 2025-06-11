#include <iostream>
#include <cstdio>
#include <vector>
#include <map>

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

        std::map<int, bool> mp;
        bool flag = true;
        mp[v[0]] = true;

        for (int i = 1; i < n; ++i) {
            int a = v[i] - 1;
            int b = v[i] + 1;
            if (mp[a] == false && mp[b] == false) {
                flag = false;
                break;
            }
            mp[v[i]] = true;
        }

        if (flag) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
