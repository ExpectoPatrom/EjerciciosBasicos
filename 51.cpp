#include <iostream>
using namespace std;
int main(){
	long aux;
	for(int i=0; i<100;i++){
		aux=i*i+aux;
	}
	cout<<aux;
}
