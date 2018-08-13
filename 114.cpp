#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
using namespace std;
int main(){
	int h1,s1,m1,h2,s2,m2;	
	cout<<"Cuanto quiere cronometrar?"<<endl;
	cout<<"horas ";
	cin>>h1;
	cout<<"minutos ";
	cin>>m1;
	cout<<"segundos ";
	cin>>s1;
	cout<<endl;
	while(h1>=h2 && m1>=m2 && s1>=s2){
		if(s2==60){
			s2=0;
			m2++;
			if(m2==60){
				m2=0;
				h2++;
			}
		}
	system("cls");
	cout<<h2<<":"<<m2<<":"<<s2<<"."<<endl;
	Sleep(1000);
	s2++;
	}
	cout<<"Cumplido"<<endl;
}
