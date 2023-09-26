// https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118519/offering/1376726

#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int isPrime(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int totalPrime(int s, int e)
{
    int count = 0;
    for (int i = s; i <= e; i++)
    {
        if (isPrime(i) == 1)
            count++;
    }
    return count;
}

int main()
{
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}