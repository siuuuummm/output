#include <stdio.h>

int main(void) {
    char s1[81];
    char s2[81];
    char i = 0, *p;
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    /*Cerca i caratteri non stampabili e chiude la stringa*/
    for(p = s1; (32 <= *p) && (*p <= 126); p++);
    *p = 0;
    for(p = s2; (32 <= *p) && (*p <= 126); p++);
    *p = 0;

    /*Scansiona s1*/
    for(p = s1; *p; p++) {
        if(*(s2 + i) == 0) {
            /*
            Raggiunta la fine di s2. p punta alla 
            stringa successiva ad s1
            */
            break;
        }
        if(*(s2 + i) == *p) {
            /*stesso carattere, avanza in s2*/
            i++;
        } else if( *s2 == *p) {
            /*trovato l'inizio di una nuova s2*/
            i = 1;
        } else {
            /*carattere differente, reset*/
            i = 0;
        }
    }

    printf("%s\n", p);
    return 0;
}