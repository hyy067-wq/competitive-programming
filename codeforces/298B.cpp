#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t, a, b, x, y, ans=-1;
    char c;
    cin >> t >> a >> b >> x >> y;
    for(int i=1;i<=t;i++) {
        cin >> c;
        if(c=='N' && b<y) b++;
        else if(c=='S' && b>y) b--;
        else if(c=='E' && a<x) a++;
        else if(c=='W' && a>x) a--;
        if(a==x && b==y && ans==-1) ans = i;
    }
    cout << ans << endl;
    return 0;
}