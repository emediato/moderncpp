#include <iostream>
#include <map>
#include <set>

using namespace std;


int main(){
    map<int, stirng> this_map;
    //multiset<int> this_set;
    //unordered_set<int> this_set;
    int temp;
    string str;
    pair<int, string> p;

    cout << "inserting";
    while(temp>=0) {
        cout << "enter key";
        getline(cin, str);
        temp=stoi(str);
        if (temp>0){
            p.first=temp;
            cout << "enter name";
            getline(cin, str);
            p.second=str;
            this_map.insert(p);
        }
    }
    cout << "{ ";
    for(auto it = this_map.begin(); it!=this_map.end(); it++)
        cout << it->first << " - > " << it->second << " ";
    cout << "} \n";


    cout << "removing";
    while(temp>=0) {
        cout << "enter key";
        getline(cin, str);
        temp=stoi(str);
        if (temp>0){
            this_map.erase(p);
        }
    }
    cout << "{ ";
    for(auto it = this_map.begin(); it!=this_map.end(); it++)
        cout << it->first << " - > " << it->second << " ";
    cout << "} ";
    return 0;
}