#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, m, x, y, ans = 0;
        cin >> n >> m >> x >> y;
        y = min(y, 2 * x);
        string s;
        for(int i=0;i<n;i++) {
            cin >> s;
            for(int j=0;j<m;j++) {
                if(s[j]=='.') {
                    if(j+1<m && s[j+1]=='.') ans += y, j++;
                    else ans += x;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
