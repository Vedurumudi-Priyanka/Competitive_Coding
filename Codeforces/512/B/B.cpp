#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);
typedef long long ll;
/**
 * Uncomment the #define below if problem contains multiple test cases
 */
// #define MULTIPLE_TESTS 1

void solve() {
  int n, d, m;
  cin >> n >> d >> m;
  int x, y;
  for (int i = 0; i < m; ++i) {
    cin >> x >> y;
    int s1 = x + y - d;
    int s2 = x + y - (2 * n - d);
    int s3 = x - y - d;
    int s4 = x - y + d;
    if (s1 * s2 <= 0 && s3 * s4 <= 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
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