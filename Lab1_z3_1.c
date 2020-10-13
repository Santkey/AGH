#include <stdio.h>

int main()
{
    char name[] = "Kacper";
    char lastname[] = "Santkiewicz";
    char school[] = "Akademia Gorniczo-Hutnicza w Krakowie";
    char house[] = "Wydzial Inzynierii Mechanicznej i Robotyki";
    int year = 2020;
    char place[] = "B2";
    float time = 11.40;
    char title[] = "Mgr inz";
    char lecturer[] = "Adam Smoter";

    printf("Imie: %s\n", name);
    printf("Nazwisko: %s\n", lastname);
    printf("Uczelnia: %s\n", school);
    printf("Wydzial: %s\n", house);
    printf("Rok akademicki: %d\n", year);
    printf("Miejsce: %s\n", place);
    printf("Czas zajec: %.2f\n",time );
    printf("Prowadzacy: %s %s\n",title, lecturer);

    return 0;
}
 