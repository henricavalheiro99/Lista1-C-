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
	
	cout << "Informe o n�mero de cigarros que voc� fuma por dia: ";
	cin >> c;
	
	tc = (c * 365) * i;
	
	d = tc / 144;
	
	cout << "O n�mero de dias que voc� perdeu �: " << d;
	
}
