#include <iostream>
#include <stdlib.h>
#include <fstream> // libreria para el manejo de archivos
//JOSUE SANDOVAL Y EDIN HERNANDEZ
using namespace std;

void escribir(); // funcion a crear mas adelante

//cuerpo del programa
int main ()
{
    escribir();
    system("PAUSE");
    return 0;
}

//funcion para crear el archivo
void escribir()
{
    ofstream miarchivo; //variable tipo archivo
    string nombre_archivo; //variable tipo cadena de caracteres para el nombre del archivo
    string texto_archivo; //variable tipo cadena de caracteres para capturar el texto del usuario

    cout << "\n Escribe el nombre para el archivo:"; //texto en pantalla
    getline(cin, nombre_archivo); //captura el nombre del archivo que el usuario escriba
    miarchivo.open(nombre_archivo.c_str(), ios::out); //manipular la cadena de caracteres y darle ese nombre

    if (miarchivo.fail())
    {
        cout<< "Error al abrir el archivo";
        exit(1);
    }

    for (int i = 0; i < 3; ++i) { // Bucle para solicitar tres textos
        cout << "\n Escribe el texto " << i + 1 << " a guardar en el archivo:"; //mensaje en pantalla
        getline(cin, texto_archivo); //capturamos el texto que escriba el usuario para escribirlo en el txt

        miarchivo << texto_archivo << endl; //se escribe en el archivo el texto que el usuario ingrese seguido de un salto de línea
    }

    miarchivo.close(); //cerrar archivo
}
