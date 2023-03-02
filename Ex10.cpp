#include<iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
 	
 	int n1, n2, n3;
 
 	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "Informe o primeiro número: ";
	cin >> n1;
	
	cout << "Informe o segundo número: ";
	cin >> n2;
	
	cout << "Informe o terceiro número: ";
	cin >> n3;
	
	if (n1>n2 && n1>n3 && n2>n3){
		cout << "A ordem crescente dos números é: " << n3 << " - " << n2 << " - " << n1 <<endl;
	}
	
	else if (n1>n2 && n1>n3 && n3>n2){
		cout << "A ordem crescente dos números é: " << n2 << " - " << n3 << " - " << n1 <<endl;
	}
	
	else if (n2>n1 && n2>n3 && n1>n3){
		cout << "A ordem crescente dos números é: " << n3 << " - " << n1 << " - " << n2 <<endl;
	}
	
	else if (n2>n1 && n2>n3 && n3>n1){
		cout << "A ordem crescente dos números é: " << n1 << " - " << n3 << " - " << n2 <<endl;
	}
	
	else if (n3>n2 && n3>n1 && n1>n2){
		cout << "A ordem crescente dos números é: " << n2 << " - " << n1 << " - " << n3 <<endl;
	}
	
	else if (n3>n2 && n3>n1 && n2>n1){
		cout << "A ordem crescente dos números é: " << n1 << " - " << n2 << " - " << n3 <<endl;
	}
}
