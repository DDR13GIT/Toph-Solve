/******************************************
*  Author: Debopriya Deb Roy  
*  File : c++ file
*******************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    b[0]= a[0]-=32;
    int j=0,s=0;
    for(int i=1;i<a.size();i++)
    {

        j++;
        if(a[i]=='s')
            b[j]='$';
       else if(a[i]=='i')
            b[j]='!';
       else if(a[i]=='o')
       {
           b[j]='(';
           j++;
           b[j]=')';
           s++;
       }
       else b[j]=a[i];

    }
    int   l=a.size()+s;
      for(int i=0;i<l;i++)
         cout<<b[i];
      cout<<'.';
}