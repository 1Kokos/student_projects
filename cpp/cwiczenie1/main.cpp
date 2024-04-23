#include <iostream>


using namespace std;
int main() {
int liczby[5];
cout<<"podaj 5 liczb";
for(int i=0; i<5;i++) {
cin>>liczby[i];
}

for(int i=0; i<5; i++) {
for(int j=i+1; j<5; j++) {
if(liczby[i] > liczby[j]){
swap(liczby[i], liczby[j]);
}
}
}

cout<<"po sortowaniu: ";
for(int i = 0; i < 5; i++) {
cout << liczby[i]<<" ";
}
cout << endl;


return 0;
}
