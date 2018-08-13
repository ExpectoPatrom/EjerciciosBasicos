#include <iostream>
using namespace std;
int main(){
	int x1,y1,x2,y2,a,b;
	cout<<"Ingrese las coordenadas del rectangulo (x1,y1,x2,y2)"<<endl;
	cin>>x1>>y1>>x2>>y2;
	if(x2>x1){
		a=x2-x1;
	}
	else{
		a=x1-x2;
	}
	if(y2>y1){
		b=y2-y1;
	}
	else{
		b=y1-y2;
	}
	cout<<"El area es de "<<a*b<<endl;
}
