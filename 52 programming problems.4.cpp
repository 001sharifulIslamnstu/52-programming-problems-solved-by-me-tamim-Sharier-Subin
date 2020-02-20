
#include<bits/stdc++.h>

using namespace std;
vector<int> g;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j =1;j<=sqrt(n);j++)
        {
            if(n%j==0)
            {
                if(n/j==j)
                {
                   g.push_back(j);
                }
                else
                {
                    g.push_back(j);
                    g.push_back(n/j);
                }
            }
        }
    vector<int>::iterator itr;
    sort(g.begin(),g.end());
    for(itr=g.begin();itr!=g.end();++itr)
           cout<<*itr<<"\t";

      g.clear();

      cout<<"\n";
    }


}
