#include<iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
 	
 	int num, i, resultado = 0;
 
 	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "Digite um número: ";
	cin >> num;
 
 	for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
    
	}
 
	 if (resultado == 0){
	 	cout << "O número: " << num << " é primo";
	 }else{
	 	cout << "O número: " << num << " não é primo";
	 }
    
 
}
