#include "metodo2.h"

char *Codificacion2(int semilla, string file) {
    char* Texto = new char;
    Texto = ReadFile2(file, 1);
    int Size = Arraylenght(Texto);
    char* BinText = new char[Size*8];
    BinText = TextToBin2(Texto);
    int Size2 = Arraylenght(BinText);
    char* aux2 = new char[Size2];
    for (int i=semilla; i<Size2; i++) {
            aux2[i-semilla] = BinText[i];
    }
    for (int i=0; i<semilla; i++) {
        aux2[Size2-semilla+i] = BinText[i];
    }
    aux2[Size2] ='\0';
    //delete Texto;
    //delete[] BinText;
    return aux2;
}

char *Decodificacion2(int semilla, string file) {
    char* CodeText = new char;
    CodeText = ReadFile2(file, 1);
    int Size1 = Arraylenght(CodeText);
    char* aux = new char[Size1];
    for (int i=0; i<Size1-semilla; i++) {
        aux[i] = CodeText[i+semilla];
    }
    for (int i=0; i< semilla; i++) {
        aux[Size1-semilla+i] = CodeText[i];
    }
    aux[Size1] = '\0';
    delete CodeText;
    return aux;
}

char *TextToBin2 (char *texto) {
    int SizeArray = Arraylenght(texto);
    int size = (SizeArray*8);
    char *CodeText = new char[size];
    //char *ArrayAux = new char[8];
    int x=0;
    for (int i=0; i<SizeArray; i++) {
        for (int j = 0; j<8; j++) {
            CodeText[x] = *(CharToBin2(texto[i])+j);
            x++;
        }
    }
    CodeText[size] = '\0';
    return CodeText;
}

int Arraylenght(char *array) {
    int cont = 0;
    while (array[cont] != '\0') {
        cont++;
    }
    return cont;
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
    BinLet[8] = '\0';
    return BinLet;
}

char *BinToText2(char *code) {
    int size = Arraylenght(code)/8;
    int aux = 0;
    char* Text = new char[size+1];
    char* Aux;
    for (int i=0; i<size; i++) {
        Aux = new char[8];
        for (int j=0; j<8; j++) {
            Aux[j] = *(code + (aux+j));
        }
        Aux[8] = '\0';
        Text[i] = char(BinToChar2(Aux));
        aux += 8;
    }
    Text[size] = '\0';
    return Text;
}

int BinToChar2(char *letra) {
    int DecodeLet = 0;
    for (int i=0; i<8; i++) {
        DecodeLet *= 2;
        if (*(letra+i) == '1') {
            DecodeLet++;
        }
    }
    return DecodeLet;
}
