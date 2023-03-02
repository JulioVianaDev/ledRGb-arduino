#define vermelho 3
#define verde 5
#define azul 6

void setup() {
  // put your setup code here, to run once:
  pinMode(vermelho,INPUT);
  pinMode(verde,INPUT);
  pinMode(azul,INPUT);
}

void loop() {
  // enquanto menor o numero da potencia mais da cor vai ter
  // é o contrario de sites, o valor: 0,0,0 significa branco( ou seja tudo no maximo)
  analogWrite(vermelho,0);
  analogWrite(verde,0);
  analogWrite(azul,0);

  
  convertRGB(211,244,12);
}
