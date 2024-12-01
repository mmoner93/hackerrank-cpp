#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

enum NumberString
{
    ONE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE
};

string numberToString(int number)
{
    switch (number)
    {
    case ONE:
        return "one";
    case TWO:
        return "two";
    case THREE:
        return "three";
    case FOUR:
        return "four";
    case FIVE:
        return "five";
    case SIX:
        return "six";
    case SEVEN:
        return "seven";
    case EIGHT:
        return "eight";
    case NINE:
        return "nine";
    default:
        return "Invalid input";
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    if (1 <= n && n <= 9)
    {
        cout << numberToString(n) << endl;
    }
    else
    {
        cout << "Greater than 9" << endl;
    }

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](int c)
                { return !std::isspace(c); }));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), [](int c)
                { return !std::isspace(c); })
            .base(),
        s.end());

    return s;
}
