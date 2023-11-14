#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

void mifuncion(int resultado) { //aqui se comprueba que es 14
    //dentro se pueden poner condiciones --> if
    
    if (resultado == 14) {
        cout << "Muy bien!!!!\n\n";
    }
    else {
        cout << "ERROR. No es correcto\n\n";
    }
}

int main()
{
    setlocale(LC_ALL, "ES_es.UTF-8");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int resultado;
    int intentos = 0;
    while (intentos < 3) {
        cout << "Eres humano? Realiza a la suma de 5+9: ";
        cin >> resultado;
        mifuncion(resultado); //llamo a la función 'mifuncion(resultado)' para verificar si el resultado ingresado es correcto o no

        if (resultado == 14) { //hago otro 'if' para verificar si el resultado es igual a 14. Si es así, se utiliza `break` para salir del bucle `while` y permitir el acceso.
            break;
        }

        intentos++;
    }

    system("pause");

    return 0;
}