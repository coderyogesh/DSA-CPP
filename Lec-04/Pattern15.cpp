#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char count = 'A' + row + col - 2;
            cout << count << "\t";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}