#include<stdio.h>
#include<math.h>
#include<string.h>

int kilo(int liczba1, char * jednostka){
    char dag[] = "dag";
    if(strcmp(jednostka, dag) == 0){
        liczba1 = 100 * liczba1;
        return liczba1;
    }
}

int main(){

int wartosc;
int liczba;
char jednostka1[10] = {'\0'};
char jednostka2[10] = {'\0'};
char kg[] = "kg";
printf("%s\n", kg);

printf("Wprowadz wartosc:\n");
scanf("%i", &wartosc);
liczba = wartosc;
printf("Wprowadz jednostke 1:\n");
scanf("%s", jednostka1);
printf("Wprowadz jednostke 2:\n");
scanf("%s", jednostka2);

if(strcmp(jednostka1, "kg") == 0){
    wartosc = kilo(wartosc,jednostka2);
    printf("Wartosc %i %s to %i %s\n", liczba, jednostka1, wartosc, jednostka2);
}

    return 0;
}