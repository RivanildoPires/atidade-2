#include <iostream>

using namespace std;

int main(){
	
	int num1;
	
	int num2;
	
	cout << "Digite o primeiro numero";
	
	cin >> num1;
	
	cout << "Digite o segundo numero";
	
	cin >> num2;
	
	if(num1 > num2){
		cout << "O primeiro numero � maior!";
	}
	else{
		cout << "O segundo numero � maior!";
	}
	return 0;
}
