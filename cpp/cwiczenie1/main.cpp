#include <iostream>

using namespace std;

int main(){
	int t[4]={13,499,58,6};
int x= 4;
for (int i=0; i<4; ++i){
if (t[i]>x){
std:: cout << t[i] << "jest wieksze od" << x  << std::endl;
} else if (t[i] < x){
std:: cout << t[i] << "jest mniejsze od" << x << std::endl;
}else {
std:: cout << t[i] << "jest rowne" << x << std::endl;
}
}
	return 0;
}
