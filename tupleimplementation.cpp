/*There can be some instances where you need to return multiple values (may be of different data types) while solving a problem.
One method to do the same is by using pointers or structures, already discussed in previous problems.
There is another interesting method to do the same without using the above methods, using tuples (for returning multiple values ) and pair (for two values).

We can declare the function with return type as pair or tuple (whichever required) and can pack the values to be returned and return the packed set of values.
 The returned values can be unpacked in the calling function.

Pair
This class couples together a pair of values, which may be of different types. With std::pair, you can build pairs of arbitrary types.
To get the elements of a pair p, you can either access it directly or via an index. So, with p.first or std::get<0>(p) you get the first, with p.second or std::get<1>(p) you get the second element of the pair.

Pairs support the comparison operators ==, !=, <, >, <= and >=. If you compare two pairs for identity, at first the members pair1.first and pair2.first will be compared and then pair1.second and pair2.second. The same strategy holds for the other comparison operators.

std::make_pair

C++ has the practical help function std::make_pair to generate pairs, without specifying their types. std::make_pair automatically deduces their types.

Tuple
A tuple is an object capable to hold a collection of elements where each element can be of a different type.
The class template needs the header <tuple>. std::tuple is a generalization of std::pair. You can convert between tuples with two elements and pairs.

The i-th element of a tuple t can be referenced by the function template std::get: std::get<i-1>(t). By std::get<type>(t) you can directly refer to the element of the type type.

Tuples support the comparison operators ==, !=, <, >, <= and >=. If you compare two tuples, the elements of the tuples will be compared lexicographically. The comparison starts at index 0.

std::make_tuple

The helper function std::make_tuple is quite convenient for the creation of tuples. You don’t have to provide the types. The compiler automatically deduces them.
*/

#include <iostream>
#include <utility>
#include<tuple>
using namespace std;

int main() 
{ 
    // storing values in tuple
    tuple<int, int, string> t1(1, 2, "ib");
    tuple<int, int, string> t2 = make_tuple(20, 10, "cpp");
    
    cout<< get<0>(t1) << ", " << get<1>(t1) << ", " << get<2>(t1) << endl; // 1, 2, ib
    cout<< get<0>(t2) << ", " << get<1>(t2) << ", " << get<2>(t2) << endl; // 20, 10, cpp
    
    cout<< (t1 < t2) <<endl; // 1 (true)      
      
    // Storing values in a pair  
    pair<int, string> p1(5, "scaler");   
    pair<int, string> p2 = make_pair(2, "scaler");  
   
    cout << p1.first << ", " << p1.second << endl; // 5, scaler
    cout << (p1 < p2) <<endl; // 1 (false)
    return 0;
}
