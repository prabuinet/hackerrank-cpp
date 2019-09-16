#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x, a, b, t;

    vector<int> v;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
	scanf("%d", &t);
	v.push_back(t);
    }

    scanf("%d %d %d", &x, &a, &b);

    v.erase(v.begin() + (x - 1));

    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));

    printf("%lu\n", v.size());
    for(int i = 0; i < v.size(); i++) {
	printf("%d ", v[i]);
    }

    return 0;
}
