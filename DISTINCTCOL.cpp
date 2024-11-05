#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    
	   vector<int> arr(n) ;
	    for ( int a = 0; a < n ; a++) {
	        cin >> arr[a] ;
	        
	    }
	    cout << *max_element(arr.begin() , arr.end()) << endl;
	}
	return 0;
	

}
