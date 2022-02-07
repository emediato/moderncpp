//types of each parameter  can be different

// must have a base case to accept one parameter

// prefer variadic template functions to variadic functions

#include <iostream>
#include <string>

template <int n>
struct fibonacci {
    enum {
        value = fibonacci<n -1>::value + fibonacci<n-2>::value
    };
};

template<>
struct fibonacci<0>{
    enum { 
        value = 0
    };
};

template<>
struct fibonacci<1>{
    enum {
        value = 1 
    };
};


int main(){
    std::cout << "fib(0) =  " << fibonacci<0>::value << std::endl;
    std::cout << "fib(1) =  " << fibonacci<1>::value << std::endl;
    std::cout << "fib(2) =  " << fibonacci<2>::value << std::endl;
    std::cout << "fib(3) =  " << fibonacci<3>::value << std::endl;
    std::cout << "fib(4) =  " << fibonacci<4>::value << std::endl;
    std::cout << "fib(5) =  " << fibonacci<5>::value << std::endl;
    return 0;

}