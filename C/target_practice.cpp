#include <iostream>
#include <cstdio>
#include <string>

int calculatePoint(int row, int col) {
    int x = std::min(++row, ++col);
    int y = 11 - std::max(row, col);
    return std::min(x, y);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        std::string target[10];
        for (int i = 0; i < 10; ++i) {
            std::cin >> target[i];
        }

        int ans{};
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (target[i][j] == 'X') {
                    int k = calculatePoint(i, j);
                    ans += k;
                }
            }
        }

        std::cout << ans << '\n';
    }

    return 0;
}
