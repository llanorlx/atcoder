#include <bits/stdc++.h>
using namespace std;

#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  const int m = 4;
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];

  int p = 0;
  vector<bool> s(m, false);
  for (int ai : a) {
    s[0] = true;
    drep(i, n) {
      if (!s[i]) continue;
      s[i] = false;
      int j = i + ai;
      if (j >= m) {
        p++;
      } else {
        s[j] = true;
      }
    }
  }

  cout << p << endl;
  return 0;
}
