#include <iostream>
#include <locale>

using namespace std;

int main() {
	locale::global(locale("pt_BR.UTF-8"));
	//1 – Escreva um programa que mostre os números de um a dez
	/*int numero = 1;
	while (numero <= 10) {
		cout << numero;
		numero += 1;
	}*/

	//2 – Peça para o usuário informar um número e mostre a tabuada desse valor
	/*int tabuada;
	cout << "Informe um numero: ";
	cin >> tabuada;
	for (int j = 1; j <= 10; j++) {
		int resultado = tabuada * j;
		cout << resultado << "\n";
	}*/

	/*3 – Faça um programa que mostre os números de 0 a 50,
	mostrando - os de 5 em 5 (ex: 0, 5, 10, 15...)*/
	/*int numero = 0;
	while (numero <= 50) {
		cout << numero << "\n";
		numero += 5;
	}*/

	/*4 – Escreva um programa que lê o número digitado pelo
		usuário cinco vezes e mostre
		- Se o número for maior que 100, escreva “NÚMERO
		ESPECIAL”
		- Senão, escreva “NÚMERO COMUM”*/

	//int vezes = 0;
	//int numero;
	//while (vezes <= 5) {
	//	vezes += 1;
	//	cout << "Informe um número: ";
	//	cin >> numero;

	//	if (numero > 100) {
	//		cout << "Número especial" << "\n";
	//	}

	//	else {
	//		cout << "Número comum" << "\n";
	//	}

	/*5 – Mostre a sequência de números de 1 a 31 pulando de 2
		em 2 (ex: 1, 3, 5, 7...)*/

	/*int numero = 1;
	while (numero <= 31) {
		cout << numero << "\n";
		numero += 2;

	}*/

	/*6 – Faça um programa que leia cinco números e mostre :
	-Se o número for maior que zero, escreva “NÚMERO
		POSITIVO”
		- Senão, se o número for menor que zero, escreva “NÚMERO
		NEGATIVO”
		- Senão, escreva “O NÚMERO É ZERO”*/

		int vezes = 0;
		int numero;
		while (vezes <= 5) {
			vezes += 1;
			cout << "Informe um número: ";
			cin >> numero;

			if (numero > 0) {
				cout << "Número positivo" << "\n";
			}

			else if (numero < 0) {
				cout << "Número negativo" << "\n";
			}

			else {
				cout << "O número é igual a zero" << "\n";
			}
		}
}