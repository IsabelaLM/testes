// Associamos o nome LDR à porta analógica 5 (Program-ME 2.0)
#define LDR 3
int luminosidade;

void setup()
{
  //Instrução para iniciar a comunicação serial com o computador
  Serial.begin(9600);
}

void loop()
{
  //Obtemos o valor da luminosidade via sensor da placa
  luminosidade = analogRead(LDR);
  //Instrução para enviar um dado para o computador
  Serial.println(luminosidade);
  delay(500);
}
