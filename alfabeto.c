#include <stdio.h>
#include <string.h>

int main() {
    char testo[1000];
    int i, j, n;
    fgets(testo, sizeof(testo), stdin);
    
    for(j = 0; testo[j]; j++);
    n = j;
        
    for(i = 0; i < n; i++) {
        if(testo[i]) {
            if(testo[i] >= 'A' && testo[i] <= 'Z')
            testo[i] += 32;
            printf(" '%c' = *", testo[i]);
            for(j = i + 1; j < n; j++) {
                if(testo[j] >= 'A' && testo[j] <= 'Z')
                testo[j] += 32;
                if(testo[i] == testo[j]) {
                    printf("*");
                    testo[j] = '\0';
                }
            }
            printf("\n");
        }
    }
    return 0;
}