#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n;
    vector<int> boys(n);
    for(int i=0;i<n;i++) {
        cin >> boys[i];
    }
    cin >> m;
    vector<int> girls(m);
    for(int i=0;i<m;i++) {
        cin >> girls[i];
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int ans = 0;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(abs(boys[i] - girls[j]) <= 1)
            {
                girls[j] = 1000;
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
