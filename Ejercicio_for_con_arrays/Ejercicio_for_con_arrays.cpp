#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

int main()
{


    setlocale(LC_ALL, "ES_es.UTF-8");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int caliestu[5];
    float suma;
    float total;

    //cout << "Introduce las calificaiones de 5 estudiantes";
    for (int i = 0; i < 5; i++) {
        cout << "Introduce las calificaiones de 5 estudiantes: ";
        cin >> suma = caliestu;
        //suma[caliestu];
        total = suma / 5;
    }
    cout << "El promedio es: " << total;
    

    system("pause");

    return 0;
}
