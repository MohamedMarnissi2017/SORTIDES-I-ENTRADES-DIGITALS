/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       ARRAYde8LEDS 6                        **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 06/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

int LEDS[8] = {4, 5, 6, 7, 8, 9, 10, 11}; // estableix array amb valor int de 4 variables
int comptar = 0; //estableix variable comptar amb valor int
int t = 500; // estableix variable t amb valor int
const int suma = 2; //estableix la variable suma amb un valor constant int
const int resta = 3; //estableix la variable resta amb un valor constant int

//************************** SETUP ******************************

void setup() {                 // configura el final de salida

  for ( int i = 0; i < 8; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    pinMode(LEDS[i], OUTPUT);// estableix totes les variables de l'array LEDS com a sortides
    pinMode(suma, INPUT); //estableix la variable suma com a entrada
    pinMode(resta, INPUT); //estableix la variable resta com a entrada
  }
}

//*************************** LOOP ******************************

void loop() {
  if (digitalRead(suma) == HIGH) //inicia funcio while, amb condicio de que la entrada digital suma estigui on(HIGH)

    comptar = comptar + 1;//comptar sera igual a la mateixa mes 1.
  delay(t);//s'espera valor de variable t
  for (int i = 0; i < 8; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    if (bitRead(comptar, i) == 1) //inicia funcio if , amb la condicio , si lectura de bit de la variable comptar de la posicio i es igual a 1 ...
    {
      digitalWrite(LEDS[i], HIGH);//Escriu sortida digital de l'array de LEDS amb posicio i.
    }
    if (bitRead(comptar, i) == 0 ) //inicia funcio if , amb la condicio , si lectura de bit de la variable comptar de la posicio i es igual a 0 ...
    {
      digitalWrite(LEDS[i], LOW);//Escriu sortida digital de l'array de LEDS amb posicio i.
    }
  }
}
if (digitalRead(resta) == HIGH && comptar > 0) //inicia funcio if, amb condicio de que la entrada digital resata estigui on(HIGH) i la variable comptar sigui superior a 0
{
  comptar = comptar - 1;//comptar sera igual a la mateixa menys 1.
  delay(t);//s'espera valor de variable t
  for (int i = 0; i < 8; i++) //inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    if (bitRead(comptar, i) == 1) //inicia funcio if , amb la condicio , si lectura de bit de la variable comptar de la posicio i es igual a 1 ...
    {
      digitalWrite(LEDS[i], HIGH);//Escriu sortida digital de l'array de LEDS amb posicio i.
    }
    if (bitRead(comptar, i) == 0 ) //inicia funcio if , amb la condicio , si lectura de bit de la variable comptar de la posicio i es igual a 0 ...
    {
      digitalWrite(LEDS[i], LOW);//Escriu sortida digital de l'array de LEDS amb posicio i.
    }
  }
}
if (comptar == 256)//inicia funcio if , amb la condicio variable comptar ha de ser igual a 256
{
  comptar = 0;//variable comptar passa a valdre 0
}

}

//************************** FUNCIONS ***************************
