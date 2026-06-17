#include<iostream>

using namespace std;

int main() {
    
  int num = 0;
  cout << "digite um valor no intervalo de 45 e 75:" << endl; 
  cin >> num;
  if (num >= 45 && num <= 70) {
     cout << "brigado por informar um numero no intervalo solicitado" << endl;
  } else {
     cout << "voce nao informou um valor no intervalo solicitado! tente outra vez!" << endl;
    }
    
    
    system ("pause");
    return 0;