#include <iostream>
#include <cstdlib>
#include <ctime>


int main(){
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

int wybranaLiczba;

std::cout<<"wybierz liczbe od 1 do 10:";
std::cin>>wybranaLiczba;

if(wybranaLiczba<1 || wybranaLiczba>10){
std::cerr<<"blad: wybrano liczbe spoza zakresu" << std::endl;
return 1;
}
int wylosowanaLiczba = std::rand() % 10 + 1;

std::cout<<"Program wylosował liczbe:" <<wylosowanaLiczba << std::endl;

if (wybranaLiczba == wylosowanaLiczba) {
std::cout << "przegrałeś" << std::endl;
} else {
std::cout << "brawo przeżyłeś" << std::endl;
}
	return 0;
}
