#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	int matriz[4][4];
	int aux;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			matriz[i][j]=rand()%10;
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		if(i<j){
			aux=aux+matriz[i][j];
		}
		}
		cout<<endl;
	}
	cout<<aux<<endl;
}
