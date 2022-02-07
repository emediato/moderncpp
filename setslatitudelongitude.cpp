#include <iostream>
#include <map>
#include <set>

using namespace std;


int main(){
    map<pairs<int, int>, string> pins;
    //multiset<int> this_set;
    //unordered_set<int> this_set;
    int temp=0;
    string str;
    pair<pair<int,int>, string> p;
    pair<int, int> landmark;

    cout << "inserting";
    while(temp>=0) {
        cout << "enter latitude = ";
        getline(cin, str);
        temp=stoi(str);
        if (temp>0){
            landmark.first=temp;
            cout << "enter longitude = ";
            getline(cin, str);
            temp=stoi(str);
            landmark.second=temp;
            p.first = landmark;
            cout << "enter name = ";
            getline(cin, str);
            p.second = str;
            pins.insert(p);
        }
    }
    cout << "{ ";
    for(auto it = pins.begin(); it!=pins.end(); it++)
        cout << it->first.first << "," << it-> first.second << " - > " << it->second << " ";
    cout << "} \n";


    cout << "removing";
    while(temp>=0) {
        cout << "enter key";
        getline(cin, str);
        temp=stoi(str);
        if (temp>0){
            pins.erase(temp);
        }
    }

    return 0;
}