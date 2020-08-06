/******************************************
*  Author: Debopriya Deb Roy  
*  File : c++ file
*******************************************/

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    int i, j, k, l, m, n;
    string s;
    cin >> n;
    cin.ignore();
    
    while (n--)
    {
        getline(cin, s);

        for (i = 0; i < s.size(); i++)
        {

            if (s[i] == s[i + 1])
                continue;
            else
                cout << s[i];
        }
        cout << endl;
    }

    return 0;
}