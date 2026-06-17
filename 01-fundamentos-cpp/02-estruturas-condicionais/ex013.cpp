#include <iostream>
using namespace std;

  int main() {
  int num;
  cout << "Digite um valor inteiro para ver se ele eh impar ou par >>>";
  cin >> num;
  int r = 0;
  r = num % 2;
 if (r == 0) {
  cout << "O valor digitado eh par"<< endl; 
 } else {
   cout << "O valor digitado eh impar "<< endl;
 } 
  
  system("pause");
  return 0;
}