#include <stdio.h>

 int main(){
 int m,km,m_resto;
 
 printf("Dgite metros:");
 scanf("%d", &m);

 km = m/1000;
 m_resto= m % 1000;

 printf("Corresponde ha %d km e %d metros.", km, m_resto);


 return 0;






 }