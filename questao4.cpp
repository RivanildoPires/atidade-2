#include <iostream>

using namespace std;

int main(){
	
	int num1;
	
	int num2;
	
	int num3;
	
	int soma;
	
	cout << "Digite um numero: ";
	
	cin >> num1;
	
	cout << "Digite um numero: ";
	
	cin >> num2;
	
	cout << "Digite um numero: ";
	
	cin >> num3;
	
	if(num1 > num2 && num1 > num3 && num2 > num3){
		
		soma = num1 + num3;
		
	cout << "O primeiro numero e o maior e o terceiro e o menor! Resultado da soma: " << soma;}
	
	if(num2 > num1 && num2 > num3 && num1 > num3){
		
		soma = num2 + num3;
	
	cout << "O segundo numero e o maior e o terceiro e o menor! Resultado da soma: " << soma;}

	if(num3 > num2 && num3 > num1 && num1 > num2){
		
		soma = num3 + num2;
	
	cout << "O terceiro numero e o maior e o segundo e o menor! Resultado da soma: " << soma;;}
	
	if(num1 > num2 && num1 > num3 && num2 < num3){
		
		soma = num1 + num2;
	
	cout << "O primeiro numero e o maior e o segundo e o menor! Resultado da soma: " << soma;}
	
	if(num2 > num1 && num2 > num3 && num1 < num3){
		
		soma = num2 + num1;
	
	cout << "O segundo numero e o maior e o primeiro e o menor! Resultado da soma: " << soma;}
	
	if(num3 > num2 && num3 > num1 && num1 < num2){
		
		soma = num3 + num1;
	
	cout << "O terceiro numero e o maior e o primeiro e o menor! Resultado da soma: " << soma;}
	
	return 0;
}
