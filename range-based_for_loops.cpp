

#include <iostream>
#include <vector>

int main() {
    std::vector<int> alpha {1,2,3};
    auto gamma = {1,2,3}; // can do this but wrong type
    auto delta = std::vector<int>{1,2,3};
    std::vector<int> epsilon;

}