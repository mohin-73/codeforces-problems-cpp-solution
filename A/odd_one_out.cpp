#include <iostream>
#include <cstdio>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{}, arr[3];
    std::cin >> t;

    while (t--) {
        std::cin >> arr[0] >> arr[1] >> arr[2];
        std::sort(arr, arr + 3);
        if (arr[0] == arr[1]) {
            std::cout << arr[2] << '\n';
        } else {
            std::cout << arr[0] << '\n';
        }
    }
    
    return 0;
}
