#include "metodo2.h"

/*char *Codificacion2(int semilla, string file) {

}*/

char *TextToBin2(char *texto) {
    char *CodeText = new char;
    char *ArrayAux;
    int x = 0, y = 0;
    while (texto[x] = '\0') {
        ArrayAux = CharToBin2(texto[x]);
        for (int i=0; i<8; i++) {
            CodeText[y] = ArrayAux[i];
            y++;
        }
        x++;
    }
    delete[] ArrayAux;
    return CodeText;
}

char *CharToBin2(int letra) {
    char* BinLet = new char[8];
    for (int i=8; i>0; i--) {
        if ((letra%2) == 0) {
            BinLet[i-1] = '0';
        }
        else {
            BinLet[i-1] = '1';
        }
        letra /= 2;
    }
    return BinLet;
}
