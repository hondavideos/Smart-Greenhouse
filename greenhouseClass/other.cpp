//function definitions

#include "header.h"

//Default Constructor
Security::Security() {
    //accessing this class, can see member variables
    //set to null states
    newHeight = 0;
    //don't need to do this for string

}

//Overload Constructor
Security::Security(string name, int height) {
    //overloading default values
    //eg newName = name;
    newName = name;
    newHeight = height;

}

//Destructor, once you leave function it needs to be destroyed out of memory
Security::~Security(){
}

string Security::getName() const{
    return newName;
}

int Security::getHeight() const{
    return newHeight;
}

void Security::setName(string name){
    newName = name;
}

void Security::setHeight(int height){
    newHeight = height;
}

double Security::calculate(){
    int i;
    double calc;
    for(i=0;i<5;i++){
        cout << newName;
    }
    calc = newHeight * 3;
    return calc;
}
