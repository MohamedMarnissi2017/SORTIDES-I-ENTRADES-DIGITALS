/****************************************************************
**                                                             **
**                          TÍTOL:                             **  
**                  Display de 7 segments 3                    **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 06/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

//les equivalencies de segment/pin de sortida son les següents: PIN2=E PIN3=D PIN4=C PIN5=G PIN6=F PIN7=A PIN8=B

int LEDS[7] = {2,3,4, 5, 6, 7, 8,}; // estableix array amb valor int de 7 variables
int M[7] = {1,0,1, 0, 0, 1, 0,};// estableix array amb valor int de 7 variables 
int O[7] = {1,1,1, 0, 1, 1, 1,};// estableix array amb valor int de 7 variables
int H[7] = {1,0,1, 1, 1, 0, 1,};// estableix array amb valor int de 7 variables
int A[7] = {1,0,1, 1, 1, 1, 1,};// estableix array amb valor int de 7 variables
int E[7] = {1,1,0, 1, 1, 1, 0,};// estableix array amb valor int de 7 variables
int D[7] = {1,1,1, 1, 0, 0, 1,};// estableix array amb valor int de 7 variables

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
    digitalWrite(LEDS[i],M[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array M
  }
  delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],O[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array O
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],H[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array H
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],A[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array A
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],M[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array M
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],E[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array E
  }
    delay(t);//s'espera el valor de variable t
   for (int i = 0; i < 7; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 7 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i],D[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array D
  }
 

   

delay(2000);//s'espera 2s
}

//************************** FUNCIONS ***************************
