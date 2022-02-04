
#include <iostream> 
using namespace std; 
   
template <class T> 
class Test 
{ 
  // Data memnbers of test 
public: 
   Test() 
   { 
       // Initialization of data members 
       cout << "General template  \n"; 
   } 
   // Other methods of Test 
}; 
   
template <> 
class Test <int> 
{ 
public: 
   Test() 
   { 
       // Initialization of data members 
       cout << "Specialized template \n"; 
   } 
}; 
   
int main() 
{ 
    Test<int> a; 
    Test<char> b; 
    Test<float> c; 
    return 0; 
} 