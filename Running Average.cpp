/******************************************
*  Author: Debopriya Deb Roy  
*  File : c++ file
*******************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int i,n;
    double avg, sum=0;
    cin >>n;
    int num[n];
    for(i=1; i<=n; i++) {
        cin >>num[i];
        sum=sum+num[i];
        avg=sum/(i);
        cout << setprecision(10) << avg << '\n';
        
    }
    return 0;

}


