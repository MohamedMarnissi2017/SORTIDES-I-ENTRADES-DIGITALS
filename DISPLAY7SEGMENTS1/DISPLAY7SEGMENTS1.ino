/****************************************************************
**                                                             **
**                          TÍTOL:                             **  
**                       ARRAYde8LEDS 6                        **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 06/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

//les equivalencies de segment/pin de sortida son les següents: PIN2=E PIN3=D PIN4=C PIN5=G PIN6=F PIN7=A PIN8=B

int LEDS[7] = {2,3,4, 5, 6, 7, 8,}; // estableix array amb valor int de 7 variables
int N0[7] = {1,1,1, 0, 1, 1, 1,};// estableix array amb valor int de 7 variables 
int N1[7] = {0,0,1, 0, 0, 0, 1,};// estableix array amb valor int de 7 variables
int N2[7] = {1,1,0, 1, 0, 1, 1,};// estableix array amb valor int de 7 variables
int N3[7] = {0,1,1, 1, 0, 1, 1,};// estableix array amb valor int de 7 variables
int N4[7] = {0,0,1, 1, 1, 0, 1,};// estableix array amb valor int de 7 variables
int N5[7] = {0,1,1, 1, 1, 1, 0,};// estableix array amb valor int de 7 variables
int N6[7] = {1,1,1, 1, 1, 1, 0,};// estableix array amb valor int de 7 variables
int N7[7] = {0,0,1, 0, 0, 1, 1,};// estableix array amb valor int de 7 variables
int N8[7] = {1,1,1, 1, 1, 1, 1,};// estableix array amb valor int de 7 variables
int N9[7] = {0,0,1, 1, 1, 1, 1,};// estableix array amb valor int de 7 variables
int t=1000;//estableix variable amb valor int
//************************** SETUP ******************************

void setup() {                 // configura el final de salida

  for ( int i = 0; i < 7; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    pinMode(LEDS[i], OUTPUT);// estableix totes les variables de l'array LEDS com a sortides
  
  }
}

//*************************** LOOP ******************************

void loop() {

  for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N0[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N0
  }
  delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N1[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N1
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N2[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N2
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N3[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N3
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N4[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N4
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N5[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N5
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N6[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N6
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N7[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N7
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N8[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N8
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],N9[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array N9
  }
delay(t);//s'espera el valor de variable t
}

//************************** FUNCIONS ***************************
