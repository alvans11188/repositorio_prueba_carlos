/*
Generador de N�meros Aleatorios: Crea un programa que genere y muestre una serie de n�meros 
aleatorios entre 0 y un n�mero m�ximo especificado por el usuario. El programa solicitar� al usuario 
la cantidad de n�meros aleatorios que desea generar y el valor m�ximo permitido. Utiliza la funci�n 
rand de la librer�a cstdlib para generar los n�meros aleatorios.
*/
/*Alex se la come*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int n, nm, i, na;
	
	cout << "Ingrese la cantidad de numero aleatorios que desea generar: ";
	cin >> n;
	cout << "Ingrese el numero maximo que desea generar: ";
	cin >> nm;
	srand(time(NULL));
	
	for (int i=1;i<=n;i++){
		
		na = rand() % nm + 1;
		cout << na << endl;
	}
	
	
	
	return 0;
}

