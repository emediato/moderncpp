//types of each parameter  can be different

// must have a base case to accept one parameter

// prefer variadic template functions to variadic functions

#include <iostream>
#include <string>

template <typename T>
T rcatenate(T v){
    return v;
}

template<typename T, typename ... Args>
T rcatenate(T first, Args ... args){ // args ... args = rest of the arguments . 
    return rcatenate(args...) + " " + first; // calls the recursion
}

int main(){
    std::string s1 = "biz ", s2 = "fox", s3 = "wiz";
    std::string cc = rcatenate(s1, s2, s3);
    std::cout << "reverse concatenated = " << cc << std::endl;
    return 0;

}