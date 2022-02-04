#include <iostream>
#include <cassert>
// ******* strongly typed enums; prefer typed enums to enums; implicit conversion is no longer allowed
// no more redefinition of types


enum TrafficLight {
    red, green, yellow
};

enum CarColor {
    black, white, gray, silver
    // green cant have color green in two enums
}

enum class Pet {
    dog, cat, bird
};

enum class Mammal{
    bear, cougar, coyote, dog
};

int main(){
    TrafficLight color = TrafficLight::red;
    CarColor camry = CarColor::silver;

    int colorNummber = red;
    int myCarsColors = black;

    Pet pet = Pet::dog;
    Mammal mammal = Mammal::dog; //diferent kinds of dogs

    // the are all errors:
    // Pet otherpet = Mammal::bear;
    // int petNum = pet;
    // assert(pet==mammal);
    // assert (Pet::dog == Mammal::dog)

}



