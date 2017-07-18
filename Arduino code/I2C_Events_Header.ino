
/*
Author: Gabriel Bandeira (gmb@cin.ufpe.br)
github: gabriel-bandeira
*/


void receiveEvent(int numofBytes)
{
  if(Wire.available())
    leitura = Wire.read();
}

void requestEvent()
{
  if(casa2 >= 4)
    casa2 = 0;
  if(casa2 <= -1)
    casa2 = 3;
  
  if(numero[casa2] == 11)
    numero[casa2] = 0;
  if(numero[casa2] == -1)
    numero[casa2] = 10;

  if(leitura == 0x10)
  {
    numero[casa2]++;
    Wire.write(1);
  }
  else if(leitura == 0x11)
  {
    ++casa2;
    Wire.write(1);
  }
  else if(leitura == 0x12)
  {
    --casa2;
    Wire.write(1);
  }
  else
  {
    Wire.write(0);
  }
}

