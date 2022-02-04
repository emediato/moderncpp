#include <iostream>
using namespace std ;
 
//max returns the maximum of the two elements of type T, where T is a
//class or data type for which operator> is defined.
template <class T>
T max(T a, T b)
{
    return a > b ? a : b ;
}
 
int main()
{    
    cout << "max(80, 95) = " << max(10, 15) << endl ;
    cout << "max('a', 'z') = " << max('k', 's') << endl ;
    cout << "max(11.1, 18.2) = " << max(11.1, 18.2) << endl ;
    cout << "max(\"Ahil\", \"Riya\") = " << max("Ahil", "Riya") << endl ;
    return 0 ;
}