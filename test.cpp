#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{

    int t;
    string a;
    cin>>t;
    cin.ignore();

    while(t--)
    {


        getline(cin, a);

        int i;
        for(i=0; i<a.size(); i++)
        {
            if(a[i]==a[i+1])
            {

            }
            else
                cout<<a[i];
        }
        cout<<endl;

    }
}