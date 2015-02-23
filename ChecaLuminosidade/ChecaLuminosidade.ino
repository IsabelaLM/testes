#define LDR 3

int led[] = {13, 12, 8, 7, 4};
int luminosidade;

void setup()
{
  for(int x = 0; x < 5; x++)
  {
    pinMode(led[x], OUTPUT);
  }
}

void loop()
{
  //Obtemos o valor da luminosidade via sensor da placa
  luminosidade = analogRead(LDR);
  
  //Calculamos quantos leds devem ser ligados
  int ledsParaLigar = map(luminosidade, 300, 750, 0, 4);
  
  for(int x = 0; x <= ledsParaLigar; x++)
  {
    digitalWrite(led[x], HIGH);
    delay(100);
  }
  
  for(int x=ledsParaLigar;x>-1;x--)
  {
    digitalWrite(led[x], LOW);
    delay(100);
  }
}
