#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    scanf("%d", &n);

    vector<int> v;
    
    for(int i = 0; i < n; i++) {
	int t;
	scanf("%d", &t);
	v.push_back(t);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
	printf("%d ", v[i]);
    }
    
    return 0;
}

