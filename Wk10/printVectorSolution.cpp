#include <iostream>
#include <vector>

int printVector(std::vector<int>& v);

int main() {
    std::vector<int> nums = { 2, 4, 6, 8, 10 };
    int sum = 0;
    sum = printVector(nums);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

int printVector(std::vector<int>& v) {
    int sum = 0;
    for (unsigned i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << std::endl;
        sum += v.at(i);
    }
    return sum;
}