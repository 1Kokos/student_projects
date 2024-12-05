#include <iostream>

using namespace std;
void calculate(int a, int b, int* sum, int* dif) {
*sum = a + b;
*dif = a - b;
}
int main(){
int a, b;
int sum, dif;
cout<<"Podaj pierwszą liczbę ";
cin>> a;
cout<<"Podaj drugą liczbę ";
cin>> b;

calculate (a, b, &sum, &dif);

cout<<"Suma: " <<sum<<endl;
cout<<"Różnica: " <<dif<<endl;




return 0;
}
