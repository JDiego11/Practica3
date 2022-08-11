#include "metodo1.h"

string Codificacion(int semilla, string file) {
    string texto = ReadFile1(file, 1);
    string TextInBin = TextToBin(texto);
    int SizeBinText = TextInBin.size();
    int cont1, cont0, contx=0;
    string aux1, aux2 = "", aux3;
    //aux1 = DivGroup(TextInBin, semilla);
    aux1 = "";
    for (int i=0; i<semilla; i++) {
        aux1 += TextInBin[i];
    }
    for (int i=0; i<semilla; i++) {
        if (aux1[i] == '0') {
            aux2 += '1';
        }
        else {
            aux2 += '0';
        }
    }
    for (int i=(semilla); i<SizeBinText; i+=semilla) {
        aux3 = aux1;
        aux1 = "";
        for (int j=0; j<semilla; j++) {
            aux1 += TextInBin[i+j];
        }
        cont1 = Count1(aux3, semilla);
        cont0 = Count0(aux3, semilla);
        if (cont1 == cont0) {
            for (int j=0; j<semilla; j++) {
                if (aux1[j] == '0') {
                    aux2 += '1';
                }
                else {
                    aux2 += '0';
                }
            }
        }
        else if (cont1 > cont0) {
            contx = 1;
            for (int j=0; j<semilla; j++) {
                if (contx == 3) {
                    if (aux1[j] == '0') aux2 += '1';
                    else aux2 += '0';
                    contx = 1;
                }
                else {
                    aux2 += aux1[j];
                    contx++;
                }
            }
        }
        else {
            contx = 1;
            for (int j=0; j<semilla; j++) {
                if (contx == 2) {
                    if (aux1[j] == '0') aux2 += '1';
                    else aux2 += '0';
                    contx = 1;
                }
                else {
                    aux2 += aux1[j];
                    contx++;
                }
            }
        }
    }
    return aux2;
}

int Count1 (string Bin, int semilla) {
    int cont = 0;
    for (int i=0; i<semilla; i++) {
        if (Bin[i] == '1') {
            cont++;
        }
    }
    return cont;
}

int Count0 (string Bin, int semilla) {
    int cont = 0;
    for (int i=0; i<semilla; i++) {
        if (Bin[i] == '0') {
            cont++;
        }
    }
    return cont;
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

string Decodificacion(int semilla, string file) {
    string TextInBin = ReadFile1(file, 1);
    int SizeBinText = TextInBin.size();
    int cont1, cont0, contx=0;
    string aux1 = "", aux2 = "", aux3;
    for (int i=0; i<semilla; i++) {
        aux1 += TextInBin[i];
    }
    for (int i=0; i<semilla; i++) {
        if (aux1[i] == '0') {
            aux2 += '1';
        }
        else {
            aux2 += '0';
        }
    }
    aux3 = aux2;
    for (int i=(semilla); i<SizeBinText; i+=semilla) {
        aux1 = "";
        for (int j=0; j<semilla; j++) {
            aux1 += TextInBin[i+j];
        }
        cont1 = Count1(aux3, semilla);
        cont0 = Count0(aux3, semilla);
        if (cont1 == cont0) {
            for (int j=0; j<semilla; j++) {
                if (aux1[j] == '0') {
                    aux2 += '1';
                }
                else {
                    aux2 += '0';
                }
            }
        }
        else if (cont1 > cont0) {
            contx = 1;
            for (int j=0; j<semilla; j++) {
                if (contx == 3) {
                    if (aux1[j] == '0') aux2 += '1';
                    else aux2 += '0';
                    contx = 1;
                }
                else {
                    aux2 += aux1[j];
                    contx++;
                }
            }
        }
        else {
            contx = 1;
            for (int j=0; j<semilla; j++) {
                if (contx == 2) {
                    if (aux1[j] == '0') aux2 += '1';
                    else aux2 += '0';
                    contx = 1;
                }
                else {
                    aux2 += aux1[j];
                    contx++;
                }
            }
        }
        aux3 = "";
        for (int k=0; k<semilla; k++) {
            aux3 += aux2[i+k];
        }
    }
    return aux2;
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
