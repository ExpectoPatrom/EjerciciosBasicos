#include <iostream>
using namespace std;
int main(){
	int minutos, segundos;
	cout<<"Digite una cantidad de segundos para convertirla en minutos"<<endl;
	cin>>segundos;
	while(segundos>=60){
		segundos=segundos-60;
		minutos++;
	}
	cout<<"Hay "<<minutos<<" minutos y "<<segundos <<" segundos"<<endl;
}
