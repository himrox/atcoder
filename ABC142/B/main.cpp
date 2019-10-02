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
  int n, k;
  int h[100000];

  cin >> n >> k;
  for (int i = 0; i < n; ++i) cin >> h[i];

  int count = 0;

  for (int i = 0; i < n; ++i) {
    if (h[i] >= k) count += 1;
  }

  cout << count << endl;
}
