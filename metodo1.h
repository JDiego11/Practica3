#ifndef METODO1_H
#define METODO1_H

#include "ManejoArchivos.h"

string Codificacion(int semilla, string file);
string TextToBin(string texto);
string CharToBin(int letra);
string ReverseString(string code);

string Decodificacion(int semilla, string texto, string file);
string BinToText(string code);
int BinToChar(string letra);

#endif // METODO1_H
