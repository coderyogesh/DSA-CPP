#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    // Print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing Done" << endl;
}

int main()
{
    // declare
    int number[20];

    cout << "Value at 19 index " << number[19] << endl;
    // initializing an array
    int second[3] = {5, 7, 11};

    printArray(second, 10);
    // accessing the array

    return 0;
}