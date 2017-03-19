/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       ARRAY8LEDS 1                          **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 19/03/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

const int LED1 = 2; // estableix variable constant amb valor int
const int LED2 = 3; // estableix variable constant amb valor int
const int LED3 = 4; // estableix variable constant amb valor int
const int LED4 = 5; // estableix variable constant amb valor int
const int LED5 = 6; // estableix variable constant amb valor int
const int LED6 = 7; // estableix variable constant amb valor int
const int LED7 = 8; // estableix variable constant amb valor int
const int LED8 = 9; // estableix variable constant amb valor int

int t = 1000;

//************************** SETUP ******************************

void setup() {                 // configura el final de salida

  pinMode(LED1, OUTPUT);//Estableix variable LED1 com a sortida.
  pinMode(LED2, OUTPUT);//Estableix variable LED2 com a sortida.
  pinMode(LED3, OUTPUT);//Estableix variable LED3 com a sortida.
  pinMode(LED4, OUTPUT);//Estableix variable LED4 com a sortida.
  pinMode(LED5, OUTPUT);//Estableix variable LED5 com a sortida.
  pinMode(LED6, OUTPUT);//Estableix variable LED6 com a sortida.
  pinMode(LED7, OUTPUT);//Estableix variable LED7 com a sortida.
  pinMode(LED8, OUTPUT);//Estableix variable LED8 com a sortida.
}

//*************************** LOOP ******************************

void loop() {
  digitalWrite(LED1, HIGH);// Escriu sortida digital LED1 a estat HIGH (ences).
  digitalWrite(LED2, HIGH);// Escriu sortida digital LED2 a estat HIGH (ences).
  digitalWrite(LED3, HIGH);// Escriu sortida digital LED3 a estat HIGH (ences).
  digitalWrite(LED4, HIGH);// Escriu sortida digital LED4 a estat HIGH (ences).
  digitalWrite(LED5, HIGH);// Escriu sortida digital LED5 a estat HIGH (ences).
  digitalWrite(LED6, HIGH);// Escriu sortida digital LED6 a estat HIGH (ences).
  digitalWrite(LED7, HIGH);// Escriu sortida digital LED7 a estat HIGH (ences).
  digitalWrite(LED8, HIGH);// Escriu sortida digital LED8 a estat HIGH (ences).
  delay(t);//s'espera valor variable t.
  digitalWrite(LED1, LOW);// Escriu sortida digital LED1 a estat LOW (apagat).
  digitalWrite(LED2, LOW);// Escriu sortida digital LED2 a estat LOW (apagat).
  digitalWrite(LED3, LOW);// Escriu sortida digital LED3 a estat LOW (apagat).
  digitalWrite(LED4, LOW);// Escriu sortida digital LED4 a estat LOW (apagat).
  digitalWrite(LED5, LOW);// Escriu sortida digital LED5 a estat LOW (apagat).
  digitalWrite(LED6, LOW);// Escriu sortida digital LED6 a estat LOW (apagat).
  digitalWrite(LED7, LOW);// Escriu sortida digital LED7 a estat LOW (apagat).
  digitalWrite(LED8, LOW);// Escriu sortida digital LED8 a estat LOW (apagat).
  delay(t);//s'espera valor variable t.
}


//************************** FUNCIONS ***************************
