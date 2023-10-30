#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int ans = 0;
  int max_2 = 0;
  int max_1 = 0;
  string t(n + 1, '0');

  for (int i = 0; i <= n / 2 - 1; i++) {
    if (s[i] == s[n - i - 1]) {
      max_2++;
    } else {
      ans++;
    }
  }

  if (n % 2 == 1) {
    max_1++;
  }

  for (int j = 0; j <= max_2; j++) {
    for (int k = 0; k <= max_1; k++) {
      t[ans + j*2 + k] = '1';
    }
  }

  cout << t << endl;
  
  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }

  return 0;
}
