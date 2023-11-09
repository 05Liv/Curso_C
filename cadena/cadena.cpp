#include <iostream>
#include <locale>
#include <string>
#include <windows.h>

using namespace std;
int main() {

	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
	setlocale(LC_CTYPE, "spanish");

	//cocatenación
	string hola = "hola";
	string mundo = "mundo";
	string holamundo = hola + mundo;
	cout << holamundo << endl;

	cout << "--------------------------\n\n";
	//concatenar dos números es sumarlos
	int cinco = 5;
	int cuatro = 4;
	int resultadodelaSuma = cinco + cuatro;
	cout << resultadodelaSuma << endl;

	cout << "--------------------------\n\n";
	
	//concatenamos dos números "declarando como string" 
	string cincostring = "5";
	string cuatrostring = "4";
	cout << cincostring + cuatrostring << endl;

	cout << "--------------------------------\n\n";
	
	/*concatenar un numero y un string debemos convertir el numero en string
	si no da error */
	string resultado = "el resultado es: \n";
	int nueve = 9;
	cout << resultado + to_string(nueve) << endl;

	cout << "-------------------------------\n\n";

	//longitud de cadena
	string holaquetal = "Holaquetal";
	cout << "la palabra " << holaquetal << " tiene " << holaquetal.length() << " caracteres\n";

	cout << "----------------------------------\n\n";
	//cadena como array
	string caza = "caza";
	cout << caza[0] << endl;
	cout << "aza";
	caza[0] = 'b';
	cout << caza << endl;

	cout << "----------------------------\n\n";

	cout << "esto es un \"texto con\" comillas";

	cout << "------------------------\n\n";

	//user input strings
	string ingresatunombre;
	cout << "hola, ingresa tu nombre: \n";
	//cin >> ingresatunombre;
	getline(cin, ingresatunombre);
	cout << "hola" << ingresatunombre << endl;


	system("pause");
	return 0;
}