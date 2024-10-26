#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
     cin >> t;
     
     
     while (t--) {
     int x,y,a,b ;
     cin >> x;
     cin >> y;
     cin >> a;
     cin >> b;
        
    int gold = 0;
    if (x != a && x != b) {
        gold++;
    }
    if ( y != a && y !=b) {
        gold++;
    }
    cout<< gold << endl;
         
         
         
     }
     return 0;
}
