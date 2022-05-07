#include <iostream>
#include <cctype>
using namespace std;

bool compara (int A, int B) // & mostrar o resultado // função
{
  bool RESULTADO;
  RESULTADO = (A == B);
  return RESULTADO;
}

void pause(void)
{
  cout << endl;
  cout <<"Tecla <Enter> para encerrar...";
  cin.get();
  return;
}

int main (void) // procedimento (tem void)
{
  int N1, N2;

  cout << "Verificacao Logica\n";

  cout << "\nEntre o 1o. Numero:  "; cin >> N1;
  cin.ignore(80, '\n');

  cout << "\nEntre com o 2o. Numero: " cin >> N2;
  cin.ignore(80, '\n');

  pause();
  return 0;
}
