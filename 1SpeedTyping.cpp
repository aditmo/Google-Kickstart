#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define INT_MAX 1e18


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1, k=1;
    cin>>t;
    while(t--)
    {
        cout<<"Case #"<<(k++)<<": ";
        int cnt=0, flag=1;
        
        string I, P;
        cin>>I>>P;
        
        int n=I.size(), m=P.size(), i=0, j=0;
        
        while(i<n && j<m)
        {
            if(I[i]==P[j]) i++, j++;
            else j++, cnt++;
        }
        
        if(i==n) cout<<cnt+ (m-j)<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
    }

    return 0;
}