#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

class clase {       //crearemos los atributos que habrá en la clase "clase"
private:             // modo de acceso
    int edad;       // atributo|variable Nºentro
    string nombre;  // atributo|variable string|texto
public:
    void escribe() {
        cout << "hola";
    }
public:
    void darDatos(int e, string n) { //funcion encapsulada
        edad = e;
        nombre = n;
    }
public:
    string recogerString() { //funcion encapsulada
        return nombre;
    }
public:
    int recogerInteger() {
        return edad;
    }
    //creamos un metodo
public:
    string bienvenida() {
        return "Hola alumnos";
    }

/*public:
    clase(int e, string n) { //constructor|funcion que se ejecuta sola 'e' recogera la edad y 'n' recogera el nombre
        edad = e;
        nombre = n;
    }*/
};

int main()
{
    setlocale(LC_ALL, "ES_es.UTF-8");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    // subida prueba clase
    /*clase alumno;
    alumno.edad = 21;
    alumno.nombre = "Paco";
    cout << "Alumno: " << alumno.nombre << " edad: " << alumno.edad << "\n";

    clase alumno2;
    alumno2.edad = 22;
    alumno2.nombre = "Pepe";
    cout << "Alumno: " << alumno2.nombre << " edad: " << alumno2.edad << "\n";
    alumno2.escribe();*/
    cout << "-----------------------------------primer array-------------------------\n\n";
    /*clase alumno1(21, "pepe"); //llamamos a la funcion
    cout << "Alumno: " << alumno1.nombre << " edad: " << alumno1.edad << "\n";*/

    cout << "-----------------------------------segundo array-------------------------\n\n";
    
    clase* profesor;
    profesor = new clase; //le damos la direccion (o puntero) de memoria
    profesor->darDatos(28, "pepe");
    //profesor->edad = 28;
    //profesor->nombre = "pepe";
    cout << profesor->bienvenida() << ". Mi nombre es " << profesor->recogerString() << " y tengo " << profesor->recogerInteger() << " años";

    //cout << profesor->bienvenida() << ". Mi nombre es " << profesor->nombre << " y tengo " << profesor->edad << " años";

    //new es para 
    /*clase* alumnos = new clase[2]; //array que contendra 2 objetos --> clase[2] 
    alumnos[0].edad = 21;
    alumnos[0].nombre = "pepe";

    alumnos[1].edad = 20;
    alumnos[1].nombre = "paco";

    for (int i = 0; i < 2; i++) {
        cout << "\n-----------\nAlumno " << i+1 << "\n" << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Edad: " << alumnos[i].edad;
    }*/
    //delete[] alumnos; //hace una eliminacion automatica el contenido de alumnos

    cout << "-----------------------------------clase con New-------------------------\n\n";
    system("pause");

    return 0;
}
