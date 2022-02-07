#include <iostream>
#include <stack>
#include <queue>

using namespace std;


int main(){
    stack<int> numbers;


    int temp;

    cout << "pushing ";
    while(temp>=0){
        cout << "enter number";
        cin >> temp;
        if(temp>=0){
            numbers.push(temp);
        }
    }

    cout << "{ ";
    while(numbers.size()>0){
        cout << numbers.top();
        numbers.pop();
        cout << "  ";
    }
    cout << "} ";

    cout << "poping ";
    while(temp>=0){
        cout << "enter number";
        cin >> temp;
        if(temp>=0){
            numbers.push(temp);
        }
    }

    queue<int> numbers;
    cout << "pushing ";
    while(temp>=0){
        cout << "enter number";
        cin >> temp;
        if(temp>=0){
            numbers.push(temp);
        }
    }

    cout << "{ ";
    while(numbers.size()>0){
        cout << numbers.front(); // queue has front
        numbers.pop();
        cout << "  "; //same order as entered
    }
    cout << "} ";

    return 0;
}