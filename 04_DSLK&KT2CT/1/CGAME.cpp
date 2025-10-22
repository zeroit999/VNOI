
#include <bits/stdc++.h>
#define ll long long 

using namespace std;
int main() {

  ios::sync_with_stdio (0);
  cin.tie (0);
  cout.tie (0);
  
  freopen ("CGAME.inp", "r", stdin);
  freopen ("CGAME.out", "w", stdout);

  int n; 
  cin >> n;
  
  vector <int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int left = 0;
  int right = n - 1;

  ll an = 0;
  ll binh = 0;

  bool turn = 0;

  while (left <= right) {
    if (a[left] > a[right]) {
      if (turn == 0) {
        an += a[left++];
      }
      else {
        binh += a[left++];
      }
    }
    else {
      if (turn == 0) {
        an += a[right--];
      }
      else {
        binh += a[right--];
      }
    }

    turn = !turn;
  }

  cout << an << " " << binh;
}