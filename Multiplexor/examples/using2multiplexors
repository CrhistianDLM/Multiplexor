#include <Multiplexor.h>
Multiplexor m;
void setup() {
  // put your setup code here, to run once:
  //pin latch 8
  //pin clock 11
  //pin data 12
  m.begin(8, 11, 12);
}

void loop() {
  //Mostrara una secuencia en un multiplexor y los dos primeros en el otro
  //Display a sequence in a multiplexer and the first two on the other
  for(int i = 0; i<9; i++){
    m.writeLeds2(i,3);
    delay(200);
  }

  //Mostrara una secuencia en un multiplexor y el penultimo led en el otro
  //Display a sequence in a multiplexer and the penultimate led in the other
  for(int i = 8; i>0; i--){
    m.writeLeds2(i,64);
    delay(200);
  }
}
