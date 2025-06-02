#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

void printVector(const std::vector<int>& v) {
    for (int num : v) {
        std::cout << num << " ";
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
        std::string str{};
        std::vector<int> vec;

        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            std::cin >> str;
            for (int j = 0; j < 4; ++j) {
                if (str[j] == '#') {
                    vec.push_back(j + 1);
                    break;
                }
            }
        }

        std::reverse(vec.begin(), vec.end());
        printVector(vec);
    }

    return 0;
}
