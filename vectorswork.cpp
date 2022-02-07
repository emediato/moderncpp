
#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int>& my_vector){ //vector as argument; const avoid copy
    cout << "vector content: { ";
    for(const int&num : my_vector) //same type inside the for
        cout << (num)<< " ";
    cout << "} \n" 
}
int main()
{
    vector<int> numbers;
    int value=0;

    cout << "pushing back"
    while(value>=0){
        cout << "enter value";
        cin >> value;
        if (vallue>0)
            numbers.push_back(value);
    } 
    print(numbers);

    value=0;
    cout<<"pushing front";
    while(value>0){
        cout << "enter value ";
        cin>>value;
        if (vallue>0)
            numbers.push_front(numbers.begin(), value);
    }
    print(numbers);

    index=0;
    cout<<"inserting by index";
    while(index>=0){
        cout << "enter index ";
        cin>>index;
        if (index>=0)
            cout << "enter value ";
            cin >> value;
            numbers.insert(numbers.begin()+index, value);
    }
    print(numbers);

    
    index=0;
    cout<<"modifying existing elements";
    while(index>=0){
        cout << "enter index ";
        cin>>index;
        if (index>=0)
            cout << "enter value ";
            cin >> value;
            numbers[index]=value;
    }
    print(numbers);
    return 0; 

}