#include<iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
 	
 	float sb, sa, d;
 	
 	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "Insira seu salário: ";
	cin >> sb;
	
	
	if (sb<=1500){
		sa = sb + (sb / 10);
		cout << "O salário aumentado é: " << sa <<endl;
		d = sa - sb;
		cout << "A diferença é de: " << d;
	} else{
		sa = sb + (sb / 20);
		cout << "O salário aumentado é: " << sa <<endl;
		d = sa - sb;
		cout << "A diferença é de: " << d;
	}
	
}
