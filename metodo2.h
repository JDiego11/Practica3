#ifndef METODO2_H
#define METODO2_H

#include "ManejoArchivos.h"

char *Codificacion2(int semilla, string file);
char *TextToBin2(char *texto);
char *CharToBin2(int letra);
int Arraylenght(char *array);

//Decodificación
char *Decodificacion2(int semilla, string file);
char *BinToText2(char *code);
int BinToChar2(char *letra);

#endif // METODO2_H
