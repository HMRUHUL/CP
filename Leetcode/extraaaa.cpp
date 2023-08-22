#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> v(3);

    std::vector<int> nums = {1, 2, 3, 4, 5, 6};
    int i = 0, l = 1, r = 2, k = 0;

    v[k++].push_back({nums[i], nums[l], nums[r]});

    for (const auto &innerVec : v) {
        for (int num : innerVec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
