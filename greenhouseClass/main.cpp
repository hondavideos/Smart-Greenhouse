#include <iostream> //only need these in header file and main
#include <string>
#include <ctime>

#include "header.h"

using namespace std;

int main()
{
    /*
    string name;
    int height, calcu;

    cout << "enter name, height" << endl;
    cin >> name;
    cin >> height;

    Security Person1(name, height);
    //access this data via access functions
    cout << Person1.getName() << endl;

    calcu = Person1.calculate();
    cout << calcu << endl;
    */

    //Now intro to <ctime>
    cout << "Current time" << endl;

    time_t now = time(0);
    //convert to string
    cout << now << "\n\n" << endl;
    char* dt = ctime(&now);
    cout << "time = " << dt << endl;
    //convert to Universal time
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "uviversal time is " << dt << endl;


    return 0;
}
