#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("Kol: ");
    int kol;
    scanf("%d", &kol);
    unsigned long *binary1, *binary2, *decimal;
    binary1 = calloc(kol, sizeof(unsigned long));
    binary2 = calloc(kol, sizeof(unsigned long));
    decimal = calloc(kol, sizeof(unsigned long));
    int n;
    for(n=0;n<kol;n++){
    scanf("%lu", &binary1[n]);
    binary2[n] = binary1[n];}
    for(n=0;n<kol;n++){
    int m=0,buff=0;
    while(binary2[n] != 0){
    if(binary2[n]%10 > 0){
    buff = pow(2,m);
    decimal[n] = decimal[n] + buff;}
    binary2[n] /= 10;
    m++;}}
    for(n=0;n<kol;n++){
    printf("Dvoichnaya-%lu; Desyatichnaya-%lu\n",binary1[n], decimal[n]);}
    return 0;}

