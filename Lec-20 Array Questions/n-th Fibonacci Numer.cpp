#include <vector>
using namespace std;

const int mod = 1e9 + 7;

vector<vector<int>> multiply(vector<vector<int>> &a, vector<vector<int>> &b)
{
    vector<vector<int>> c(2, vector<int>(2, 0));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                c[i][k] = (c[i][k] + (long long)((long long)a[i][j] * (long long)b[j][k])) % mod;
            }
        }
    }

    return c;
}

vector<vector<int>> matrix_power(vector<vector<int>> &coef, int n)
{
    if (n == 0)
    {
        return {{1, 0}, {0, 1}};
    }

    vector<vector<int>> res = matrix_power(coef, n / 2);
    res = multiply(res, res);

    if (n % 2)
    {
        res = multiply(res, coef);
    }

    return res;
}

int fibonacciNumber(int n)
{
    if (n == 0)
        return 0;
    vector<vector<int>> coef = {{1, 1}, {1, 0}};
    vector<vector<int>> res = matrix_power(coef, n - 1);
    return res[0][0];
}