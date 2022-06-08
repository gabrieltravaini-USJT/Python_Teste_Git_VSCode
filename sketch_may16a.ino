const int led_vermelho = 9;
const int led_verde = 10;
const int led_azul = 11;

int cores[6][3] = {{255,0,0}, //vermelho
                    {0,255,0}, //verde
                    {0,0,255}, //azul
                    {255,255,0},//amarelo
                    {255,0,255},//roxo
                    {255,255,255}};//branco

void setup() {
}

void loop() {
 
    for(int i=0;1<6;i++){
      analogWrite(led_vermelho,cores[i][0]);
      analogWrite(led_verde,cores[i][1]);
      analogWrite(led_azul,cores[i][2]);
      delay(500);
    }
}
