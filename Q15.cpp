# include <iostream>
# include <bitset>
#include<iostream>
using namespace std;

int main(){
int binary, decimal = 0 , base = 1;
cout << "Enter a binary number :";
	cin >> binary;
	
	int temp = binary;
		
		while (temp > 0)
		{
			int digit = temp% 10;
			decimal += digit * base;
			base *= 2;
         	temp /= 10;
         }  
	

cout << "Decimal = " << decimal << endl;	
cout << "Hexadecimal = " << hex << decimal << endl;
cout << "Octal = " << oct << decimal << endl;
	
	
	
	return 0;

}
