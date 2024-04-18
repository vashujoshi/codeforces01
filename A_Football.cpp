
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int cnt = 1;
    bool found = false;

    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1])
        {
            cnt++;
            if (cnt >= 7)
            {
                found = true;
                break;
            }
        }
        else
        {
            cnt = 1;
        }
    }

    if (found)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
