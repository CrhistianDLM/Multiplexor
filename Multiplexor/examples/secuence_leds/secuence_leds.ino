#include <Multiplexor.h>
Multiplexor m;
void setup() {
  // put your setup code here, to run once:
  //latch 8
  //clock 12
  //data 11
  m.begin(8, 12, 11);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 1; i<9; i++){
    m.writeLeds(i);
    delay(200);
  }
  for(int i = 8; i>0; i--){
    m.writeLeds(i);
    delay(200);
  }
}
