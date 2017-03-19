/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       ARRAYde8LEDS 3                        **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 06/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

int LEDS[8] = {2, 3, 4, 5, 6, 7, 8, 9};// estableix array amb valor int de 8 variables
int ENCEN[8] = {0, 0, 0, 0, 0, 0, 0, 0};// estableix array amb valor int de 8 variables
int ENCEN1[8] = {1, 0, 0, 0, 0, 0, 0, 0};// estableix array amb valor int de 8 variables
int ENCEN2[8] = {1, 1, 0, 0, 0, 0, 0, 0};// estableix array amb valor int de 8 variables
int ENCEN3[8] = {1, 1, 1, 0, 0, 0, 0, 0};// estableix array amb valor int de 8 variables
int ENCEN4[8] = {0, 1, 1, 1, 0, 0, 0, 0};// estableix array amb valor int de 8 variables
int ENCEN5[8] = {0, 0, 1, 1, 1, 0, 0, 0};// estableix array amb valor int de 8 variables
int ENCEN6[8] = {0, 0, 0, 1, 1, 1, 0, 0};// estableix array amb valor int de 8 variables
int ENCEN7[8] = {0, 0, 0, 0, 1, 1, 1, 0};// estableix array amb valor int de 8 variables
int ENCEN8[8] = {0, 0, 0, 0, 0, 1, 1, 1};// estableix array amb valor int de 8 variables
int ENCEN9[8] = {0, 0, 0, 0, 0, 0, 1, 1};// estableix array amb valor int de 8 variables
int ENCEN10[8] = {0, 0, 0, 0, 0, 0, 0, 1};// estableix array amb valor int de 8 variables
int ENCEN11[8] = {0, 0, 0, 0, 0, 0, 0, 0};// estableix array amb valor int de 8 variables
int t=10;// estableix variable t amb valor int

//************************** SETUP ******************************

void setup() {                 // configura el final de salida

  for ( int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    pinMode(LEDS[i], OUTPUT);// estableix totes les variables de l'array LEDS com a sortides
  }
}

//*************************** LOOP ******************************

void loop() {
  for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN1[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
     delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN2[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
     delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN3[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
 for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN4[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN5[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN6[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN7[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  } for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN8[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN9[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN10[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN11[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  } for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN10[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN9[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN8[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN7[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
   for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN6[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN5[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN4[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN3[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  } for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN2[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN1[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }
    for (int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    digitalWrite(LEDS[i], ENCEN[i]);//Escriu valor de sortida de l'array LEDS en funcio de l'array ENCEN
    delay(t);//s'espera el valor de variable t
  }

}


//************************** FUNCIONS ***************************
