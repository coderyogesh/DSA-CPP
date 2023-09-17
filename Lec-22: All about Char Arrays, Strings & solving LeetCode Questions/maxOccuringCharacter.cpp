char getMaxOccuCharacter(string s)
{
    int arr[26] = {0};

    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            // uppercase
            number = ch = 'A';
        }
        arr[number]++;
    }
    int maxi = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (maxi < arr[i])
        {
            ans = -1;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}