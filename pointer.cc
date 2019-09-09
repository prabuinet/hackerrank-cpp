#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    int sum = *a + *b;
    int diff = *a - *b;
    diff = diff < 0 ? (-diff) : diff;
    *a = sum;
    *b = diff;
}

void update_testers(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

