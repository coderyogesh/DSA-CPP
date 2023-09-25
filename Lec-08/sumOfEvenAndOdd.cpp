#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int temp;
    int evensum = 0;
    int oddsum = 0;

    while (n != 0)
    {
        temp = n % 10;
        if (temp % 2 == 0)
        {
            evensum += temp;
        }
        else
        {
            oddsum += temp;
        }
        n /= 10;
    }
    cout << evensum << " " << oddsum;
    return 0;
}