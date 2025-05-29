#include <iostream>
#include <cstdio>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[3];
    for (int i = 0; i < 3; ++i) {
        std::cin >> arr[i];
    }
    std::sort(arr, arr + 3);

    int ans = arr[1] - arr[0] + arr[2] - arr[1];
    std::cout << ans << '\n';

    return 0;
}
