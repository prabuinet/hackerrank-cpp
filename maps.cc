#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    scanf("%d", &q);
    map<string, int> m;
    
    while(q--) {
	int c, x;
	string s;
	
	cin >> c >> s;

	map<string, int>::iterator f = m.find(s);
	
	if(c == 1) {
	    int y;
	    cin >> y;
	    
	    if(f == m.end())
		m.insert(make_pair(s, y));
	    else
		f->second = f->second + y;
	} else if(c == 2) {
	    m.erase(s);
	} else if(c == 3) {
	    if(f == m.end())
		printf("0\n");
	    else
		cout << f->second << endl;
	}
    }
    return 0;
}

