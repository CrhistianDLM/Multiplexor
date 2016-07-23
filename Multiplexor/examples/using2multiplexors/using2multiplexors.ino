//writeLeds_m1(int);
//writeLeds_m2(int);
//writeLeds_both(int,int);
//begin(int, int, int);
//darPines();
//apagar();
//mostrarUno_En_m1(int);
//mostrarUno_En_m2(int);
//mostrarUno_En_Ambos(int,int);
//write_byte_m1(int);
//write_byte_m2(int);
//write_byte_Ambos(int,int); 
//mostrarSegundoMult(int);
//darUltimoData1();
//darUltimoDataBit1();
#include <Multiplexor.h>
Multiplexor m;
void setup() {
  // put your setup code here, to run once:
  //latch 8
  //clock 11
  //data 12
  m.begin(8, 11, 12);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Mostrara una secuencia en un multiplexor y los dos primeros en el otro
  for(int i = 0; i<9; i++){
    m.writeLeds_m1(i);
    delay(200);
  }

  //Mostrara una secuencia en un multiplexor y el penultimo led en el otro
  for(int i = 8; i>0; i--){
    m.writeLeds_m2(i);
    delay(200);
  }
}
