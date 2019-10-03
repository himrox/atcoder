#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[20], b[20], c[20];
  for (int i = 0; i < n; ++i) cin >> a[i];
  for (int i = 0; i < n; ++i) cin >> b[i];
  for (int i = 0; i < n - 1; ++i) cin >> c[i];

  int count = 0;
  for (int i = 0; i < n; ++i) {
    count += b[a[i] - 1];
    if (i > 0 && a[i] - a[i - 1] == 1) count += c[a[i - 1] - 1];
  }

  cout << count << endl;
  return 0;
}
