#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

bool isPossible(const std::vector<int>& vec) {
    int odd{}, even{};

    for (int x : vec) {
        if (x % 2) odd += x;
        else even += x;
    }

    return even > odd;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        std::vector<int> v(n);
        bool flag{};
        for (int i =0; i < n; ++i) {
            std::cin >> v[i];
            flag = isPossible(v);
        }

        std::cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
