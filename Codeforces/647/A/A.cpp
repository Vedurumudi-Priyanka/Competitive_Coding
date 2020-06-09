#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);
typedef long long ll;
#define MULTIPLE_TESTS 1

void solve() {
  ll a, b;
  cin >> a >> b;
  ll c = max(a, b);
  ll d = min(a, b);
  if (c % d == 0) {
    ll quo = c / d;
    ll cnt = 0;
    while (quo % 8 == 0) {
      ++cnt;
      quo /= 8;
    }
    while (quo % 4 == 0) {
      ++cnt;
      quo /= 4;
    }
    while (quo % 2 == 0) {
      ++cnt;
      quo /= 2;
    }
    if (quo > 1) {
      cout << -1 << endl;
    } else {
      cout << cnt << endl;
    }
  } else {
    cout << -1 << endl;
  }
}

int main() {
  FAST_IO;
  int t = 1;
#ifdef MULTIPLE_TESTS
  cin >> t;
#endif

  while (t--) {
    solve();
  }

  return 0;
}