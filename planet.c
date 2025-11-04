#include <stdio.h>
#include <stdlib.h>

// Enumeration for planeterne
enum planet { mercury, venus, earth, mars, jupiter, saturn, uranus, neptune };

// Funktionserklæringer
enum planet planet_of_char(char c);
void print_circumference(enum planet p);

int main(void) {
    char planet_char;

    printf("Her er dine valgmuligheder for planeter:\n");
    printf("m: Merkur\n");
    printf("v: Venus\n");
    printf("e: Jorden\n");
    printf("a: Mars\n");
    printf("j: Jupiter\n");
    printf("s: Saturn\n");
    printf("u: Uranus\n");
    printf("n: Neptun\n");
    printf("Indtast en planet (m/v/e/a/j/s/u/n): ");
    scanf(" %c", &planet_char);

    enum planet p = planet_of_char(planet_char);

    print_circumference(p);

    return 0;
}

// Funktion der oversætter et tegn til en planet
enum planet planet_of_char(char c) {
    switch (c) {
        case 'm': return mercury;
        case 'v': return venus;
        case 'e': return earth;
        case 'a': return mars;
        case 'j': return jupiter;
        case 's': return saturn;
        case 'u': return uranus;
        case 'n': return neptune;
        default:
            printf("Ugyldigt valg! Brug: m, v, e, a, j, s, u eller n.\n");
            exit(EXIT_FAILURE);
    }
}

// Funktion der udskriver planetens omkreds
void print_circumference(enum planet p) {
    switch (p) {
        case mercury:
            printf("Merkur: 15.329 km\n");
            break;
        case venus:
            printf("Venus: 38.025 km\n");
            break;
        case earth:
            printf("Jorden: 40.075 km\n");
            break;
        case mars:
            printf("Mars: 21.344 km\n");
            break;
        case jupiter:
            printf("Jupiter: 439.264 km\n");
            break;
        case saturn:
            printf("Saturn: 365.882 km\n");
            break;
        case uranus:
            printf("Uranus: 159.354 km\n");
            break;
        case neptune:
            printf("Neptun: 154.705 km\n");
            break;
        default:
            printf("Fejl: Ukendt planet!\n");
            exit(EXIT_FAILURE);
    }
}
