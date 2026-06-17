#include <iostream>
using namespace std;

int main() {

  float valor, estudante, desconto;
  cout << "qual foi o valor da compra? R$";
  cin >> valor;
  if (valor <= 0) {
     cout << "nao digite valor menor ou igual que [R$0] na compra!" << endl;
      system("pause");
      return 0;
      }
  cout << "voce eh estudante? \n [1]sim [2] nao"  << endl;
  cin >> estudante;

  if (estudante >= 3) {
     cout << "Digite apenas [1/2]" << endl;
     system("pause");
     return 0;
  } if (estudante <= 0) {
     cout << "Digite apenas [1/2]" << endl;
     system("pause");
     return 0; }

  if (estudante == 1) {
     desconto = valor * 0.15;
     cout << "voce recebeu um desconto de 15% por ser estudante! o valor da compra passa a valer: R$" << valor - desconto << endl;
  } if (estudante == 2) {
     cout << "O valor fica no valor de R$" << valor << endl;
}

    system("pause");
    return 0;
}