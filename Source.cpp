#include <iostream>
#include <vector>

template <typename T>
T square(T value) {
    return value * value;
}

template <typename T>
std::vector<T> square(const std::vector<T>& vec) {
    std::vector<T> result;
    result.reserve(vec.size());
    for (const auto& v : vec) {
        result.push_back(v * v);
    }
    return result;
}

int main() {
    int x = 4;
    std::cout << square(x) << "\n";

    std::vector<int> v = { -1, 4, 8 };
    auto res = square(v);
    for (size_t i = 0; i < res.size(); ++i) {
        std::cout << res[i] << (i + 1 == res.size() ? "" : ", ");
    }
    std::cout << "\n";

    return 0;
}