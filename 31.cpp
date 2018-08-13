#include <iostream>
using namespace std;
int main(){
	cout<<"digite el valor de la factura"<<endl;
	int factura, descuento;
	cin>>factura;
	if(factura>20000){
		descuento=(factura*20)/100;
		cout<<"El descuento es de "<<descuento<<endl;
	}
	else{
		cout<<"No hay descuento"<<endl;
	}
	cout<<"El valor a pagar es de "<<factura-descuento<<endl;
}
