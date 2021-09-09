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
	cout << "\n" << "Imiê i Nazwisko: " << name << " " << surname << "\nNarodowoœæ: " << nationality;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Worker pracownik;
	pracownik.name="Krystyna";
	pracownik.surname="Nowak";
	cout << "Narodowoœæ: " << pracownik.nationality;
	pracownik.nationality="USA";
	cout << "\nNarodowoœæ: " << pracownik.nationality;
	pracownik.showName();
	pracownik.showSurname();
	pracownik.showAllData();
	return 0; 
}
