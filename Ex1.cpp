#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int op,n1, n2, result;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "Digite um n�mero de sua escolha: ";
	cin >> n1;
	
	
	cout << "Digite um segundo n�mero de sua escolha: ";
	cin >> n2;
	
	system ("cls");
	
	cout << "Escolha uma opera��o matem�tica!!!" << endl;
	cout << "Digite 1 para somar\n";
	cout << "Digite 2 para subtrair\n";
	cout << "Digite 3 para multiplicar\n";
	cout << "Digite 4 para dividir\n";
	cout << "Fa�a sua escolha: ";
	cin >> op;
	
	if (op == 1){
		result = n1 + n2;
		cout << "O resultado da soma �: " << result;
	}
	
	else if (op == 2){
		result = n1 - n2;
		cout << "O resultado da subtra��o �: " << result;
	}
	
	else if (op == 3){
		result = n1 * n2;
		cout << "O resultado da multiplica��o �: " << result;
	}
	
	else if (op == 4){
		result = n1 / n2;
		cout << "O resultado da divis�o �: " << result;
	} else {
		cout << "Opera��o inv�lida animal";
	}
}
