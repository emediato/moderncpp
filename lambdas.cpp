// lambda expressions is a unamed function object
// lambda to write a local function of limited use
// lambda for complex initialization
// prefer lambda expression to std::bind

#include <iostream>
#include <vector>

enum class RGB{
    red, blue, green
};

void print_it(const int &n){
    std::cout << " - " << n;
}

int main(){
    std::vector<int> nums{3,4,2,8, 15, 26};
    std::for_each(nums.begin(), nums.end(), std::bind(&print_it, std::placeholders::_1)); 
    std::cout << std::endl;
    std::for_each(nums.begin(), nums.end(), [](const int $n) {std::cout << "-" n; });
    std::cout << std::endl;

    auto myLambda = [](const int &n) {std::cout << "*" << n;}
    std::for_each(nums.begin(), nums.end(), myLambda);  //i can use multiple times without repeating the definition
    std::cout << std::endl;

    auto currentLight = RGBCondition::green;
    const auto shieldLevel = [&](){ 
        //lambda converter switch statement in switch expression and then we use the value to the shield variable. current light is receiven a value. [&] gets the reference from 
        switch(currentLight){
            case RGBCondition::green:
                return 50;
            case RGBCondition::yellow:
                return 70;
            case RGBCondition::red:
            default:
                return 1000;
        }

    }();
    std::cout << "current shield level = " << shieldLevel << std::endl;
    return 0;

}