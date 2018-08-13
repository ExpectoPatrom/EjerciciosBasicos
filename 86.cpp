#include <iostream>
#include <string.h>
using namespace std;
bool palindroma(string cad){
	int i=0, j=cad.size()-1;
	while(i<j){
		if(cad[i]!=cad[j]) return false;
		i++;
		j--;
	}
	return true;
}
int main(){
	cout<<"Ingrese una frase para determinar si es palindroma"<<endl;
	char cadena[50];
	cin>>cadena;
	//cout<<cadena;
	int i=0;
	int largo=strlen(cadena);
	/**while(cadena[i]!='\0'){
		if(cadena[i]==' '){
			for(int a=i;a<largo;a++){
				cadena[a]=cadena[a++];
			}
			largo--;
		}
		i++;
	}*/
	if(palindroma(cadena) == true){
		cout<<"Es palindroma"<<endl;	
	} 
	else{
		cout<<"No es palindroma"<<endl;	
	}
}
