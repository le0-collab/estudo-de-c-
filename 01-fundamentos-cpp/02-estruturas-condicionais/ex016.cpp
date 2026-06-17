#include <iostream>
using namespace std;

int main() {
  
  float valor, estudante, desconto;
  cout << "qual e o valor do carro que deseja comprar R$";
  cin >> valor;
  cout << "voce eh estudante? \n [1]sim [2] nao"  << endl;
  cin >> estudante;
  if(estudante == 1) {
     desconto = valor * 0.15
     cout << "voce recebeu um desconto de 15% por ser estudante! o valor do veiculo passa a valer: R$" << valor << endl;
  } if(estudante == 2) {
     cout << "O valor fica no valor de R$" << valor << endl;  
  } if (valor <= 0 && estudante <= 0 || estudante >= 3) {
     cout << "nao digite valor menos que R$0 na compra, tambem nao digitar valores diferente de [1/2] na pergunta de estudante!"  << endl; 
    }
   
    system("pause");
    return 0;
}