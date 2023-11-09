#include <iostream>

using namespace std;

int main() {
	string nombre; //variable tipo strig

	cout << "Introduce tu nombre de pila: ";

	cin >> nombre; //aqui pedimos el nombre
	//si termina con una varible hay que poner "<< endl" o "\n"
	cout << "hola " << nombre << endl;

	system("pause");
	return 0;
}