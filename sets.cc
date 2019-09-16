#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q;
    scanf("%d", &q);
    set<int> s;
    
    while(q--) {
	int c, x;
	scanf("%d %d", &c, &x);

	if(c == 1) {
	    s.insert(x);
	} else if(c == 2) {
	    s.erase(x);
	} else if(c == 3) {
	    if(s.find(x) != s.end())
		printf("Yes\n");
	    else
		printf("No\n");
	}
    }
    return 0;
}
