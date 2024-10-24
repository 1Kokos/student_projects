#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	srand(time(nullptr));

int wybranaLiczba;

cout<<"wybierz liczbe od 1 do 6:";
cin>>wybranaLiczba;

if(wybranaLiczba<1 || wybranaLiczba>6){
cout<<"blad: wybrano liczbe spoza zakresu" << endl;
return 1;
}
int wylosowanaLiczba = rand() % 6 + 1;

cout<<"Program wylosował liczbe:" <<wylosowanaLiczba << endl;

if (wybranaLiczba == wylosowanaLiczba) {
cout << "przegrałeś" << endl;
} else {
cout << "brawo przeżyłeś" << endl;
}
	return 0;
}
