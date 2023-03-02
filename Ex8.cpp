#include<iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
 	
 	int i, c, tc;
 	
 	float d;
 	
 	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "Informe a sua idade: ";
	cin >> i;
	
	cout << "Informe o número de cigarros que você fuma por dia: ";
	cin >> c;
	
	tc = (c * 365) * i;
	
	d = tc / 144;
	
	cout << "O número de dias que você perdeu é: " << d;
	
}
