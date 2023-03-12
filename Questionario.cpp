#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
void nameM()
{
	cout << "Digite o seu nome: ";
}
void ageM()
{
	cout << "Digite sua idade: ";
}
int q1(string diff)
{
	string easy = "easy", medium = "medium", hard = "hard";
	int resQ1;
	cout << "Dada a equacao x = 2 + 6 . 6, qual o valor de x?\nResposta:";
	cin >> resQ1;
	if(resQ1 == 38){
		cout << "Voce acertou! Proxima questao...\n";
		Sleep (800);
		return 1;
	}
	else if(resQ1 != 38 && diff == easy){
		cout << "Voce errou, tente novamente: ";
		cin >> resQ1;
		if(resQ1 == 38){
			cout << "Voce acertou! Proxima questao...\n";
			Sleep (800);
			return 1;
		}
		cout << "Voce errou. Proxima questao";
		return 0;
	}
	else if(resQ1 != 38 && diff == medium){
		cout << "Voce errou. Proxima questao";
		return 0;
	}
	else if(resQ1 != 38 && diff == hard){
		return 0;	
	}
}
int q2(string diff)
{
	string easy = "easy", medium = "medium", hard = "hard";
	int resQ2;
	cout << "Resolva: 4x = 44: ";
	if(resQ2 == 11){
		cout << "Voce acertou! Proxima questao...\n";
		Sleep (800);
		return 1;
	}
	else if(resQ2 != 11 && diff == easy){
		cout << "Voce errou, tente novamente: ";
		cin >> resQ2;
		if(resQ2 == 11){
			cout << "Voce acertou! Proxima questao...\n";
			Sleep (800);
			return 1;
		}
		cout << "Voce errou. Proxima questao";
		return 0;
	}
	else if(resQ2 != 11 && diff == medium){
		cout << "Voce errou. Proxima questao";
		return 0;
	}
	else if(resQ2 != 11 && diff == hard){
		return 0;	
	}
}
void q3(int resQ2)
{
	string easy = "easy", medium = "medium", hard = "hard";
	int resQ3;
	cout << "Joao quer dividir 25 laranajas com 5 amigos. Quantas laranjas cada amigo recebera, sabendo que Joao nao ficara com nenhuma fruta?\nResposta";
	cin >> resQ3;
	if(resQ3 == 5){
		cout << "Voce acertou! Proxima questao...\n";
		Sleep (800);
		return 1;
	}
	else if(resQ3 != 5 && diff == easy){
		cout << "Voce errou, tente novamente: ";
		cin >> resQ3;
		if(resQ3 == 5){
			cout << "Voce acertou! Proxima questao...\n";
			Sleep (800);
			return 1;
		}
		cout << "Voce errou. Proxima questao";
		return 0;
	}
	else if(resQ3 != 5 && diff == medium){
		cout << "Voce errou. Proxima questao";
		return 0;
	}
	else if(resQ3 != 5 && diff == hard){
		return 0;	
	}
	
	}
}
void q4(int resQ3)
{
	if (resQ3 == 5)
	{
		cout << "Voce acertou! Proxima questao...\n";
		Sleep(800);
		cout << "Sabendo que um quadrado tem seus lados medindo 2 metros, qual eh a area do mesmo?";
	}
}
void q5(int resQ4)
{
	if (resQ4 == 4)
	{
		cout << "Voce acertou! Ultima questao...\n";
		Sleep(800);
		cout << "Pedro precisa juntar 4000 reais para comprar um computador novo. Em quantos meses ele consiguira esse dinheiro ganhando uma mesada de 200 reais?\nResposta:";
	}
}

boolean instructionDificult(string diff, string name){
	system("CLS");
	string easy = "easy", medium = "medium", hard = "hard";
	if(diff == easy){
		cout << "Voce escolheu a dificuldade 'facil'.\nINSTRUCOES: Ola " << name << " , nesta dificuldade, voce tem duas chances para acertar a questao. Boa sorte!";
		return true;
	}else if(diff == medium){
		cout << "Voce escolheu a dificuldade 'media'.\nINSTRUCOES: Ola " << name << " , nesta dificuldade, voce tem apenas uma chance para acertar a questao. Boa sorte!";
		return true;
	}else if(diff == hard){
		cout << "Voce escolheu a dificuldade 'dificil'.\nINSTRUCOES: Ola " << name << " , nesta dificuldade, alem de ter apenas uma chance para acertar a questao, caso erre, reiniciara a prova inteira. Boa sorte!";
		return true;
	}else {
		cout << "Voce escolheu uma opcao invalida\n"; 
		return false;
	}
}

int main()
{
	int age, resQ1, resQ2, resQ3, resQ4, resQ5;
	string action = "confirmar", back = "voltar", confirm, diff, easy = "easy", medium = "medium", hard = "hard", name;
	// INICIO >> Bloco de dados pessoais
	nameM();
	getline(cin, name);
	ageM();
	cin >> age;
	cout << "Para continuar a prova, confirme seus dados: " << name << ", " << age << " anos\nDigite 'confirmar' se deseja continuar a prova com esses dados\nDigite 'voltar' caso deseja reescrever seus dados\n";
	cin >> confirm;
	do{

		if (confirm == back){
			system("CLS");
			nameM();
			while (getline(cin, name))
				if (name != "\n")
				{
					break;
				}
			getline(cin, name);
			ageM();
			cin >> age;
			cout << "Para continuar a prova, confirme seus dados: " << name << ", " << age << " anos\nDigite 'confirmar' se deseja continuar a prova com esses dados\nDigite 'voltar' caso deseja reescrever seus dados\n";
			cin >> confirm;
		}
		do
		{
			if (confirm != back && confirm != action)
			{
				cout << "Opcao invalida, digite novamente: ";
				cin >> confirm;
			}
			if (action == confirm)
			{
				break;
			}

		} while (back == confirm && action == confirm);
		// FIM >> Bloco de dados pessoais
		// Pega de Dificuldalde
		if (action == confirm)
		{

			cout << "Agora digite a dificuldade:\nEasy\nMedium\nHard\n";
			cin >> diff;

			boolean isDiff = true;
			while (isDiff){
				if(instructionDificult(diff, name)){
					isDiff =false;
				}else {
					cin >> diff;
				}
			}
			// INICIO >> QUESTOES DA PROVA
			int results = 0;
			results += q1(diff); 
			results += q2(diff);
			cout << "total de seus pontos sao " << results;
				/*
				cin >> resQ1;
				if (resQ1 != 38)
				{
					cout << "Resposta errada, voce tem mais uma chance:\n";
					cin >> resQ1;
					if (resQ1 != 38)
					{
						cout << "Resposta errada novamente... Proxima questao:\n";
						q2(resQ1);
						cin >> resQ2;
						if (resQ2 != 11)
						{
							cout << "Resposta errada, voce tem mais uma chance: ";
							cin >> resQ2;
							if (resQ2 != 11)
							{
								cout << "Resposta errada novamente... Proxima questao:\n";
								q3(resQ2);
							}
						}
					}
				}

				q3(resQ2);
				cin >> resQ3;
				if (resQ3 != 5)
				{
					cout << "Resposta errada, voce tem mais uma chance: ";
					cin >> resQ3;
					if (resQ3 != 5)
					{
						cout << "Resposta errada novamente... Proxima questao:\n";
						q4(resQ3);
					}
				}
				q4(resQ3);
				cin >> resQ4;
				if (resQ4 != 4)
				{
					cout << "Resposta errada, voce tem mais uma chance:";
					cin >> resQ3;
					if (resQ4 != 4)
					{
						cout << "Resposta errada novamente... Ultima questao:\n";
						q5(resQ4);
					}
				}
			}
			/*
			if (diff == medium)
			{
				system("CLS");
				cout << "Voce escolheu a dificuldade 'media'.\nINSTRUCOES: Ola " << name << " , nesta dificuldade, voce tem apenas uma chance para acertar a questao. Boa sorte!";
			}

			if (diff == hard)
			{
				system("CLS");
				cout << "Voce escolheu a dificuldade 'dificil'.\nINSTRUCOES: Ola " << name << " , nesta dificuldade, alem de ter apenas uma chance para acertar a questao, caso erre, reiniciara a prova inteira. Boa sorte!";
			}
			*/		
		}
	} while (action != confirm);

	return 0;
}