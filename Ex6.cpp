#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num, soma = 0;
    
    cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	
    cout << "Digite um numero inteiro de tres digitos: ";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "Numero invalido\n";
   
    }

    soma += num % 10; // adiciona o último dígito à soma
    num /= 10; // remove o último dígito do número

    soma += num % 10; // adiciona o segundo dígito à soma
    num /= 10; // remove o segundo dígito do número

    soma += num; // adiciona o primeiro dígito à soma

    cout << "A soma dos digitos do numero eh: " << soma << endl;

}
