#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        long long n{}, ans{};
        std::cin >> n;

        while (n) {
            ans += n;
            n /= 2;
        }
        
        std::cout << ans << '\n';
    }

    return 0;
}
