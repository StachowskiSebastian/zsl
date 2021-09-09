#include <iostream>

using namespace std;

class Worker{
	public:
	string name;
	string surname;
	string nationality="POLSKA";
	
	//definicja metody showName
	void showName(){
		cout << "\n"<< name;
		
	};
	
	//deklaracja (prototyp) metody showSurname
	void showSurname();
	
	//deklaracja (prototyp) metody showAllData
	void showAllData();
};

//definicja metody showSurname
void Worker::showSurname(){
	cout << "\ntest metody";
};

//deklaracja metody showAllData
void Worker::showAllData(){
	cout << "\n" << "Imi� i Nazwisko: " << name << " " << surname << "\nNarodowo��: " << nationality;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Worker pracownik;
	pracownik.name="Krystyna";
	pracownik.surname="Nowak";
	cout << "Narodowo��: " << pracownik.nationality;
	pracownik.nationality="USA";
	cout << "\nNarodowo��: " << pracownik.nationality;
	pracownik.showName();
	pracownik.showSurname();
	pracownik.showAllData();
	return 0; 
}
