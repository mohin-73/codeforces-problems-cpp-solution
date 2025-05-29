#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

std::vector<int> roundSum(int num) {
    std::vector<int> result;
    int div = 10;
    while (num > 0) {
        if ((num % div) > 0) {
            result.push_back(num % div);
        }
        num /= div;
        num *= div;
        div *= 10;
    }
    return result;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int num{};
        std::cin >> num;
        std::vector<int> ans;
        ans = roundSum(num);
        std::cout << ans.size() << '\n';
        for (int i = 0; i < ans.size(); ++i) {
            std::cout << ans[i] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
