#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t=1001,i=1;
    while(t--)
    {
        if(t==0)
        {
            break;
        }
       cout<<t<<"\t";
       if(i%5==0)
       {
           cout<<"\n";
       }
       i++;

    }
    return 0;
}
