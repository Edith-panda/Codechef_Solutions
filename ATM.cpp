#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    int tran;
    float deduct;
    
    cin >> tran >> deduct;
    
        if (tran % 5 == 0 && tran<= deduct-0.50 )
        deduct = deduct-tran-0.50;
        cout << fixed << setprecision(2) << deduct;
        
    
	// your code goes here
	return 0;
}
