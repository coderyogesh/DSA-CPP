#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    char ch[6] = "abcde";

    cout << arr << endl;

    cout << ch << endl;
    // cout in char print contents of string.
    char *c = &ch[0];
    // print entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;
}