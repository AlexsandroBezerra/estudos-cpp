#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {
  float a, b, c, delta, r1, r2;

  cout << "Digite o valor de A: ";
  cin >> a;

  cout << "Digite o valor de B: ";
  cin >> b;

  cout << "Digite o valor de C: ";
  cin >> c;

  delta = pow(b, 2) - (4 * a * c);

  if (delta > 0 && a != 0) {
    r1 = (- b  + sqrt(delta)) / (2 * a);
    r2 = (- b  - sqrt(delta)) / (2 * a);

    cout << fixed << setprecision(5);
    cout << "R1 = " << r1;
    cout << "\nR2 = " << r2;
  } else {
    cout << "Impossivel calcular";
  }

  return 0;
}
