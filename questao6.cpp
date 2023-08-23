#include <iostream>
#include <math.h>

using namespace std;

bool primo(int number) {
	
	if (number <= 1) {
        return false;
    }
    if (number <= 3){
    	return true;
	}
	if (number % 2 == 0 || number % 3 == 0){
		return false;
	}
	int i = 5;
    while (i * i <= number) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
	
	return true;
}
using namespace std;
int main(){
	
    for(int i = 0; i < 5; i++){
		
		int num;
        cout << "Digite um n�mero: ";
        cin >> num;
        
        if (primo(num)) {
           	cout << num << " � primo.\n";
        } else {
            cout << num << " n�o � primo.\n";
        }
    }

    return 0;
}
