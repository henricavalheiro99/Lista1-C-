#include<iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
 	
 	int i;
 	string n;
 
 	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "Insira seu nome: ";
	cin >> n;
	
	cout << "Insira sua idade: ";
	cin >> i;
		
	if (i<18){
		cout << n << ", voc� � menor de idade";
	}
	if (i>=18 && i<65) {
		cout << n << ", voc� � adulto";
	}
	
	if (i>65){
		cout << n <<", voc� � idoso";
	}
	
}
