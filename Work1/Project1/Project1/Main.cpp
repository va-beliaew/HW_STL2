#include <iostream>
#include <vector>
#include <algorithm>
#include <array>


template<typename T>
void unique_vector(std::vector<T>& v) {
    std::sort(v.begin(), v.end());
    auto it = std::unique(v.begin(), v.end());
    v.erase(it, v.end());
}

int main() {
    std::vector<int> v{ 3,22,4,7,22,5,4,4,7,1,5,9 };
    unique_vector(v);
    for (const auto& n : v) {
        std::cout << n << ' ';
    }
    return 0;
}