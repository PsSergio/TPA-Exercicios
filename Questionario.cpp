#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
void nameM (){
	cout << "Digite o seu nomee: ";
}
void ageM (){
	cout << "Digite sua idade: ";
}

int main ()
{	
	int age;
	string action="confirmar", action2="voltar", confirm, diff, easy="easy", medium="medium", hard="hard", name;
	nameM ();
	getline(cin, name);
	ageM ();
	cin >> age;
	cout << "Para continuar a prova, confirme seus dados: " << name << ", " << age << " anos\nDigite 'confirmar' se deseja continuar a prova com esses dados\nDigite 'voltar' caso deseja reescrever seus dados\n";
	cin >> confirm;
	do{
	
	if(action2 == confirm){
		system ("CLS");
		nameM ();
		while(getline(cin, name))
			if(name != "\n"){
				break;
				
			}
		getline(cin, name);
		ageM ();
		cin >> age;
		cout << "Para continuar a prova, confirme seus dados: " << name << ", " << age << " anos\nDigite 'confirmar' se deseja continuar a prova com esses dados\nDigite 'voltar' caso deseja reescrever seus dados\n";
		cin >> confirm;	}
		
	do{
	if(action2 != confirm, action !=confirm){
	cout << "Opcao invalida, digite novamente: ";
	cin >> confirm;	}
		if(action == confirm){
			break;
		}
		
	}while(action2 == confirm, action == confirm);	
		
	if(action == confirm){
			
			cout << "Agora digite a dificuldade:\nEasy\nMedium\nHard\n";
			cin >> diff;
			
			if(diff == easy){
				system ("CLS");
				cout << "Voce escolheu a dificuldade 'facil'.\nINSTRUCOES: Ola " << name << " , nesta dificuldade, voce tem duas chances para acertar a questao. Boa sorte!";
				
			}
			
			if(diff == medium){
				system ("CLS");
				cout << "Voce escolheu a dificuldade 'media'.\nINSTRUCOES: Ola " << name << " , nesta dificuldade, voce tem apenas uma chance para acertar a questao. Boa sorte!";
				
			}
		
			if(diff == hard){
				system ("CLS");
				cout << "Voce escolheu a dificuldade 'dificil'.\nINSTRUCOES: Ola " << name << " , nesta dificuldade, alem de ter apenas uma chance para acertar a questao, caso erre, reiniciara a prova inteira. Boa sorte!";
			}	
			}
	
		
	}while(action != confirm);
	
	return 0;
}
