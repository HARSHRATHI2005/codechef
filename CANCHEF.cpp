#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    float x,y;
	    cin >> x;
	    cin >> y;
	    if(x*15 >= 2*y) {
	        cout << "YES" << endl;
	    }
	    else {
	        cout << "NO" << endl ;
	    }
	} return 0;

}
