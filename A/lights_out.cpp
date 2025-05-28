#include <iostream>
#include <cstdio>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    bool mx[5][5];
    std::fill(&mx[0][0], &mx[0][0] + 25, true);

    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            int p{};
            std::cin >> p;
            if (p % 2) {
                mx[i][j] = !mx[i][j];
                mx[i + 1][j] = !mx[i + 1][j];
                mx[i - 1][j] = !mx[i - 1][j];
                mx[i][j + 1] = !mx[i][j + 1];
                mx[i][j - 1] = !mx[i][j - 1];
            }
        }
    }

    for (int i = 1; i <= 3; ++i) {
        for (int j =  1; j <= 3; ++j) {
            std::cout << mx[i][j];
        }
        std::cout << '\n';
    }

    return 0;
}
