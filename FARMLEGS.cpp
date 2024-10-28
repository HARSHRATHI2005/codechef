#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--)  {
	    int n;
	    cin >> n;
	    if ( n == 2) {
	        cout << "1" << endl;
	   }
	   else {
	       int maxCows = n/4;
	       int remLegs = n - (maxCows * 4);
	       int chickens = remLegs/2;
	       
	       int total = maxCows + chickens;
	       cout << total << endl;
	   }
	   
	}
	return 0;

}
