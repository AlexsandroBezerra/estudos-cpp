#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
  float pi = 3.14159, radius, result;

  cout << "Digite o valor do raio: ";
  cin >> radius;

  result = (4.0 / 3) * pi * pow(radius, 3);

  cout << fixed << setprecision(3);
  cout << "Volume da esfera = " << result;

  return 0;
}
