// Associando o nome LED_1 com a porta digital 13
#define LED_1 13
#define LED_2 12

void setup()
{
  //Definindo a porta digital 13 como uma porta de saída de dados (acenderemos o led)
  pinMode(LED_2, OUTPUT);
  
  // Initialize serial communication
  Serial.begin(9600);
}

void loop()
{
  //Gravamos 1 na porta digital 13, acendendo o led verde
  digitalWrite(LED_2, HIGH);
  Serial.println("LED ON");
  //Comando para aguardar 1 segundo (1000 milissegundos) para a próxima instrução
  delay(1000);
  // Gravamos 0 na porta digital 13, apagando o led verde
  digitalWrite(LED_2, LOW);
  Serial.println("LED OFF");
  //Comando para aguardar 1 segundo (1000 milissegundos) para a próxima instrução
  delay(1000);
}

