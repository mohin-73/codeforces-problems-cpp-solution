#include <iostream>
#include <cstdio>
#include <cmath>

std::string isSquare(long long n) {
    long long sq = static_cast<long long>(std::sqrt(static_cast<double>(n)));
    if (sq * sq == n) {
        return "YES";
    }
    return "NO";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        long long n{}, num{};
        std::cin >> n;

        long long sum{};
        for (int i = 0; i < n; ++i) {
            std::cin >> num;
            sum += num;
        }

        std::string ans = isSquare(sum);
        std::cout << ans << '\n';
    }

    return 0;
}
