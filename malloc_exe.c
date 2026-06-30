
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    printf("Donnez un nombre\n");
    scanf("%d", &n);
    float *t = malloc(n * sizeof(float));
    for(int i = 0; i<n; i++) {
        t[i] = i+1;
    }
    for(int i = 0; i<n; i++) {
        printf("%f\n", t[i]);
    }
    free(t);
    
}