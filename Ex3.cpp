#include<iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
 	
 	int num, i, resultado = 0;
 
 	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "Digite um n�mero: ";
	cin >> num;
 
 	for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
    
	}
 
	 if (resultado == 0){
	 	cout << "O n�mero: " << num << " � primo";
	 }else{
	 	cout << "O n�mero: " << num << " n�o � primo";
	 }
    
 
}
