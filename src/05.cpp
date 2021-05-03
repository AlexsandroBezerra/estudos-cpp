#include <iostream>

using namespace std;

int main() {
  int year;
  bool is_ordinary = true;

  cout << "Digite o ano: ";
  cin >> year;

  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    is_ordinary = false;
    cout << "This is leap year.\n";

    if (year % 55 == 0)
      cout << "This is bulukulu festival year.\n";
  } if (year % 15 == 0) {
    is_ordinary = false;
    cout << "This is huluculu festival year.\n";
  }

  if (is_ordinary)
    cout << "This is a ordinary year.";

  return 0;
}
