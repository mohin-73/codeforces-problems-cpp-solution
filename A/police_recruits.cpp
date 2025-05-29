#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, k{}, f{}, ans{};
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> k;
        if (k > 0) {
            f += k;
        } else {
            k = abs(k);
            if (k >= f) {
                ans += k - f;
                f = 0;
            } else {
                f -= k;
            }
        }
    }

    std::cout << ans << '\n';

    return 0;
}
