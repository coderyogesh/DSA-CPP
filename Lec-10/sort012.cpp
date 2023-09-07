#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n)
{

    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
            count2++;
    }
    int i = 0;
    while (count0--)
        arr[i++] = 0;
    while (count1--)
        arr[i++] = 1;
    while (count2--)
        arr[i++] = 2;
}

//

int main()
{
    int arr[8] = {1, 0, 1, 2, 1, 2, 0, 1};

    sortOne(arr, 8);
    printArray(arr, 8);

    return 0;
}
