#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin >> x;
	
	int lasttwodigits = x % 100 ;
	cout << "K" << setw(2) << setfill ('0') << lasttwodigits;
	
	
	
	
	return 0;
	

}
