//
//  main.c
//  Rozdzial4_3
//
//  Created by Dominik on 30/06/2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int wiek;
    int liczba = 256;
    int druga;
    printf("Liczba jest rowna = %*d\n", 10, liczba);
    printf("scanf z * pomij liczbe. Podaj 2 liczby\n");
    scanf("%*d %d", &druga);
    printf("Druga = %d\n", druga);
    scanf("%d",&wiek);
    printf("%d\n",wiek);
    return 0;
    
    
    
}
