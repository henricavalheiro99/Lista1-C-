#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int op,n1, n2, result;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "Digite um número de sua escolha: ";
	cin >> n1;
	
	
	cout << "Digite um segundo número de sua escolha: ";
	cin >> n2;
	
	system ("cls");
	
	cout << "Escolha uma operação matemática!!!" << endl;
	cout << "Digite 1 para somar\n";
	cout << "Digite 2 para subtrair\n";
	cout << "Digite 3 para multiplicar\n";
	cout << "Digite 4 para dividir\n";
	cout << "Faça sua escolha: ";
	cin >> op;
	
	if (op == 1){
		result = n1 + n2;
		cout << "O resultado da soma é: " << result;
	}
	
	else if (op == 2){
		result = n1 - n2;
		cout << "O resultado da subtração é: " << result;
	}
	
	else if (op == 3){
		result = n1 * n2;
		cout << "O resultado da multiplicação é: " << result;
	}
	
	else if (op == 4){
		result = n1 / n2;
		cout << "O resultado da divisão é: " << result;
	} else {
		cout << "Operação inválida animal";
	}
}
