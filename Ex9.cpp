#include <iostream>

#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num, soma = 0, digito, num_original;
    
    cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
    cout << "Digite um numero inteiro: ";
    cin >> num;

    num_original = num;

    while (num != 0) {
        digito = num % 10;
        soma += pow(digito, 3);
        num /= 10;
    }

    if (soma == num_original) {
        cout << num_original << " é um numero de Armstrong.\n";
    } else {
        cout << num_original << " nao é um numero de Armstrong.\n";
    }

    
    
    
    
    
    
}
