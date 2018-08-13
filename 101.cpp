#include <iostream>
using namespace std;
int sumar(int a,int b,int aux){
	if(b>0){
		aux=aux+a;
		sumar(a,b-1,aux);
	}
	else{
		return aux;
	}
}
int main(){
	cout<<"Que multiplicacion quiere hacer?"<<endl;
	int a,b,aux;
	cout<<"_x_";
	cin>>a>>b;
	cout<<sumar(a,b,aux);
}
