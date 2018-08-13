#include <iostream>
using namespace std;
struct lista{
	char fecha[15];
	char hora[15];
	char lugar[20];
	char descripcion[50];
	
}actividad[10];
int main(){
	cout<<"Esta es nuestra lista de actividades."<<endl;
	for(int i=0;i<10;i++){
	cout<<"Ingrese la fecha de la actividad"<<endl;
	cin>>actividad[i].fecha;
	cout<<"Ahora, a que hora inicio?"<<endl;
	cin>>actividad[i].hora;
	cout<<"Cual fue el lugar?"<<endl;
	cin>>actividad[i].lugar;
	cout<<"Puede anexar una descripcion del evento (maximo 50 caracteres)"<<endl;
	cin>>actividad[i].descripcion;
	cout<<"Quiere a, ver la lista. b, continuar agregando actividades o c, salir"<<endl;
	char a;
	cin>>a;
	switch(a){
		case 'a': 	cout<<"fecha: "<<actividad[i].fecha<<endl;
					cout<<"hora: "<<actividad[i].hora<<endl;
					cout<<"lugar: "<<actividad[i].lugar<<endl;
					cout<<"descripcion: "<<actividad[i].descripcion<<endl;
					break;
		case 'b': break;
		case 'c': return 0;
	}
	}
}
