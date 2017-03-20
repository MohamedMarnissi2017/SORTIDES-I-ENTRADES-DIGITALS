/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       ARRAYde8LEDS 5                        **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 06/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

int LEDS[4] = {5, 6, 7, 8};// estableix array amb valor int de 4 variables
int comptar=1;//estableix variable comptar amb valor int
int t=500;// estableix variable t amb valor int
const int polsador=2;//estableix la variable polsador amb un valor constant int

//************************** SETUP ******************************

void setup() {                 // configura el final de salida

  for ( int i = 0; i < 4; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 4 incrementa el valor de i en 1.
  {
    pinMode(LEDS[i], OUTPUT);// estableix totes les variables de l'array LEDS com a sortides
    pinMode(polsador,INPUT);//estableix la variable polsador com a sortida
  }
}

//*************************** LOOP ******************************

void loop() {
while(comptar<16&&digitalRead(polsador)==HIGH)//inicia funcio while, amb condicio de que la varaible comptar sigui inferior a 16 i que la entrada digital polsador estigui on(HIGH)
{
  for(int i=0;i<4;i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 4 incrementa el valor de i en 1.
  {
    if(bitRead(comptar,i)==1)//inicia funcio if , amb la condicio , si lectura de bit de la variable comptar de la posicio i es igual a 1 ...
   {
    digitalWrite(LEDS[i], HIGH);//Escriu sortida digital de l'array de LEDS amb posicio i.
   }
   if(bitRead(comptar,i)== 0 )//inicia funcio if , amb la condicio , si lectura de bit de la variable comptar de la posicio i es igual a 0 ...
   {
   digitalWrite(LEDS[i], LOW);//Escriu sortida digital de l'array de LEDS amb posicio i.
  }
}
delay(t);//S'espera valor de variable t
comptar++;//incrementa el valor de la variable comptar en 1.
}
if(comptar==16)//inicia funcio if amb la condicio de que la variable comptar sigui igual a 16
{
  comptar=0;//la variable comptar passa a valdre 0
}
}

//************************** FUNCIONS ***************************
