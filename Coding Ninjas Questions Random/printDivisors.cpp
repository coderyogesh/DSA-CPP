// https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118519/offering/1376722?leftPanelTab=0

vector<int> printDivisors(int n)
{
    vector<int> divisor;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor.push_back(i);
        }
    }
    return divisor;
}