#include <iostream>
using namespace std;
int main() {
  int placa;
  cout << "———————BEM VINDO AO SISTEMA———————" << endl;
  cout << "Digite o ultimo digito do seu carro [0 a 10]:" << endl;
  cin >> placa;
  if (placa < 0) {
    system("pause");
    cout << "digite um numero que esta dentro do limite solicitado" << endl;
     //system("pause");
     return 0;
}
  if (placa > 10) {
    system("pause");
    cout << "digite um numero que entra dentro do limite solicitado" << endl;
    return 0;
    //system("pause");
    }
  if (placa == 1) {
  cout << "O seu carro esta proibido de andar na segunda-feira" << endl;
   return 0;
  } if (placa == 2) {
    cout << "O seu carro esta proibido de andar na segunda-feira" << endl;
     return 0;
    } else {
      cout << "O seu carro esta liberado todos os dias" << endl;
      }

    system("pause");
    return 0;
}