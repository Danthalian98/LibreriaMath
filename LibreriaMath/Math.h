#include <iostream>
using namespace std;

class Math{
public:
	Math();
	void Sen();
	void Cos();
	void Tan();
	void Matriz();
	double grados;
	double g;
private:
	long double seno; 
	long double coseno;
	long double temp;
	long double tang;
	int x;	int y;
	int x2;	int y2;
};

Math::Math(){
	seno = 0; coseno = 0; tang = 0; temp = 0;
	grados = 0; g = 0;
	x = 0;	y = 0;	x2 = 0;	y2 = 0;
}

void Math::Sen(){
	cout << "introduzca el angulo a calcular" << endl;
	cin >> grados;	
	temp = ((4*grados*(180-grados)));	
	seno = temp / (40500 - (grados * (180 - grados)));
	cout << "El Seno de: "<<grados<<" es: "<<seno<< endl;
}

void Math::Cos() {
	cout << "introduzca el angulo a calcular" << endl;
	cin >> g;
	grados = 90 - g;
	temp = ((4 * grados * (180 - grados)));
	coseno = temp / (40500 - (grados * (180 - grados)));
	cout << "El Coseno de: " << g << " es: " << coseno << endl;
}

void Math::Tan() {
	cout << "introduzca el angulo a calcular" << endl;
	cin >> grados;
	Sen();	Cos();
	tang = seno / coseno;
	cout << "La tangente de: " << grados << " es: " << tang << endl;
}

void Math::Matriz() {
	cout << "Introduzca el tamano de la primera matriz en x:" << endl;
	cin >> x;
	cout << "Introduzca el tamano de la primera matriz en y:" << endl;
	cin >> y;
	cout << "Introduzca el tamano de la segunda matriz en x:" << endl;
	cin >> x2;
	cout << "Introduzca el tamano de la segunda matriz en y:" << endl;
	cin >> y2;
	cout << endl;

	int matriz[5][5][3];

	if (x >= 5 || y >= 5) {
		cout << "El tamano maximo es de 5" << endl;
	}else if(y==x2){
		cout << "Introduzca los valores de la primera matriz: " << endl;
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				cout << "M1 [" << i << "]" << "[" << j << "]: ";
				cin >> matriz[i][j][0];
			}
		}
		cout << "Introduzca los valores de la segunda matriz: " << endl;
		for (int i = 0; i < x2; i++) {
			for (int j = 0; j < y2; j++) {
				cout << "M2 [" << i << "]" << "[" << j << "]: ";
				cin >> matriz[i][j][1];
			}
		}

		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y2; j++) {
				matriz[i][j][2] = 0;
				for(int k = 0; k< y; k++){
					matriz[i][j][2] += matriz[i][k][0] * matriz[k][j][1];
				}
			}
		}
		cout << "Valores de la matriz: " << endl;
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y2; j++) {
				cout << "[" << i << "]" << "[" << j << "]= " << matriz[i][j][2] << " ";
			}
			cout << endl;
		}

	}else {
		cout << "El largo de las columnas de la M1 y las filas del M2 deben ser iguales" << endl;
	}


}

