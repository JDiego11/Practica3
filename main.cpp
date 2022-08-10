#include "ManejoArchivos.h"
#include "metodo1.h"

int main()
{
    cout << ReadFile1("Archivo.txt", 0) << endl;
    char* texto = ReadFile2("Archivo.txt", 1);
    int tamano = sizeof (texto), x=0;
    cout << tamano << endl;
    while (texto[x] != '\0') {
        cout << texto[x];
        x++;
    }
    cout << endl;

    delete[] texto;
    texto = nullptr;
    return 0;
}
