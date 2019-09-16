#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, y;
    vector<int> v;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
	int t;
	scanf("%d", &t);
	v.push_back(t);
    }

    scanf("%d", &q);

    for(int i = 0; i < q; i++) {
	scanf("%d", &y);
	vector<int>::iterator lb;
	lb = lower_bound(v.begin(), v.end(), y);
	if(*lb == y)
	    printf("Yes %d\n", (int) (lb - v.begin()) + 1);
	else
	    printf("No %d\n", (int) (lb - v.begin()) + 1);	    
	//printf("%d\n", (int) (lb - v.begin()));
    }

    return 0;
}
