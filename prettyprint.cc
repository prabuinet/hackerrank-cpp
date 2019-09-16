#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
	    double A; cin >> A;
	    double B; cin >> B;
	    double C; cin >> C;

	    long a = (long) A;

	    cout << nouppercase << setw(0) << hex << "0x" << a << endl;
	    dec(cout);
	    
	    cout << right << setw(15) << setfill('_') << fixed << setprecision(2) << showpos << B << endl;
	    cout.fill(' ');
	    cout.unsetf(ios_base::showpos);
	    
	    cout << uppercase << setprecision(9) << scientific << C << endl;

	}
	
	return 0;

}
