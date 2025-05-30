#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>

std::vector<long long> solve(long long num) {
    std::vector<long long> res(2, -1);
    long long r = static_cast<long long>(sqrt(num));
    for (int i = 0; i <= r; ++i) {
        for (int j = 0; j <= r; ++j) {
            if ((i + j) * (i + j) == num) {
                res[0] = i; res[1] = j;
                return res;
            }
        }
    }
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        std::string str{};
        std::cin >> str;
        long long num = std::stoll(str);
        std::vector<long long> ans;
        ans = solve(num);
        if (ans[0] == -1) {
            std::cout << ans[0] << '\n';
        } else {
            std::cout << ans[0] << ' ' << ans[1] << '\n';
        }
    }

    return 0;
}

