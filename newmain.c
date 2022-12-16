// Git pull comment to check pull functionality from Github To Xpres
#include <xc.h>
uint8_t m =10;
uint8_t add(uint8_t n, uint8_t o, uint8_t p ){
   return n+o+p;
}
void main() {
   uint8_t a = 0x05;
   LATA = a;
   uint8_t c = 0x1F;
   TRISA = c;
   uint8_t b =0x08;
   LATB = b;
   uint8_t t = add(a,b,c);
   return;
}
