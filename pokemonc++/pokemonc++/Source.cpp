#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

void clear() {
	system("clear");
}

void sleep(int a) {
	time_t t1, t2;
	t1 = time(NULL);
	t2 = time(NULL);
	while ((t2 - t1) * 1000 < a)
		t2 = time(NULL);
}

int aleatorio() {
	int numero;
	srand(time(NULL));
	numero = 1 + rand() % ((4 + 1) - 1);
	return numero;
}

int atino() {
	int numero;
	srand(time(NULL));
	numero = 1 + rand() % ((100 + 1) - 1);
	return numero;
}



int main() {

	clear();
	cout << " " << "\n";
	cout << "ooooooooo.            oooo                                                      "<<"\n";
	cout << "`888   `Y88.          `888                                                      "<<"\n";
	cout << " 888   .d88' .ooooo.   888  oooo   .ooooo.  ooo..oo. .oo.    .ooooo.  ooo. .oo. "<<"\n";
	cout << " 888ooo88P' d88' `88b  888 .8P'   d88' `88b `888PY88bPY88b  d88' `88b `888P'Y88b"<<"\n";
	cout << " 888        888   888  888888.    888ooo888  888  888  888  888   888  888   888"<<"\n";
	cout << " 888        888   888  888 `88b.  888    .o  888  888  888  888   888  888   888"<<"\n";
	cout << "o888o       `Y8bod8P' o888o o888o `Y8bod8P' o888  888o 888o `Y8bod8P' o888o o888"<<"\n";

	int menu;

	cout << "1) Iniciar"<< "\n";

	cin >> menu;

	if (menu == 1) {

		struct charmander {
			int vida;
			int ataque1;
			int ataque2;
			int ataque3;
			int ataque4;

			int precision;
			int velocidad;
		}charmander, pikachu;

		int opcionRed;
		int opcionBlue;
		int ataqueR;
		int ataqueA;

		cout<< " introduce el valor vida de charmander : "<< "\n";
		cin >> charmander.vida;
		cout<< " introduce el valor de vida de pikachu : "<< "\n";
		cin >> pikachu.vida;

		charmander.ataque1 = 12;
		charmander.ataque2 = 8;
		charmander.ataque3 = 10;
		charmander.ataque4 = 3;
		charmander.velocidad = 32;
		charmander.precision = 90;

		pikachu.ataque1 = 11;
		pikachu.ataque2 = 7;
		pikachu.ataque3 = 6;
		pikachu.ataque4 = 14;
		pikachu.velocidad = 35;
		pikachu.precision = 86;

		cout << "\ninicia\n" << "\n";

		int turno;

		if (charmander.velocidad > pikachu.velocidad) {
			turno = 0;
		}
		else {
			turno = 1;
		}
		int p;

		while (charmander.vida > 0 && pikachu.vida > 0) {
			sleep(1000);
			cout << "\nel turno es : " << turno << "\n";
			if (turno == 0) {
			menua:
				opcionRed = 0;
				cout << "que ataque usar?: " << "\n";
				cout << "1: Aq 1 " << "\n";
				cout << "2: Aq 2 " << "\n";
				cout << "3: Aq 3" << "\n";
				cout << "4: Aq 4" << "\n";
				cin	>> opcionRed;

				if (opcionRed == 1) { ataqueR = charmander.ataque1; }
				else if (opcionRed == 2) { ataqueR = charmander.ataque2; }
				else if (opcionRed == 3) { ataqueR = charmander.ataque3; }
				else if (opcionRed == 4) { ataqueR = charmander.ataque4; }
				else {
					cout << "ninguno seleccionado " << "\n";
					goto menua;
				}
				p = (atino());

				sleep(1000);
				{

				};
				if (p < charmander.precision) {
					cout << "pikachu tenia " << pikachu.vida << " de vida pero perdio"<< ataqueR << "\n";
					pikachu.vida = (pikachu.vida - ataqueR);
					sleep(1000);
					cout << "pikachu ahora tiene " << pikachu.vida << "\n";
				}
				else { cout << "el ataque fallo " << "\n"; }
				turno = 1;
			}
			else {

				sleep(1000);
				int opcionAzul = (aleatorio());

				if (opcionAzul == 1) { ataqueA = pikachu.ataque1; }
				else if (opcionAzul == 2) { ataqueA = pikachu.ataque2; }
				else if (opcionAzul == 3) { ataqueA = pikachu.ataque3; }
				else if (opcionAzul == 4) { ataqueA = pikachu.ataque4; }
				else {

					cout << "el ataque fallo\n" << "\n";
				}

				p = (atino());

				if (p < pikachu.precision) {
					cout << "charmander tenia" << charmander.vida << "de vida pero perdio \n" << ataqueA << "\n";
					sleep(1000);
					charmander.vida = (charmander.vida - ataqueA);
					cout << "charmander ahora tiene " << charmander.vida << "\n";
				}
				else { cout << "el ataque fallo" << "\n"; }

				turno = 0;
			}
		}
		cout << "\n";
		sleep(1000);
		if (charmander.vida > 0) {
			cout << "charmander gano" << "\n";
		}
		else {
			cout << "pikachu gano" << "\n";
		}
	}

	return 0;
}