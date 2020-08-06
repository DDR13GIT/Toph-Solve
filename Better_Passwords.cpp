/******************************************
*  Author: Debopriya Deb Roy  
*  File : c++ file
*******************************************/

#include <bits/stdc++.h>
#include <string>
#include<cctype>
using namespace std;
int main()
{
    int i, j, k, l, m, n;
    string str, str2= "()";
    getline(cin, str);

    for (auto it = str.begin(); it <= str.end(); it++)
    {
        if (*it == 's')
            *it = '$';
        if (*it == 'i')
            *it = '!';
        if (*it == 'o')
        
        str.replace(it, it+2, str2);
        
    }
    str.push_back('.');
    toupper(str[0]);
    cout << str;
    return 0;
}