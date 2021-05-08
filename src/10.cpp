#include <iostream>

using namespace std;

int main() {
  float x, y;

  cout << "Valor eixo x: ";
  cin >> x;

  cout << "Valor eixo y: ";
  cin >> y;

  if (x > 0 && y > 0)
    cout << "Q1";
  else if (x < 0 && y > 0)
    cout << "Q2";
  else if (x < 0 && y < 0)
    cout << "Q3";
  else if (x > 0 && y < 0)
    cout << "Q4";
  else
    cout << "Origem";

  return 0;
}
