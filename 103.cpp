#include <iostream>
using namespace std;
struct  estudiante{
	char nombre[15];
	float notas[4];
	float promedio;
	}personas[5];
int main(){
	for(int i=0;i<5;i++){
		cout<<"Ingrese el nombre del estudiante numero"<<i+1<<endl;
		cin>>personas[i].nombre;
		cout<<"Digite las 4 notas del estudiante"<<endl;
		for(int a=0;a<4;a++){
			cin>>personas[i].notas[a];
		}
		float aux=0;
		for(int a=0;a<4;a++){
			aux=personas[i].notas[a]+aux;
		}
		personas[i].promedio=aux/4;
		if (personas[i].promedio>=3.5){
			cout<<personas[i].nombre<<" Es apto, tiene un promedio de: "<<personas[i].promedio<<endl;
		}
		else{
			cout<<personas[i].nombre<<" NO es apto, tiene un promedio de: "<<personas[i].promedio<<endl;
		}
	}
}
