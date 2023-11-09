//Ejemplo de Profesor del DO WHILE

//Incluiremos las librerias que se usaran
#include <iostream>
using namespace std;

int main()
{
    // Resultado esperdo de la suma
    int resultado = 14;
    // Resultado que escribe el usuario
    int entredaUsuario;
    // Contador de Intentos
    int intentos = 0; // el contador empezara a contar desde el 0 ejemplo 0, 1, 2 --> esto ya serian los 3 intentos de la condicion

    //creamos ustro bucle DO while
    /*do {
        //comentario del lo que pedimos al usuario
        cout << "Introduce el resultado la suma de 9+5: ";
        cin >> entredaUsuario;
    } while (entredaUsuario != 14); { // mientras que no sea 14 lo volvera a pedir
        cout << "Bienvenido";
    }*/

    /* 
     //bucle con solo while
    cout << "Introduce el resultado la suma de 9+5: ";
    cin >> entredaUsuario;

    while (entredaUsuario != 14) { // mientras que no sea 14 lo volvera a pedir o resultado
    cout << "ERROR!! El número no es correcto\n";
    cout << "Introduce el resultado correcto de la suma de 9+5: \n";
    cin >> entredaUsuario;
    } */

    //bucle con contador de intentos
    cout << "Introduce el resultado la suma de 9+5: ";
    cin >> entredaUsuario;

    while (entredaUsuario != 14 && intentos < 3) { // mientras que no sea 14 lo volvera a pedir o resultado
        cout << "ERROR!! El número no es correcto\n";
        cout << "Introduce el resultado correcto de la suma de 9+5: \n";
        cin >> entredaUsuario;
        cout << "llevas";
        intentos++;
    }

    if (intentos == 3) {// si fallo una 3 veces, saltara el error, si no ira a bienvenido
        cout << "ERROR de seguridad. Has utilizado 3 intentos. Vuelve Mañana";
    }
    else {
        cout << "Bienvenido";
    }
    system("pause");

    return 0;
}