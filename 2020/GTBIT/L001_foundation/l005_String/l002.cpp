#include <iostream>
using namespace std;

bool isPlaindrome(string str)
{
    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (str[i++] != str[j--])
            return false;
    }

    return true;
}

void allSubString(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int len = 1; i + len <= str.length(); len++)
        {
            cout << str.substr(i, len) << endl;
        }
    }
}

void printallPalindromicString(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int len = 1; i + len <= str.length(); len++)
        {
            string s = str.substr(i, len);
            if (isPlaindrome(s))
                cout << s << endl;
        }
    }
}

string withoutX2(string str)
{
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i < 2 && str[i] != 'x')
            ans += str[i];
        if (i >= 2)
            ans += str[i];
    }

    return ans;
}

int main()
{
    string str;
    cin >> str;
    allSubString(str);
    return 0;
}