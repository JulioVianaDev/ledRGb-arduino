void convertRGB(int red,int green,int blue){
  int ledRed = 255-red;
  int ledGreen = 255-green;
  int ledBlue = 255 - blue;
  analogWrite(vermelho,ledRed);
  analogWrite(verde,ledGreen);
  analogWrite(azul,ledBlue);
}
