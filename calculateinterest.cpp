#include <iostream>
#include <utility>
#include<tuple>
using namespace std;

int main() 
{ 

    int principal{5};
    float time{10.90};
    double rate{.10};
    double interest;
    interest = principal * rate * time;
    cout << interest << endl;

    cout << calculatecost(askroomsize()) << endl;
    
    return 0;
}

int askroomsize(){
    int l, w;
    cout << "enter length and width ";
    cin >> l << w;
    return l*w;
}

double calculatecost(int aux){
    double cost;
    if aux^2 <= 120
        cost = 99;
    else
        cost = (aux^2 - 120)*.25 + 99;
    return cost;

}

void print(const vector<int>& my_vector){ //vector as argument; const avoid copy
    cout << "vector content: { ";
    for(const int&num : my_vector) //same type inside the for
        cout << (num)<< " ";
    cout << "} \n" 
}