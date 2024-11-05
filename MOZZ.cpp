#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int x,y,r;
	    cin  >> x >> y >> r;
	    cout << (((r/30) + x) + (y-1)) / y << endl;
 	}
    return 0;
}
