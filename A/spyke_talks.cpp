#include <iostream>
#include <map>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, ans{}, flag{};
    std::cin >> n;

    std::map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int x{};
        std::cin >> x;
        if (x == 0) continue;
        ++mp[x];
        if (mp[x] == 2) {
            ++ans;
        }
        if (mp[x] == 3) {
            flag = -1;
        }
    }

    if (flag) {
        std::cout << flag << '\n';
    } else {
        std::cout << ans << '\n';
    }

    return 0;
}
