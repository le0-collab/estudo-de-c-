#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {

  int i = 5, i2 = 10;

  cout << "Se o valor de i for igual ao de i2, entao, a frase a seguir será impressa" << endl;
  if(i == i2) cout << "A variavel i é igual a variavel i2" << endl;

  cout << "i eh diferente de i2?" << endl;
  if( (i != i2) == true ) cout << "Sim, eh diferente" << endl;

  system("pause");
  return 0;
}