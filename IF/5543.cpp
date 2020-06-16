#include <iostream>

using namespace std;

int main() {
  int hambur[3], drink[2], sum = 0, tmp;

  for (int i = 0; i < 3; i++) cin >> hambur[i];
  for (int i = 0; i < 2; i++) cin >> drink[i];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      tmp = hambur[i] + drink[j] - 50;
      if (sum == 0)
        sum = tmp;
      else if (sum >= tmp)
        sum = tmp;
    }
  }
  cout << sum;
}