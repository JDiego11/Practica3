#include "ManejoArchivos.h"

void CreateFile(string name) {      //Creamos un archivo
    std::fstream file(name, fstream::out);
    file.close();                   //cerrar el archivo al dejar de usarlo
}

string ReadFile1(string name, bool mode) {
    string datos;
    fstream text;
    unsigned long long tam;
    //int x=0;
    if(mode){
        text.open(name,fstream::in);
        if(text.is_open()){
            while(!text.eof()){
                datos.push_back(text.get());
                //x++;
            }
            datos.pop_back();

        }
        else cout <<"El archivo no pudo ser abierto"<<endl;
    }
    else{
        text.open(name, fstream::in | fstream::binary |fstream::ate);
        if(text.is_open()){
            tam=text.tellg();
            text.seekg(0);
            for(unsigned long long i=0;i<tam;i++) datos.push_back(text.get());
        }else cout<<"El archivo no puede ser abierto"<< endl;
    }
    text.close();
    return datos;
}

char *ReadFile2(string name, bool mode){

    char *datos;
    fstream text;
    unsigned long long tam=0;
    //int x=0;
    if(mode){
        text.open(name,fstream::in|fstream::ate);
        if(text.is_open()){
           tam=text.tellg();
           datos = new char[tam];
           text.seekg(0);
            char termino;
            for (unsigned long long i=0;i<tam;i++){
                termino= text.get();
                if(termino != EOF){
                    datos[i]=termino;
                }
                else  datos[i]='\0';
            }
        }
        else cout<<"El archivo no pudo ser abierto"<<endl;
    }
    else{
        text.open(name, fstream::in|fstream::ate|fstream::binary);
        if(text.is_open()){
            tam=text.tellg();
            datos = new char[tam];
            text.seekg(0);
            char valorBinario;
            for(unsigned long long i=0;i<tam+1;i++){
                valorBinario=text.get();
                if(valorBinario !=EOF){
                    datos[i]=valorBinario;
                }
                else datos[i]='\0';
            }
        }
    }
    text.close();
    return datos;
}

void WriteFile(string name, string text) {
        fstream file(name, fstream::out);
        file<<text;
        file.close();
}
