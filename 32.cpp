#include <iostream>
using namespace std;
int main(){
	cout<<"Ingrese las horas, minutos y segundos"<<endl;
	int h,m,s;
	cin>>h>>m>>s;
	s++;
	if(s==60){
		s=0;
		m++;
		if(m==60){
			m=0;
			h++;
		}
	}
	cout<<h<<":"<<m<<":"<<s<<endl;
}
