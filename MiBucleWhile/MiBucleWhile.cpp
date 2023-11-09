
#include <iostream>
using namespace std;

int main()
{
	//Mis variables
    int resul = 14;
	int cont = 0;

	//lo que se pide
	cout << "SUMA 9+5: ";
	cin >> resul;

	//mi bucle con la condición
	while (cont < 3)
	{
		cout << "vuelve a intentarlo\n";
		cout << "SUMA 9+5: ";
		cin >> resul;
		cont++;
	}

	system("pause");

	return 0;
}