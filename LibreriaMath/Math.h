#include <iostream>
using namespace std;

class Math{
public:
	Math();
	void Sen();
	void Cos();
	void Tan();
	void Matriz();
	int grados;
private:
	int x;
	int y;
	int x2;
	int y2;
	int t;
};

Math::Math(){
	grados = 0;
	x = 0;
	y = 0;
	x2 = 0;
	y2 = 0;
	t = 0;
}

void Math::Sen(){
	cout << "introduzca el angulo a calcular" << endl;
	cin >> grados;
	long double temp;
	temp = ((4*grados*(180-grados)));
	long double resultado;
	resultado = temp / (40500 - (grados * (180 - grados)));
	cout << "El seno de: "<<grados<<" es: "<<resultado<< endl;
}

void Math::Cos() {
	cout << "introduzca el angulo a calcular" << endl;
	cin >> grados;
	cout << "De momento jala 2" << endl;
}

void Math::Tan() {
	cout << "introduzca el angulo a calcular" << endl;
	cin >> grados;
	cout << "De momento jala 3" << endl;
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
	}else {
		cout << "Introduzca los valores de la primera matriz: " << endl;
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				cout << "[" << i << "]" << "[" << j << "]" << endl;
				cin >> matriz[i][j][0];
			}
		}
		cout << "Introduzca los valores de la segunda matriz: " << endl;
		for (int i = 0; i < x2; i++) {
			for (int j = 0; j < y2; j++) {
				cout << "[" << i << "]" << "[" << j << "]" << endl;
				cin >> matriz[i][j][1];
			}
		}

		for (int i = 0; i <= y; i++) {
			for (int j = 0; j <= x2; j++) {
				t = t + (matriz[i][j][0] * matriz[i][j][1]);
				matriz[i][j][2] = t;
			}
			
			t = 0;
		}
		cout << "Valores de la matriz: " << endl;
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < x2; j++) {
				cout << "[" << i << "]" << "[" << j << "]= "<< matriz[i][j][2] << endl;
			}
		}

	}

}

