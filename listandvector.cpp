
#include <iostream>
#include <vector>
#include <fstream> //reading files
#include <list>
#include <string>

#define USE_VECTOR

using namespace std;

class guest{
public:
    guest(){}
    ~guest(){}
    void set_gender(string in){
        char i = in.c_str()[0];
        if (i=='b' || i=='B' || i=='m' || i=='M')
            gender="boy";
        else
            gender="girl";
    }
    string name;
    string gender;
    int age;
};

#ifdef USE_VECTOR
    typedef vector<guest> my_container;
#elif defined USE_LIST
    typedef list<guest> my_container;
#endif

void read_file(my_container * my_guests){
    string in_str;
    ifstream in_file("myguests.txt");
    if(in_file.is_open()){
        guest temp;
        while(getline(in_file, in_str)){
            //todo: populate
            temp.name = in_str;
            getline(in_file, in_str);
            temp.set_gender(in_str);
            getline(in_file, in_str);
            temp.age=stoi(in_str);
            my_guests->push_back(temp);
        }
        in_file.close();
    }
    else
        cout << "unable to open";
}

void print_guests(my_container * my_guests){
    auto it = my_guests->begin();
    cout << "container content start\n";

    while(it != myguests->end()){
        //print every element
        cout << "name: " << it->name << endl;
        cout << "gender: " << it->gender << endl;
        cout << "age: " << it->age << endl;
        it++;
    }
    cout << "container content end\n";    
}

int main(){
    my_container * my_guests = new my_container;
    read_file(my_guests);
    print_guests(my_guests);
    return 0;
}