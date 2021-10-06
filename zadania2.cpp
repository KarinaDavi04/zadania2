#include <iostream>
using namespace std;
#include <fstream>
fstream MyFile;

	
MyFile.open("uczen.txt"); 
MyFile <<ustawImie<<ustawNazwisko<<ustawKlasa<<ustawRokUr;; 
MyFile.close();

class Uczen {
public:

string imie;
string nazwisko;
string klasa;
string rok_ur;

void ustawImie(string);
void ustawNazwisko(string);
void ustawKlasa(string);
void ustawRokUr(string);

void wyswietlDane(){
cout<<imie<<" "<<nazwisko<<" "<<klasa<<" "<<rok_ur<<" \n";
}
};

void Uczen::ustawImie(string pImie){
	imie = pImie;
}
void Uczen::ustawNazwisko(string pNazwisko){
	nazwisko = pNazwisko;
}
void Uczen::ustawKlasa(string pKlasa){
	klasa = pKlasa;
}
void Uczen::ustawRokUr(string pRokUr){
	rok_ur = pRokUr;
}


int main() {

Uczen uczen_a;
uczen_a.ustawImie("Jan");
uczen_a.ustawNazwisko("Kowalsi");
uczen_a.ustawKlasa("3C");
uczen_a.ustawRokUr("2004");

uczen_a.wyswietlDane();

Uczen uczen_b;
uczen_b.ustawImie("Adam");
uczen_b.ustawNazwisko("Nowak");
uczen_b.ustawKlasa("3G");
uczen_b.ustawRokUr("2003");

uczen_b.wyswietlDane();
	
return 0;
}
