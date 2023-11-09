#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//? --> implica

	//declaro mis varibales

	int cateto1;
	int cateto2;
	float Rhipo;

	cout << "introduce dos numeros: ";
	cin >> cateto1;
	cout << "introduce dos numeros: ";
	cin >> cateto2;

	//Rhipo = sqrt((cateto1 * cateto1 + cateto2 * cateto2));
	Rhipo = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

	cout << "el resultado es: " << Rhipo;




}