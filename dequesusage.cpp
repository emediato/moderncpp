#include <iostream>
#include <deque>

using namespace std;


int main(){
    deque<int> numbers;
    int temp=0;

    cout << "pushing back";
    while(temp>=0){
        cout << "enter number";
        cin >> temp;
        if(temp>=0){
            numbers.push_back(temp);
        }
    }

    deque<int>::iterator it;
    cout << "{ ";
    for(it = numbers.begin(); it!=numbers.end(); it++)
        cout << *it;
    cout << "} ";

    temp=0;
    cout << endl;
    cout << "pushing front";
    while(temp>=0){
        cout << "enter number";
        cin >> temp;
        if(temp>=0){
            numbers.push_front(temp);
        }
    }

    cout << "{ ";
    for(it = numbers.begin(); it!=numbers.end(); it++)
        cout << *it;
    cout << "} ";

    return 0;
}                                          