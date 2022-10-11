#include <iostream>

using namespace std;

int main() {

    int Galleons = 0;
    int Sickles = 0;
    int Knuts = 0;

    int input;

    cin >> input;

    if (input >= 493)
    {
        Galleons = input/493;
        input = input % 493;
    }

    if (input >= 29)
    {
        Sickles = input/29;
        input = input % 29;

    }

    Knuts = input;
    
    cout << Galleons << " "<< Sickles << " "<< Knuts<<endl;

    return 0;
}