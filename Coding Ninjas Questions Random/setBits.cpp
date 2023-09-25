// https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118519/offering/1376725?leftPanelTab=1

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int countBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n >>= 1;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << countBits(n);
    return 0;
}