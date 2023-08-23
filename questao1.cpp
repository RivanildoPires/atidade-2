#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout << "Digite um numero: ";
	
	cin >> num;
	
	if(num < 0){
		cout << "Numero negativo!";
		}else{
			cout << "Numero positivo!";
		}
		return 0;
}
