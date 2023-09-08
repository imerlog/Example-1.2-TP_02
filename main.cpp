#include "mbed.h"
#include "arm_book_lib.h"

int main()
{
      //gasdetector es un objeto de la clase digital iny
    // aca esta siendo creado mediante un constructar de forma gas(d2)
   DigitalIn gasDetector(D2);
   DigitalIn overTempDetector(D3);
   
   DigitalOut alarmLed(LED1);
   
   gasDetector.mode(PullDown);   
   //.mode es un metodo del obejo gas detector
   overTempDetector.mode(PullDown);

   while (true) {
      
      if ( gasDetector || overTempDetector ) {
         alarmLed = ON;
            printf("%s\n", "se detecto algo y el led  prendido");
      } else {
          printf("La alarma esta apagada\n");
         alarmLed = OFF;
      }
   }
}