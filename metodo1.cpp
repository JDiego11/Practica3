#include "metodo1.h"

string Codificacion(int semilla, string file) {
    string texto = ReadFile1(file, 1);
    texto = TextToBin(texto);
    return texto;
}

string TextToBin(string texto) {
    string newtexto = "";
    int tam = texto.size();
    for (int i=0; i<tam; i++) {
        newtexto += CharToBin(texto[i]);
    }
    return newtexto;
}

string CharToBin(int letra) {
    string CodeLet = "";
    for (int i=0; i<8; i++) {
        if ((letra%2) == 0) {
            CodeLet += '0';
        }
        else {
            CodeLet += '1';
        }
        letra /= 2;
    }
    CodeLet = ReverseString(CodeLet);
    return CodeLet;
}

string ReverseString(string code) {
    string reverse;
    for (int i=code.size()-1; i>=0; i--) {
        reverse = reverse.append(1, code[i]);
    }
    return reverse;
}

string Decodificacion(int semilla, string texto, string file) {

}

string BinToText(string code) {
    string newtexto = "", AuxLet;
    int tam = code.size() / 8;
    int aux = 0;
    for (int i=0; i<tam; i++){
        AuxLet = "";
        for (int j=0; j<8; j++) {
            AuxLet += code[aux+j];
        }
        newtexto += char(BinToChar(AuxLet));
        aux += 8;
    }
    return newtexto;
}

int BinToChar(string letra) {
    int newlet = 0;
    for (int i=0; i<8; i++) {
        newlet *= 2;
        if (letra[i]=='1') {
            newlet += 1;
        }
    }
    return newlet;
}
