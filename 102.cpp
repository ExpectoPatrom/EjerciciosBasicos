#include <iostream>
using namespace std;
int sumar(int n,int aux){
	if(0<n){
		aux=aux+n;
		sumar(n-1,aux);
	}
	else{
		return aux;
	}
}
int main(){
	cout<<"Hasta que numero quiere sumar?"<<endl;
	int n=0;
	int aux;
	cin>>n;
	cout<<sumar(n,aux);
}
