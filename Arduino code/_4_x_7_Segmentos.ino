
/*
Author: Gabriel Bandeira (gmb@cin.ufpe.br)
github: gabriel-bandeira
*/

#include <Wire.h>

int letra[] = {22,23,24,25,26,27,28,29};
int gnd[] = {31,32,33,34};

byte leitura = 0x00;

int numero[4] = {0,0,0,0};
int casa2 = 0;

bool state = HIGH;

void setup()
{
  for(int i = 0; i < 8; i++)
    pinMode(letra[i], OUTPUT);
  for(int i = 0; i < 4; i++)
    pinMode(gnd[i], OUTPUT);
    
  Wire.begin(0x18);
  Wire.onReceive(receiveEvent);
  Wire.onRequest(requestEvent);
}

void loop()
{
/*  
  tudo(HIGH);
  delay(1000);
  tudo(LOW);
  delay(1000);

  for(int j = 1; j < 5; j++)
  {
    for(int i = 0; i < 11; i++)
    {
      tudo(LOW);
      casa(j);
      num(i);
      delay(1000);
    }
  }
*/

  casa(0);
  num(numero[0]);
  delay(1);
  tudo(LOW);

  casa(1);
  num(numero[1]);
  delay(1);
  tudo(LOW);

  casa(2);
  num(numero[2]);
  delay(1);
  tudo(LOW);

  casa(3);
  num(numero[3]);
  delay(1);
  tudo(LOW);
}

