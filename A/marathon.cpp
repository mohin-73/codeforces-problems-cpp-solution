#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int arr[4], ans{};
        for (int i = 0; i < 4; ++i) {
            std::cin >> arr[i];
        }
        for (int i = 1; i < 4; ++i) {
            ans += arr[i] > arr[0];
        }
        std::cout << ans << '\n';
    }

    return 0;
}
