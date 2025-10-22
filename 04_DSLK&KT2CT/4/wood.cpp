#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen ("wood.inp", "r", stdin);
    freopen ("wood.out", "w", stdout);

    int n, S;
    cin >> n >> S;

    vector <ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    ll sum = 0;
    int left = 0;

    int minn = INT_MAX;

    for (int right = 0; right < n; right++) {
      sum += a[right];

      while (sum >= S) {
        minn = min(minn, right - left + 1);
        sum -= a[left];
        left++; 
      }
    }

    if (minn == INT64_MAX) {
      cout << -1;
    }
    else {
      cout << minn;
    }
}