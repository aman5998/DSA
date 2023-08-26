#include <iostream>

using namespace std;

int main()
{
    // int -> 4 bytes
    int num = 50;
    cout << num << endl;
    cout << sizeof(num) << endl;

    // character -> 1 byte
    char ch = 'k';
    cout << ch << endl;
    cout << sizeof(ch) << endl;

    // float -> 4 bytes
    float point = 1.69;
    cout << point << endl;
    cout << sizeof(point) << endl;

    // long -> 4 bytes
    long number = 23;
    cout << number << endl;
    cout << sizeof(number) << endl;
}