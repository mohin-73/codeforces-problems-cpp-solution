#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int row{}, col{}, value{}, moves{};

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cin >> value;
            if (value == 1) {
                row = i;
                col = j;
            }
        }
    }

    moves = std::abs(row - 2) + std::abs(col - 2);
    std::cout << moves << '\n';
    
    return 0;
}

/* Manhattan Distance = |x1 - x2| + |y1 - y2| */
