#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int aux;
int llenar_aleatorio(){
	int a;
	a=rand()%100;
	return a;
}
void mostrar(int arreglo[]){
	for (int i=0;i<10;i++){
		cout<<arreglo[i]<<" ";
	}
}
int burbujaa(int arreglo[], int i){
	if(arreglo[i]>arreglo[i++]){
		aux=arreglo[i];
		arreglo[i]=arreglo[i++];
		arreglo[i++]=aux;
		return arreglo[i];
	}
}
int main(){
	int arreglo[10], arreglocopia[10],burbuja[10];
	//llenar al azar
	cout<<"Lo vamos a llenar al azar"<<endl;
	cout<<"Generamos la semilla"<<endl;
	cout<<"con rand()%100 generamos un numero al azar entre 0 y 100"<<endl;
	srand(time(NULL));
	for(int i=0;i<10;i++){
		arreglo[i]=llenar_aleatorio();
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
	//************************************************************
	//copiar el arreglo original;
	cout<<"Para copiar el arreglo original (llenado al azar) vamos a igualar nuestro nuevo arreglo al original en la misma posicion, asi:"<<endl;
	cout<<"arreglocopia[i]=arreglo[i];"<<endl;
	for(int i=0;i<10;i++){
		arreglocopia[i]=arreglo[i];
	}
	//mostrar arreglo en pantalla
	mostrar(arreglo);
	cout<<"******************************************************"<<endl;
	//ordenar por burbuja
	for(int i=0;i<10;i++){
		burbujaa(arreglo,i);	
		cout<<arreglo[i]<<"   ";
	}
}
