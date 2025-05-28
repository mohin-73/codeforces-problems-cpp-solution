#include <iostream>
#include <set>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int year{};
    std::cin >> year;

    while (true) {
        int temp = ++year;
        std::set<int> s;
        while (temp) {
            s.insert(temp % 10);
            temp /= 10;
        }
        if (s.size() == 4) break;
    }

    std::cout << year << '\n';

    return 0;
}
