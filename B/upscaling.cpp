#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        for (int i = 0; i < 2 * n; ++i) {
            for (int j = 0; j < 2 * n; ++j) {
                int block_row = i / 2;
                int block_col = j / 2;

                if ((block_row + block_col) % 2 == 0)
                    std::cout << '#';
                else
                    std::cout << '.';
            }
            std::cout << '\n';
        }
    }

    return 0;
}
