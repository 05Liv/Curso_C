#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

class claseAlumnos {
public:
    float nota;
    string nombre;
};



int main()
{
    setlocale(LC_ALL, "ES_es.UTF-8");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    int cantAlumno;
    cout << "cuantos alumnos vas a ingresar:\n";
    cin >> cantAlumno;

    //creamos array de objetos con new ------------------------
   claseAlumnos* alumnosdeclase = new claseAlumnos[cantAlumno];
   //----------------------------------------------------------
    
   //variables
    string nombreAlumno;
    float notaAlumno = 0;

    for (int i = 0; i < cantAlumno; i++) {
        cout << "Introduce el Nombre del alumno " + to_string(i + 1) << endl;
        cin.ignore();
        getline(cin, nombreAlumno);
        // LO QUE AGREGUÉ----------------------------------
        //cout << "Introduce la nota del Nombre" << endl;
        cout << "Introduce la nota " << nombreAlumno << " ";
        cin >> notaAlumno;

        alumnosdeclase[i].nombre = nombreAlumno;
        alumnosdeclase[i].nota = notaAlumno;

        cout << "\n\n";

    }
    cout << "Resultado de las entradas:\n";
    
    // LO QUE AGREGUÉ-------------------------------------------
    for (int i = 0; i < cantAlumno; i++) {
        /* alumnosdeclase[i].nombre = nombreAlumno;
        alumnosdeclase[i].nota = notaAlumno;*/
        cout << "El Alumno " << alumnosdeclase[i].nombre << " tiene una nota de "<< alumnosdeclase[i].nota << endl;
    }

    system("pause");

    return 0;
}
