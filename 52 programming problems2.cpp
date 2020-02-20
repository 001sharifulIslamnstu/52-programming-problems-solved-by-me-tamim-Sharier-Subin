#include<bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int m=n.length();
        cout<<m<<endl;
       if((n[m-1]%2)==0)
        {
            cout<<"EVEN"<<endl;
        }
        else{
            cout<<"ODD"<<endl;
        }
    }
}
