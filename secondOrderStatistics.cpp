#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main()
{
    optimize();
    set<int>s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    s.erase(s.begin());
    cout<<(*s.begin());
 
 
    return 0;
}