
/*
Author: Gabriel Bandeira (gmb@cin.ufpe.br)
github: gabriel-bandeira
*/

void tudo(bool state2)
{
  for(int i = 0; i < 8; i++)
    digitalWrite(letra[i], state2);
  
  if(state2 == HIGH)
  {
    bool state3 = LOW;
  for(int i = 0; i < 4; i++)
    digitalWrite(gnd[i], state3);
  }

  else
  {
    bool state3 = HIGH;  
  for(int i = 0; i < 4; i++)
    digitalWrite(gnd[i], state3);
  }
}

void print0(bool state)
{
  for(int i = 0; i < 6; i++)
    digitalWrite(letra[i], state);
}

void print1(bool state)
{
    digitalWrite(letra[1], state);
    digitalWrite(letra[2], state);
}

void print2(bool state)
{
    digitalWrite(letra[0], state);
    digitalWrite(letra[1], state);
    digitalWrite(letra[3], state);
    digitalWrite(letra[4], state);
    digitalWrite(letra[6], state);
}

void print3(bool state)
{
    digitalWrite(letra[0], state);
    digitalWrite(letra[1], state);
    digitalWrite(letra[2], state);
    digitalWrite(letra[3], state);
    digitalWrite(letra[6], state);
}

void print4(bool state)
{
    digitalWrite(letra[1], state);
    digitalWrite(letra[2], state);
    digitalWrite(letra[5], state);
    digitalWrite(letra[6], state);
}

void print5(bool state)
{
    digitalWrite(letra[0], state);
    digitalWrite(letra[2], state);
    digitalWrite(letra[3], state);
    digitalWrite(letra[5], state);
    digitalWrite(letra[6], state);
}

void print6(bool state)
{
    digitalWrite(letra[0], state);
    digitalWrite(letra[2], state);
    digitalWrite(letra[3], state);
    digitalWrite(letra[4], state);
    digitalWrite(letra[5], state);
    digitalWrite(letra[6], state);
}

void print7(bool state)
{
    digitalWrite(letra[0], state);
    digitalWrite(letra[1], state);
    digitalWrite(letra[2], state);
}

void print8(bool state)
{
    for(int i = 0; i < 7; i++)
    {
        digitalWrite(letra[i], state);
    }
}

void print9(bool state)
{
    digitalWrite(letra[0], state);
    digitalWrite(letra[1], state);
    digitalWrite(letra[2], state);
    digitalWrite(letra[3], state);
    digitalWrite(letra[5], state);
    digitalWrite(letra[6], state);
}

void printPt(bool state)
{
    digitalWrite(letra[7], state);
}

void num(int numero)
{
    switch (numero)
    {
    case 0:
        print0(state);
        break;
    case 1:
        print1(state);
        break;
    case 2:
        print2(state);
        break;
    case 3:
        print3(state);
        break;
    case 4:
        print4(state);
        break;
    case 5:
        print5(state);
        break;
    case 6:
        print6(state);
        break;
    case 7:
        print7(state);
        break;
    case 8:
        print8(state);
        break;
    case 9:
        print9(state);
        break;
    case 10:
        printPt(state);
        break;
    }
}

void casa(int num)
{
  switch (num)
  {
    case 0:
    digitalWrite(gnd[0], LOW);
    break;
    case 1:
    digitalWrite(gnd[1], LOW);
    break;
    case 2:
    digitalWrite(gnd[2], LOW);
    break;
    case 3:
    digitalWrite(gnd[3], LOW);
    break;
  }
}

