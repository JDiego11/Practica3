#ifndef MANEJOARCHIVOS_H
#define MANEJOARCHIVOS_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void CreateFile(string name);
void WriteFile(string name, string text);    //Escribir en el archivo

/****Funciones para leer el archivo****/
string ReadFile1(string name, bool mode);       //Obtiene la info del archivo como un string
char *ReadFile2(string name, bool mode);        //Obtiene la info del archivo como un arreglo de caracteres

#endif // MANEJOARCHIVOS_H
