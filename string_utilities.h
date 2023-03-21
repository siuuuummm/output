#include <stdio.h>

int slength(char s[]) {
    int i, count = 0;
    if(s != NULL) {
        for(i = 0; s[i] != '\0'; i++) {
            count++;
        }
    } else {
        count = -1;
    }
    return count;
}

char *scut_last_word(char s[]) {
    int i, count = 0, len = 0;
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ') {
            count = i;
        }
    }
    if(count == 0) {
        s = "";
    } else {
        for(i = count; s[i] != '\0'; i++) {
            s[i] = '\0';
        }
    }
    return s;
    /*for(i = 0; s[i] != '\0'; i++) {
        len++;
    }
    if(len > 1) {
        for(i = len - 1; s[i] != ' '; i--) {
            s[i] = '\0' ;
        }
    } else{
        s = "";
    }
    return s;
    */
}

int string_is_empty(char s[]) {
    if (s == NULL) return -1;
    while(s[0] != '\0') {
        return 0;
    }
    return 1;
}

int string_is_palindrome(char s[]) {
    int i, len = 0;
    for(i = 0; s[i] != '\0'; i++) {
        len++;
    }
    for(i = 0; i < len; i++) {
        if(s[i] == s[len-i-1]) {
            continue;
        } else {
            return 0;
        }
    }
    return 1;
}

int string_compare(char s1[], char s2[]) {
    int i, len1 = 0, len2 = 0;
    for(i = 0; s1[i] != '\0'; i++) {
        len1++;
    }
    for(i = 0; i < len1; i++) {
        if(s1[i] < s2[i]) {
            return 1;
        } else if(s1[i] == s2[i]){
            return 0;
        } else {
            return -1;
        }
    }
}

void string_wipe_whitespaces(char s[]) {
    int i, j = 0, len = 0;
    for(i = 0; s[i] != '\0'; i++) {
        len++;
    }
    for(i = 0; s[i]; i++) {
        if(s[i] != ' ') {
            s[j++] = s[i];
        } else if(s[i] == ' ' && s[i + 1] == ' '){
            j++;
        } else {
            s[j] = '\0'; 
        }
        printf("(inizia)%s(fin)\n", s);
    }
    /*while(i < len) {
        if(s[i] == ' ' && s[i + 1] == ' ' || s[i + 1] == '\0') {
            i++;
        } else {
            j = i;
            while(j == i) {
                s[j] = s[i];
                i++;
            }
        }
    }*/
    printf("(inizio)%s(fine)\n", s);
}

int string_how_many(char c, char s[]) {
    int i, count = 0;
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == c) {
            count++;
        }
    }
    return count;
}


int string_how_many(char c, char s[]) {
    int i, count = 0;
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == c) {
            count++;
        }
    }
    return count;
}