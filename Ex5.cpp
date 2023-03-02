#include<iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
 	
 	float n1, n2, n3, media;
 
 	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "Informe a nota da prova 1: ";
	cin >> n1;
	
	cout << "Informe a nota da prova 2: ";
	cin >> n2;
	
	cout << "Informe a nota da prova 3: ";
	cin >> n3;
	
	media = (n1 + n2 + n3) / 3;
	
	if (media>=7){
		cout << media << " aprovado";
	} else if (media<7 && media>=5){
		cout << media <<" recuperação";
	} else {
		cout << media <<" reprovado";
	}
	
	
}
