// https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633
// Check If The String Is A Palindrome
// Easy Level

char tolc(char a)
{

    if (a >= 'a' && a <= 'z')
    {

        return a;
    }
    else

        return (a - 'A' + 'a');
}

bool checki(char a)
{

    if ((a >= '0' && a <= '9') || (a >= 'a' && a <= 'z') ||

        (a >= 'A' && a <= 'Z'))

        return 1;

    return 0;
}

int pal_2_m(string a, int l)
{

    int i = 0;

    int e = l - 1;

    while (i <= e)
    {

        if (checki(a[i]) && checki(a[e]))
        {

            if (tolc(a[i]) != tolc(a[e]))

                return 0;

            else
            {

                i++;

                e--;
            }
        }
        else
        {

            if (!checki(a[i]))

                i++;

            if (!checki(a[e]))

                e--;
        }
    }

    return 1;
}

bool checkPalindrome(string s)
{

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)

        count++;

    bool x = pal_2_m(s, count);

    return (x);
}