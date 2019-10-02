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

  int a[100000];
  for (int i = 0; i < n; i++) cin >> a[i];

  int out[100000];
  for (int i = 0; i < n; i++) {
    int num = a[i];
    out[num - 1] = i + 1;
  }

  for (int i = 0; i < n; i++) cout << out[i] << " ";

  return 0;
}
