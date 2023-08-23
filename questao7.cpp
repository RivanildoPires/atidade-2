#include <iostream>

using namespace std;

int main() {
    int N = 1;
    
    cout << "Digite um numero: ";
    
    cin >> N;
    
    int somaPa = 0;
    
    int somaImpar;
    	
    	while(somaPa + somaImpar < 1000){
		if (N % 2 == 0) {
            somaPa += N;
			}
			else{
				somaImpar += N;
			}
			N++;
			
		}
		cout << "soma " << "valor " << somaPa << endl;
		cout << "soma " << "valor " << somaImpar << endl;
    	
	
	return 0;
}
