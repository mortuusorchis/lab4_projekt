// Zadanie 0
/*#include <iostream>
using namespace std;
int dodawanie(int a, int b); //funkcja (zwracajaca wynik typu int)
void wyswietlanie(int a, int b); //funkcja bedaca procedura :)

int zmiennaGlobalna = 10;

int main() { //kod 04_05
	int a = 45, b = 25;
	int suma = dodawanie(a, b);
	cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
	a += 4;
	wyswietlanie(a, b);
	cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
	cout << "Wartosci a oraz b: " << a << " i " << b << endl;
	return 0;
}

int dodawanie(int c, int b) {
	b = c + b;
	return b;
}

void wyswietlanie(int a, int b) {
	cout << "Wynik procedury / funkcji z void: " << a + b << endl;
	zmiennaGlobalna = 20;
	a = 111;
	b = 222;
} 
// na ekranie wyświetli się suma a i b z odpowiednim komentarzem
// potem wyświetli się "wynik procedury / z funkcji void z odpowiednimi wartościami
// kolejno wyświetli się wartość zmiennej globalnej z odpowiednim komentarzem
*/
// zadanie 1

#include <iostream>
#include <string>
using namespace std;

void czesc(string imie); 

void tabliczka();
void liczby();

int main()
 {/*
	string imie;
		cout << "Podaj imie: ";
	cin >> imie;
	czesc(imie);
}
void czesc(string imie); {
cout << "czesc" << imie << endl;
}
*/

// zadanie 2
/*  tabliczka();
}
void tabliczka() {
	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10; b++) {
			cout << a * b << "\t";

		}
		cout << endl;
	}
}
// zadanie 3 
