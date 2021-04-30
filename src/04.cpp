#include <iostream>

using namespace std;

int main() {
  int a, b, c, d;

  cout << "Digite o Valor de A: ";
  cin >> a;

  cout << "Digite o Valor de B: ";
  cin >> b;

  cout << "Digite o Valor de C: ";
  cin >> c;

  cout << "Digite o Valor de D: ";
  cin >> d;

  if (b > c && d > a && c + d > a + b && c >= 0 && d >= 0 && a % 2 == 0 ) {
    cout << "Valores aceitos";
  } else {
    cout << "Valores nao aceitos";
  }

  return 0;
}
