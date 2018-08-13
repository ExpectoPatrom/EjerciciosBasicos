#include <iostream>
using namespace std;
int main(){
	int a,aux;
	for(int i=0;i<10;i++){
		cin>>a;
		if(a<0){
			aux=a+aux;
		}
	}
	cout<<aux;
}
