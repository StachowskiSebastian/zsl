#include <iostream>

using namespace std;

class Rentagle{
	public:
		int bokX;
		int bokY;
			
		void rentaglePole();
		void rentagleObwod();
};

void Rentagle::rentaglePole(){
	cout << "Pole prostok¹ta wynosi: " << bokX*bokY;
}

void Rentagle::rentagleObwod(){
	cout << "\nObówd prostokata wynosi: " << (bokX*2) + (bokY*2);
};

int main(int argc, char** argv){
	setlocale(LC_CTYPE,"polish");
	
	Rentagle wartosc;
	wartosc.bokX=5;
	wartosc.bokY=2;
	
	wartosc.rentaglePole();
	wartosc.rentagleObwod();
	return 0;
};

