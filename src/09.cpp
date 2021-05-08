#include <iostream>

using namespace std;

int main() {
  int initial_time, final_time, result;

  cout << "Hora de inicio do jogo: ";
  cin >> initial_time;

  cout << "Hora de termino do jogo: ";
  cin >> final_time;

  if (final_time > initial_time)
    result = final_time - initial_time;
  else
    result = 24 - initial_time + final_time;

  cout << "O JOGO DUROU " << result << " HORA(S)";

  return 0;
}
