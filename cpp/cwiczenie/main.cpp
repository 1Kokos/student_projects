#include <iostream>

using namespace std;
double obliczZuzyciePaliwa(double odleglosc, double srednieSpalanie) {
return odleglosc * (srednieSpalanie / 100.0);
}
double obliczSrednieSpalanie(double odleglosc, double zuzyciePaliwa) {
return (zuzyciePaliwa / odleglosc) * 100.0;
}
double obliczKosztZrzutki (double odlegloc , int iloscOsob, double cenaPaliwa, double zuzyciePaliwa) {
double kosztPaliwa = zuzyciePaliwa * cenaPaliwa;
return kosztPaliwa / iloscOsob;
}

int main(){
double odleglosc, cenaPaliwa;
int iloscOsob;

cout << "podaj odleglosc podrozy (w km): ";
cin >> odleglosc;
cout <<  "podaj ilosc osob: ";
cin >> iloscOsob;
cout << "podaj cene paliwa (za litr): ";
cin >> cenaPaliwa;

double zuzyciePaliwa = obliczZuzyciePaliwa(odleglosc, 7.0);

double srednieSpanie = obliczSrednieSpalanie(odleglosc, zuzyciePaliwa);

double kosztZrzutki = obliczKosztZrzutki(odleglosc, iloscOsob, cenaPaliwa, zuzyciePaliwa);

cout << "zuzyte paliwo " << zuzyciePaliwa << "litrow" << endl;
cout << "srednie spalanie: " << srednieSpalanie << "1/100km/osob" << endl;
cout << "koszt zrzutki na osobe: " << kosztZrzutki << " zl" << endl;

	return 0;
}
