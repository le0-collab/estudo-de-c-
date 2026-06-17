#include <iostream>

using namespace std;
int main() {
  int valor1, valor2, soma = 0;
  cout << "digite o primeiro valor >>>" << endl;
  cin >> valor1;
  
  cout << "digite o segundo valor >>>" << endl;
  cin >> valor2;
  soma = valor1 + valor2;
  cout << "a soma entre esses dois valores eh: " << soma << endl;
  return 0;
}