
#include <iostream>
#include <locale> //libreria

using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8"); //funsion, con esto "(LC_ALL, "spanish" o "es_ES.UTF-8")" tiene que ponertelo en español
    cout << "Hola ñoñó \n";
}