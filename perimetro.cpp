#include <iostream>
using namespace std;
float l, c, lado, raio;
int z, oo, x, k, a;

void oq (){
	z = 0;
	oo = 0;
	do {
		cout << "retangulo -> 1" << '\n';
		cout << "quadrado -> 2" << '\n';
		cout << "circunferencia -> 3" << '\n';
		cout << "insira o numero da forma geometrica desejada a calcular o perimetro: ";
		cin >> oo;
		if (oo == 1) {
			z = oo;
		}
		else if (oo == 2) {
			z = oo;
		}
		else if (oo == 3) {
			z = oo;
		}
		else {
			cout << "o numero introduzido nao e valido!" << '\n';
			z = 0;
		}
		switch (oo){
		case 1: cout << "voce escolheu o retangulo" << '\n';
			break;
		case 2: cout << "voce escolheu o quadrado" << '\n';
			break;
		case 3: cout << "voce escolheu a circunferencia" << '\n';
			break;
		default: cout << "voce nao fez uma escolha valida" << '\n';
		}
	} while (z == 0);
	return;
}

void circunferencia(){
	raio = 0;
	a = 0;
	cout << "vamos calcular o perimetro de uma circunferencia" << '\n';
	do {
		cout << "introduza o raio: ";
		cin >> raio;
		if (raio != 0) {
			a++;
		}
		if (a == 1) {
			cout << "o perimetro da sua circunferencia e: " << 2 * 3.14 * raio << '\n';
		}
	} while (raio == 0);
	return;
}

void quadrado() {
	lado = 0;
	k = 0;
	cout << "vamos calcular o perimetro de um quadrado" << '\n';
	do {
		cout << "introduza o lado do quadrado: ";
		cin >> lado;
		if (lado != 0) {
			k++;
		}
		if (k == 1) {
			cout << "o perimetro do seu quadrado e: " << lado * 4 << '\n';
		}
	} while (lado == 0);
}

void retangulo(){
	l = 0;
	c = 0;
	x = 0;
	cout << "vamos calcular o perimetro de um retangulo" << '\n';
		do {
			cout << "insira a largura: ";
			cin >> l;
			if (l != 0) {
				x++;
			}
		} while (l == 0);
		do {
			cout << "insira o comprimento: ";
			cin >> c;
			if (c != 0) {
				x++;
			}
		} while (c == 0);
		if (c != 0 && l != 0) {
		}
	if (x == 2) {
		cout << "o perimetro do seu retangulo e: " << c * 2 + l * 2 << '\n';
	}
	return;
}

int main() {
	oq();
	switch (oo) {
	case 1: retangulo();
		break;
	case 2: quadrado();
		break;
	case 3: circunferencia();
		break;
	default: cout << "nao foi selecionada uma figura valida!";
	}
}