#include <iostream>
#include <cstdio>
#include <cmath>

bool isPrime(int n) {
    if (n < 2) return false;
    int x = static_cast<int>(std::sqrt(n));
    for (int i = 2; i <= x; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, m{};
    std::cin >> n >> m;

    int k = n + 1;
    while (!isPrime(k)) {
        ++k;
    }

    if (k == m) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}

