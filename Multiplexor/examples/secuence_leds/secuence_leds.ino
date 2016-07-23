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
  //clock 12
  //data 11
  m.begin(8, 12, 11);
  Serial.begin(9600);
}
int nled = 8;
void loop() {
  /*
  if(Serial.available() > 0){ //evalua si hay datos ingresados en el monitor serial.
    nled = Serial.parseInt();
    Serial.println(nled); //imprime la variable nled (linea 26) en el puerto serial. (<<presionen ctrl+shift+m>>)
    Serial.flush();
  }
  */
  for(int i = 1; i<=nled; i++){
    //m.writeLeds(i);
    m.writeLeds_m1(i);
    delay(600);
  }
  for(int i = nled; i>0; i--){
    //m.writeLeds(i);
    m.writeLeds_m1(i);
    delay(600);
  }
}