#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    cout << num << endl;

    // address of operator - &

    cout << "Address of num is:" << &num << endl;
    // Pointer -> store the address of num in memory;
    int *ptr = &num;

    cout << "value is: " << *ptr << endl;

    return 0;
}