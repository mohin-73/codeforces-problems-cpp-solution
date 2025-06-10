#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

int countD(std::string str, int len) {
    int cnt = 0;
    for (int i = 0; i < len; ++i) {
        if (str[i] == 'D') ++cnt;
    }
    return cnt;
}

void printVector(const std::vector<int>& vec) {
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int n{};
        std::cin >> n;

        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
        }

        for (int i = 0; i < n; ++i) {
            int k{};
            std::string str{};
            std::cin >> k >> str;

            int d = countD(str, k);
            int u = k - d;

            if (u >= d) {
                u = (u - d) % 10;
                v[i] = (10 + v[i] - u) % 10;
            } else {
                d = (d - u) % 10;
                v[i] = (v[i] + d) % 10;
            }
        }

        printVector(v);
    }

    return 0;
}
