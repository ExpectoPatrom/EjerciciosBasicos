#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
void escribir(){
	ofstream archivo;
	archivo.open("ascii.txt",ios::out);
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo"<<endl;
		exit(1);
	}
	for (int a=0;a<=127;a++){
		char b=a;
		archivo<<b<<endl;
	}
	archivo.close();
}
int main(){
	escribir();
}
