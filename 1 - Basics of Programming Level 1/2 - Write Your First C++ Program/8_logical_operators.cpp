#include <iostream>

using namespace std;

int main()
{
    int age = 0;
    int car = 12;

    // if (age >= 18 && car >= 1)
    if (age >= 18 || car >= 1)
    {
        cout << "license miljayega" << endl;
    }
    cout << !age << endl;
}