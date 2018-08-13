#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;
void escribir(){
	ofstream archivo;
	string texto;
	archivo.open("ascii.txt",ios::in);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo"<<endl;
		exit(1);
	}
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;

	}
	archivo.close();
}
int main(){
	escribir();
}
