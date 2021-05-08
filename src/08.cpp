#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float n, result;

  cout << "Digite o valor: ";
  cin >> n;

  cout << fixed << setprecision(2);

  if (n <= 2000) {
    cout << "Isento";
  } else if (n <= 3000) {
    result = (n - 2000) * 8.0 / 100;

    cout << "R$ " << result;
  } else if (n <= 4500) {
    result = ((n - 3000) * 18.0 / 100) + 80; // 80 = 8% de 1000

    cout << "R$ " << result;

  } else {
    result = ((n - 4500) * 28.0 / 100) + 270 + 80;

    cout << "R$ " << result;
  }

  return 0;
}
