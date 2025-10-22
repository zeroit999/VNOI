#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  freopen ("photo.inp", "r", stdin);
  freopen ("photo.out", "w", stdout);

  int n;
  cin >> n;

  vector <ll> x(n);
  vector <ll> c(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> c[i];
  }

  int left = 0;
  int count_vn = 0;
  int count_tt = 0;
  int count_us = 0;
  ll ans = LLONG_MAX;

  for (int right = 0; right < n; right++) {
    if (c[right] == 1) 
      count_vn++;
    else if (c[right] == 2)
      count_tt++;
    else if (c[right] == 3) {
      count_us++;
    }

    while (count_vn > 0 && count_tt > 0 && count_us > 0) {
      ans = min(ans, x[right] - x[left]);

      if(c[left] == 1)
        count_vn--;
      else if (c[left] == 2)
        count_tt--;
      else if (c[left] == 3)
        count_us--;
      left++;
    }
  }

  if (ans != LLONG_MAX)
    cout << ans;
}