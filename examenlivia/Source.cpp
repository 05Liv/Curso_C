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

    //declaro mis arrays 
    string libros[3]{
        "La Catedral del Mar",
        "La sombra del viento",
        "Los Pilares de la Tierra"
    };
    /*for (string i : libros) {
        cout << i << "\n";
    }*/
    string autores[3]{
        "Ildefonso Falcones",
        "Carlos Ruiz Zafón",
        "Ken Follet"
    };

    float precioLibros[3]{
       19.80,
       15.20,
       21.20
    };

    //variable
    int mostrarLibros;
    int opcion;

    cout << "Libros a la venta: \n";
    for (int mostrarLibros = 0; mostrarLibros < 3; mostrarLibros++) {
        cout << mostrarLibros + 1 << ". " << libros[mostrarLibros] << " - " << autores[mostrarLibros] << " - " << precioLibros[mostrarLibros] << " euros\n";
    }

    cout << "4. Ir al carrito\n"; // Muestra la opción de ir al carrito
    cout << "5. Salir\n"; //la opción para salir
    cout << "Elige una opción: ";
    cin >> opcion; // Guardamos la opción en la variable
    return opcion; // Devolvemos la opción

    system("pause");

    return 0;
}