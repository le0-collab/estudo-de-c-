#include <iostream>
using namespace std;

int main() {
  
  int produto;
  float produto1 = 6.00, produto2 = 9.00, produto3 = 4.00, real = 0;
  cout << "———MENU DE OPCOES———" << endl;
  cout << " [1] hamburguer (U$6.00) \n [2] pizza (U$9.00) \n [3] batata frita (U$4.00)" << endl;
cin >> produto;
  if (produto == 1) {
     real = produto1 * 5.0;
     cout << "voce escolheu hamburguer! o valor eh R$" << real << endl; 
       } 
  if (produto == 2) {
      real = produto2 * 5.00;
      cout << "voce escolheu pizza! o valor eh R$" << real << endl; 
      } 
  if (produto == 3) {
     real = produto3 * 5.00;
     cout << "voce escolheu batata frita! o valor eh R$" << real << endl;
      } 

 system ("pause");
 return 0;
}