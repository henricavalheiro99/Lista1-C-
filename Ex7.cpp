#include<iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
 	
 	float sb, sa, d;
 	
 	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "Insira seu sal�rio: ";
	cin >> sb;
	
	
	if (sb<=1500){
		sa = sb + (sb / 10);
		cout << "O sal�rio aumentado �: " << sa <<endl;
		d = sa - sb;
		cout << "A diferen�a � de: " << d;
	} else{
		sa = sb + (sb / 20);
		cout << "O sal�rio aumentado �: " << sa <<endl;
		d = sa - sb;
		cout << "A diferen�a � de: " << d;
	}
	
}
