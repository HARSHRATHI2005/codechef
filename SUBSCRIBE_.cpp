#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n,x;
	    cin >> n >> x;
	    
	   int subscriptions = (n + 5) / 6 ; // learned a new logic building approach here
	   
	   int TotalCost = subscriptions * x ;
	   
	   cout << TotalCost << endl ;
	    
	     
	    
	}
	return 0;

}
