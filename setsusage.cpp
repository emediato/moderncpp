#include <iostream>
#include <unordered_set>
#include <set>

using namespace std;


int main(){
    set<int> this_set;
    int temp;

    cout << "inserting";
    while(temp>=0) {
        cout << "enter number";
        cin>>temp;
        if (temp>0)
            this_set.insert(temp);
    }
    
    temp=0;
    cout << "removing..\n";
    while(temp>=0) {
        cout << "enter number";
        cin>>temp;
        if (temp>0)
            this_set.erase(temp);
    }

    cout << "{ ";
    for(auto it = this_set.begin(); it!=this_set.end(); it++)
        cout << *it << " ";
    cout << "} ";

    return 0;
}