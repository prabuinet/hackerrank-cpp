#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here

    string s[] = {"one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine"};

    if(n <= 9)
        cout << s[n - 1];
    else 
        printf("Greater than 9");


    return 0;
}
