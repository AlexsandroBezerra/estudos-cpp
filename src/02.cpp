#include <iostream>

using namespace std;

int main() {
  float amount;
  int money_100 = 0, money_50 = 0, money_20 = 0, money_10 = 0, money_5 = 0, money_2 = 0;
  int cent_100 = 0, cent_50 = 0, cent_25 = 0, cent_10 = 0, cent_5 = 0, cent_1 = 0;

  cout << "Digite o valor monetario: ";
  cin >> amount;

  money_100 = amount / 100.0;
  amount = amount - (money_100 * 100.0);

  money_50 = amount / 50.0;
  amount = amount - (money_50 * 50.0);

  money_20 = amount / 20.0;
  amount = amount - (money_20 * 20.0);

  money_10 = amount / 10.0;
  amount = amount - (money_10 * 10.0);

  money_5 = amount / 5.0;
  amount = amount - (money_5 * 5.0);

  money_2 = amount / 2.0;
  amount = amount - (money_2 * 2.0);

  cent_100 = amount / 1;
  amount = amount - (cent_100 * 1.0);

  cent_50 = amount / 0.50;
  amount = amount - (cent_50 * 0.50);

  cent_25 = amount / 0.25;
  amount = amount - (cent_25 * 0.25);

  cent_10 = amount / 0.10;
  amount = amount - (cent_10 * 0.1);

  cent_5 = amount / 0.05;
  amount = amount - (cent_5 * 0.05);

  cent_1 = amount / 0.01;
  amount = amount - (cent_1 * 0.01);

  cout << "NOTAS:\n";
  cout << money_100 << " nota(s) de R$ 100.00\n";
  cout << money_50 << " nota(s) de R$ 50.00\n";
  cout << money_20 << " nota(s) de R$ 20.00\n";
  cout << money_10 << " nota(s) de R$ 10.00\n";
  cout << money_5 << " nota(s) de R$ 5.00\n";
  cout << money_2 << " nota(s) de R$ 2.00\n";

  cout << "MOEDAS:\n";
  cout << cent_100 << " moeda(s) de R$ 1.00\n";
  cout << cent_50 << " moeda(s) de R$ 0.50\n";
  cout << cent_25 << " moeda(s) de R$ 0.25\n";
  cout << cent_10 << " moeda(s) de R$ 0.10\n";
  cout << cent_5 << " moeda(s) de R$ 0.05\n";
  cout << cent_1 << " moeda(s) de R$ 0.01\n";

  return 0;
}
