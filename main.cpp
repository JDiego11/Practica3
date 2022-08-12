#include "ManejoArchivos.h"
#include "metodo1.h"
#include "metodo2.h"

int main()
{
    cout << Arraylenght(Codificacion2(4, "Archivo.txt")) << endl;
    cout << Codificacion2(4, "Archivo.txt") << endl;
    /*char arr[4] = {'A','b','C','d'};
    char* Bintext = TextToBin2(arr);
    int len = Arraylenght(Bintext);
    cout << len << endl;
    for (int i=0; i<len; i++) {
        cout << Bintext[i];
    }
    cout << endl;

    char* Text =BinToText2(Bintext);
    int lin = Arraylenght(Text);
    cout << lin << endl;
    for (int i=0; i<lin; i++) {
        cout << Text[i];
    }
    cout << endl; */
    /*cout << "Texto del archivo:\n" << ReadFile1("Archivo.txt", 1) << endl;
    cout << "Texto en binario:\n" << TextToBin("AbCd") << endl;
    string texto = Codificacion(4, "Archivo.txt");

    cout << endl;

    cout << "Texto codificado:\n" << texto << endl;
    WriteFile("Codify.txt", texto);

    cout << endl;

    string text = Decodificacion(4, "Codify.txt");
    cout << "Texto decodificado:\n" << text << endl;
    cout << "Binario en texto:\n" << BinToText(text) << endl << endl;*/


    /*cout << ReadFile1("Archivo.txt", 0) << endl;
    char* texto = ReadFile2("Archivo.txt", 1);
    cout << "El tamano del arreglo con el texto es de: " << Arraylenght(texto) << endl;
    int x=0;
    while (texto[x] != '\0') {
        cout << texto[x];
        x++;
    }
    cout << endl;

    int y=0;
    cout << endl;
    char *array2 = TextToBin2(texto);
    while (array2[y] != '\0') {
        cout << array2[y];
        y++;
    }
    cout << endl;

    delete[] texto;
    texto = nullptr;
    delete[] array2;
    array2 = nullptr;
    return 0;*/
}
