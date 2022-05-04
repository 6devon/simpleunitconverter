#include<stdio.h>
#include<math.h>
#include<string.h>

float kilo(float liczba1, char * jednostka){
    char kilogram[] = "kg";
    char dag[] = "dag";
    char tona[] = "t";
    char kwintal[]= "q";
    char funt[] = "lb";
    char uncja[] = "oz";

    if(strcmp(jednostka, kilogram) == 0){
        liczba1 = liczba1;
        return liczba1;
    } else if(strcmp(jednostka, dag) == 0){
        liczba1 = 100 * liczba1;
        return liczba1;
    } else if(strcmp(jednostka, tona) == 0){
        liczba1 = liczba1 / 1000;
        return liczba1;
    } else if(strcmp(jednostka, kwintal) == 0){
        liczba1 = liczba1 / 100;
        return liczba1;
    } else if(strcmp(jednostka, funt) == 0){
        liczba1 = liczba1 * 2.2046226;
        return liczba1;
    } else if(strcmp(jednostka, uncja) == 0){
        liczba1 = liczba1 * 35.2733686;
        return liczba1;
    } else {
        printf("Error.\n");
    }
}
float dekagram(float liczba1, char * jednostka){
    char kg[] = "kg";
    char dag[] = "dag";
    char tona[] = "t";
    char kwintal[]= "q";
    char funt[] = "lb";
    char uncja[] = "oz";
    
    if(strcmp(jednostka, dag) == 0){
        liczba1 = liczba1;
        return liczba1;
    } else if(strcmp(jednostka, kg) == 0){
        liczba1 = liczba1 / 100;
        return liczba1;
    } else if(strcmp(jednostka, tona) == 0){
        liczba1 = liczba1 / 100000;
        return liczba1;
    } else if(strcmp(jednostka, kwintal) == 0){
        liczba1 = liczba1 / 10000;
        return liczba1;
    } else if(strcmp(jednostka, funt) == 0){
        liczba1 = liczba1 * 0.022046226;
        return liczba1;
    } else if(strcmp(jednostka, uncja) == 0){
        liczba1 = liczba1 * 0.352733686;
        return liczba1;
    } else {
        printf("Error.\n");
    }
}

float tona(float liczba1, char * jednostka){
    char kg[] = "kg";
    char dag[] = "dag";
    char tona[] = "t";
    char kwintal[]= "q";
    char funt[] = "lb";
    char uncja[] = "oz";
    
    if(strcmp(jednostka, dag) == 0){
        liczba1 = liczba1 * 100000;
        return liczba1;
    } else if(strcmp(jednostka, tona) == 0){
        liczba1 = liczba1;
        return liczba1;
    } else if(strcmp(jednostka, kg) == 0){
        liczba1 = liczba1 * 1000;
        return liczba1;
    } else if(strcmp(jednostka, kwintal) == 0){
        liczba1 = liczba1 * 10;
        return liczba1;
    } else if(strcmp(jednostka, funt) == 0){
        liczba1 = liczba1 * 2204.6226;
        return liczba1;
    } else if(strcmp(jednostka, uncja) == 0){
        liczba1 = liczba1 * 35273.3686;
        return liczba1;
    } else {
        printf("Error.\n");
    }
}

float kwintal(float liczba1, char * jednostka){
    char kilogram[] = "kg";
    char dag[] = "dag";
    char tona[] = "t";
    char kwintal[]= "q";
    char funt[] = "lb";
    char uncja[] = "oz";
    
    if(strcmp(jednostka, dag) == 0){
        liczba1 = liczba1 * 10000;
        return liczba1;
    } else if(strcmp(jednostka, kilogram) == 0){
        liczba1 = liczba1 * 100;
        return liczba1;
    } else if(strcmp(jednostka, tona) == 0){
        liczba1 = liczba1 / 10;
        return liczba1;
    } else if(strcmp(jednostka, kwintal) == 0){
        liczba1 = liczba1;
        return liczba1;
    }else if(strcmp(jednostka, funt) == 0){
        liczba1 = liczba1 * 220.46226;
        return liczba1;
    } else if(strcmp(jednostka, uncja) == 0){
        liczba1 = liczba1 * 3527.33686;
        return liczba1;
    } else {
        printf("Error.\n");
    }
}

float funt(float liczba1, char * jednostka){
    char kilogram[] = "kg";
    char dag[] = "dag";
    char tona[] = "t";
    char kwintal[]= "q";
    char funt[] = "lb";
    char uncja[] = "oz";

    if(strcmp(jednostka, kilogram) == 0){
        liczba1 = liczba1 * 0.4536;
        return liczba1;
    } else if(strcmp(jednostka, dag) == 0){
        liczba1 = liczba1 * 45.36;
        return liczba1;
    } else if(strcmp(jednostka, tona) == 0){
        liczba1 = liczba1 * 0.0004536;
        return liczba1;
    } else if(strcmp(jednostka, kwintal) == 0){
        liczba1 = liczba1 * 0.004536;
        return liczba1;
    } else if(strcmp(jednostka, funt) == 0){
        liczba1 = liczba1;
        return liczba1;
    } else if(strcmp(jednostka, uncja) == 0){
        liczba1 = liczba1 * 16;
        return liczba1;
    } else {
        printf("Error.\n");
    }
}

float uncja(float liczba1, char * jednostka){
    char kilogram[] = "kg";
    char dag[] = "dag";
    char tona[] = "t";
    char kwintal[]= "q";
    char funt[] = "lb";
    char uncja[] = "oz";

    if(strcmp(jednostka, kilogram) == 0){
        liczba1 = liczba1 * 0.02835;
        return liczba1;
    } else if(strcmp(jednostka, dag) == 0){
        liczba1 = liczba1 * 2.835;
        return liczba1;
    } else if(strcmp(jednostka, tona) == 0){
        liczba1 = liczba1 * 0.00002835;
        return liczba1;
    } else if(strcmp(jednostka, kwintal) == 0){
        liczba1 = liczba1 * 0.0002835;
        return liczba1;
    } else if(strcmp(jednostka, funt) == 0){
        liczba1 = liczba1 * 0.0625;
        return liczba1;
    } else if(strcmp(jednostka, uncja) == 0){
        liczba1 = liczba1;
        return liczba1;
    } else {
        printf("Error.\n");
    }
}
float cel(float liczba1, char * jednostka){
    char cel[] = "C";
    char fehrenheit[] = "F";
    char kelwiny[] = "K";

    if(strcmp(jednostka, cel) == 0){
        liczba1 = liczba1;
        return liczba1;
    } else if(strcmp(jednostka, fehrenheit) == 0){
        liczba1 = (liczba1 *9/5) + 32;
        return liczba1;
    } else if(strcmp(jednostka, kelwiny) == 0){
        liczba1 = (liczba1 + 273.15);
        return liczba1;
    }else {
        printf("Error.\n");
    }
}

float fahr(float liczba1, char * jednostka){
    char cel[] = "C";
    char fehrenheit[] = "F";
    char kelwiny[] = "K";

    if(strcmp(jednostka, cel) == 0){
        liczba1 = (liczba1 * 5/9) - 32;
        return liczba1;
    } else if(strcmp(jednostka, fehrenheit) == 0){
        liczba1 = liczba1;
        return liczba1;
    } else if(strcmp(jednostka, kelwiny) == 0){
        liczba1 = ((liczba1 *9/5) + 273.15);
        return liczba1;
    }else {
        printf("Error.\n");
    }
}

float kelwiny(float liczba1, char * jednostka){
    char cel[] = "C";
    char fehrenheit[] = "F";
    char kelwiny[] = "K";

    if(strcmp(jednostka, cel) == 0){
        liczba1 = liczba1 - 273.15;
        return liczba1;
    } else if(strcmp(jednostka, fehrenheit) == 0){
        liczba1 = (liczba1 - 273.15)*9/5 + 32;
        return liczba1;
    } else if(strcmp(jednostka, kelwiny) == 0){
        liczba1 = liczba1;
        return liczba1;
    }else {
        printf("Error.\n");
    }
}



int main(){

float wartosc;
float liczba;
char jednostka1[10] = {'\0'};
char jednostka2[10] = {'\0'};

printf("Wprowadz wartosc:\n");
scanf("%f", &wartosc);
liczba = wartosc;
printf("Wprowadz jednostke 1:\nWagowa: (kg, dag, t, oz, q, lb):\nTemperaturowa: (C, K, F)\n");
scanf("%s", jednostka1);
printf("Wprowadz jednostke 2:\nWagowa: (kg, dag, t, oz, q, lb):\nTemperaturowa: C, K, F\n");
scanf("%s", jednostka2);

if(strcmp(jednostka1, "kg") == 0){
    wartosc = kilo(wartosc,jednostka2);
    printf("Wartosc %0.2f %s to %0.2f %s\n", liczba, jednostka1, wartosc, jednostka2);
} else if(strcmp(jednostka1, "dag") == 0){
    wartosc = dekagram(wartosc,jednostka2);
    printf("Wartosc %0.2f %s to %0.2f %s\n", liczba, jednostka1, wartosc, jednostka2);
} else if(strcmp(jednostka1, "t") == 0){
    wartosc = tona(wartosc,jednostka2);
    printf("Wartosc %0.2f %s to %0.2f %s\n", liczba, jednostka1, wartosc, jednostka2);
} else if(strcmp(jednostka1, "q") == 0){
    wartosc = kwintal(wartosc,jednostka2);
    printf("Wartosc %0.2f %s to %0.2f %s\n", liczba, jednostka1, wartosc, jednostka2);
} else if(strcmp(jednostka1, "lb") == 0){
    wartosc = funt(wartosc,jednostka2);
    printf("Wartosc %0.2f %s to %0.2f %s\n", liczba, jednostka1, wartosc, jednostka2);
} else if(strcmp(jednostka1, "oz") == 0){
    wartosc = uncja(wartosc,jednostka2);
    printf("Wartosc %0.2f %s to %0.2f %s\n", liczba, jednostka1, wartosc, jednostka2);
} 

else if(strcmp(jednostka1, "C") == 0){
    wartosc = cel(wartosc,jednostka2);
    printf("Wartosc %0.2f %s to %0.2f %s\n", liczba, jednostka1, wartosc, jednostka2);
} else if(strcmp(jednostka1, "F") == 0){
    wartosc = fahr(wartosc,jednostka2);
    printf("Wartosc %0.2f %s to %0.2f %s\n", liczba, jednostka1, wartosc, jednostka2);
} else if(strcmp(jednostka1, "K") == 0){
    wartosc = kelwiny(wartosc,jednostka2);
    printf("Wartosc %0.2f %s to %0.2f %s\n", liczba, jednostka1, wartosc, jednostka2);
} 

    return 0;
}