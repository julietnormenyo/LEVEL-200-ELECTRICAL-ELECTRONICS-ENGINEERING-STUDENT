# include <iostream>
using namespace std;

int main(){
	long binary;
	cin >> binary;
	
	int decimal = 0 , base = 1;
	
	while(binary > 0){
		int lastdigit = binary % 10;
		decimal += lastdigit * base;
		base *= 2;
		binary /= 10;
		
	}
	
	cout << "Decimal = " << decimal;
	
	
	return 0;
	
}
