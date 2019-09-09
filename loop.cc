#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b;
    const char *s[] = {"one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine"};
    
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
	if(i <= 9)
	    cout << s[i-1] << endl;
	else if(i % 2)
	    cout << "odd" << endl;
	else
	    cout << "even" << endl;
    }


    return 0;
}
