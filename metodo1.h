#ifndef METODO1_H
#define METODO1_H

#include "ManejoArchivos.h"

string Codificacion(int semilla, string file);
string TextToBin(string texto);
string CharToBin(int letra);
string ReverseString(string code);
int Count1 (string Bin, int semilla);
int Count0 (string Bin, int semilla);

string Decodificacion(int semilla, string file);
string BinToText(string code);
int BinToChar(string letra);

#endif // METODO1_H
