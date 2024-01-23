//header ==>> function declarations/prototypes

#include <iostream> //only need these in header file and main
#include <string>

using namespace std;

#ifndef HEADER_H
#define HEADER_H

class Security{
public:
    //Default Constructor sets data to null states
    Security();

    //Overload Constructor, different way of calling function
    Security(string name, int height); //add parameters inside

    //Destructor
    ~Security();

    //Accessor functions, return member variables
    //can only return one at a time
    string getName() const; //const because not modifying any member variables, just returning
    int getHeight() const; //const because not modifying any member variables, just returning

    //Mutator Functions, edit member variables, act like overload constructor but only modify one at a time
    void setName(string);
    void setHeight(int);

    //Calculation
    double calculate(); //const;

private:
    //member varables
    string newName;
    int newHeight;


};








#endif // HEADER_H
