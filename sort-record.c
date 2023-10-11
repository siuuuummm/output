#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN_AGE 0
#define MAX_AGE 100
#define MAX_LEN 50

typedef struct {
    char * name;
    int age;
} record;

record * rec_rand_create(int n);
void rec_sort(record * v, int n);
void rec_print(record * v, int n);
void rec_free(record * v, int n);

int main(void) {
    int n;
    srand(time(NULL));
    scanf("%d", &n);
    record * people = rec_rand_create(n);
    rec_sort(people, n);
    rec_print(people, n);
    rec_free(people, n);
}

record * rec_rand_create(int n) {
    int i, j, length;
    if(n < 0) {
        return NULL;
    }
    record * people = (record *)malloc((n * sizeof(record)));
    if(people == NULL) {
        return NULL;
    }
    if(n > 0) {
        length = rand() % MAX_LEN + 1;
        for(i = 0; i < n; i++) {
            people[i].name = (char *)malloc((length + 1) * sizeof(char));
            if(people[i].name == NULL) {
                return NULL;
            }
            for(j = 0; j < length; j++) {
                people[i].name[j] = rand() % 127 + 32;
            }
            people[i].name[length] = '\0';
            people[i].age = rand() % (MAX_AGE - MIN_AGE + 1) + MIN_AGE;
        }
    }
    return people;
}

void rec_sort(record * v, int n) {
    if(n < 2) {
        return; //se inferiore a 2 non serve ordinare
    }
    int middle = n/2;   //trovo la metà dell'array
    rec_sort(v,middle); //primo sorting tra inizio e la metà
    rec_sort(v + middle , n - middle); //secondo sorting tra la metà + 1 e la fine

    record * temp = (record *)malloc(n * sizeof(record)); //alloco memoria per l'array
    int i = 0, j = middle, k = 0;
    //confronta gli elementi delle due metà e mette il più piccolo in temp
    while(i < middle && j < n) {    
        if(v[i].age <= v[j].age) {
            temp[k++] = v[i++];
        } else {
            temp[k++] = v[j++];
        }
    }
    //copia eventuali elementi rimanenti dalla prima metà
    while(i < middle) {
        temp[k++] = v[i++];
    }
    //copia eventuali elementi rimanenti dalla seconda metà
    while(j < n) {
        temp[k++] = v[j++];
    }
    //copia i dati ordinati in v
    for(i = 0; i < n; i++) {
        v[i] = temp[i];
    }
    free(temp);
}

void rec_print(record * v, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Name: %s, Age: %d\n", v[i].name, v[i].age);
    }
}

void rec_free(record * v, int n) {
    int i;
    for(i = 0; i < n; i++) {
        free(v[i].name);
    }
    free(v);
}