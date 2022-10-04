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
	int x[3];
	int y[3];	
};

Math::Math(){
	grados = 0;
	x[0] = 0;
	y[0] = 0;
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
	cout << "De momento jala 4" << endl;
}

