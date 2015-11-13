#include "Multiplexor.h"

Multiplexor::Multiplexor(){}
void Multiplexor::writeLeds(int nLeds){
      
  int leds=0;
  for(int i=0; i< nLeds;i++){
      leds+=bits[i];
  }
   digitalWrite(lac, LOW);
    // shift out the bits:
    // Cambiar los bits:
    shiftOut(data, clk, MSBFIRST, leds);  
 
    //take the latch pin high so the LEDs will light up:
    // Cambia a la alta el pasador por lo que los LEDs se iluminarán:
    digitalWrite(lac, HIGH);
}

void Multiplexor::writeLeds2(int multiplexor_1,int multiplexor_2){
      
  int leds=0;
  for(int i=0; i< multiplexor_1;i++){
      leds+=bits[i];
  }
  int leds2=0;
  for(int i=0; i< multiplexor_2;i++){
      leds2+=bits[i];
  }
  
   digitalWrite(lac, LOW);
    // shift out the bits:
    // Cambiar los bits:
    shiftOut(data, clk, MSBFIRST, leds);  
    shiftOut(data, clk, MSBFIRST, leds2);  
    //take the latch pin high so the LEDs will light up:
    // Cambia a la alta el pasador por lo que los LEDs se iluminarán:
    digitalWrite(lac, HIGH);
   ultimoData = multiplexor_1;
   ultimoDataBit = multiplexor_2;
}
void Multiplexor::apagar(){
  digitalWrite(lac, LOW);
    // shift out the bits:
    // Cambiar los bits:
    shiftOut(data, clk, MSBFIRST, 0);  
    shiftOut(data, clk, MSBFIRST, 0);  
 
    //take the latch pin high so the LEDns will light up:
    // Cambia a la alta el pasador por lo que los LEDs se iluminarán:
    digitalWrite(lac, HIGH);
  }
void Multiplexor::begin(int nlac, int nclk, int ndata){
   pinMode(nlac, OUTPUT);
   pinMode(nclk, OUTPUT);
   pinMode(ndata, OUTPUT);   
   lac = nlac; clk =nclk; data=ndata;
   
}

void Multiplexor::darPines(){
  char text[50]="";
  sprintf(text, "pins: %3d - %3d - %3d", lac, clk, data);
  Serial.println(text);
}
void Multiplexor::mostrarUno(int nBit){
    digitalWrite(lac, LOW);
    shiftOut(data, clk, MSBFIRST, bits[nBit-1]);  
    digitalWrite(lac, HIGH);
}
//void Multiplexor::mostrarSegundoMult(int nBit){}

int Multiplexor::darUltimoData1(){
    
    return ultimoData;    
}
int Multiplexor::darUltimoDataBit1(){
    
    return ultimoDataBit;    
}
