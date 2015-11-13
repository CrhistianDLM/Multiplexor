#ifndef Multiplexor_h
#define Multiplexor_h
#define numeroLeds 8
#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif


class Multiplexor{
  public:
    Multiplexor();
    void writeLeds_m1(int);
    void writeLeds_m2(int);
    void writeLeds_both(int,int);
    void begin(int, int, int);
    void darPines();
    void apagar();
    void mostrarUno_En_m1(int);
    void mostrarUno_En_m2(int);
    void mostrarUno_En_Ambos(int,int);
  //  void mostrarSegundoMult(int);
    
    int darUltimoData1();
    int darUltimoDataBit1();
  private:
    int bits[numeroLeds]={1, 2, 4, 8, 16, 32, 64, 128};
    
    int lac, clk, data;
    int ultimoData = 0;
    int ultimoDataBit = 0;
};
#endif
