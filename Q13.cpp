# include <iostream>
using namespace std;

int main(){
	int s;
	cin >> s;
	
	if (s > 0 && (s & (s - 1)) == 0)
	cout << "Power of 2";
	
	else
	cout << "Not a power of 2";
	
	return 0;
	
	
}
