int columnas[9]={2,3,4,5,6,7,8,9,10};
int t=500;
int fila1=12;
int fila2=11;
int fila3=13;

void setup() {
  // put your setup code here, to run once:
  for ( int i = 0; i < 9; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
    pinMode(columnas[i], OUTPUT);// estableix totes les variables de l'array LEDS com a sortides
  
  }
  pinMode(fila1,OUTPUT);
  pinMode(fila2,OUTPUT);
  pinMode(fila3,OUTPUT);
}

void loop() {

  digitalWrite(fila1,HIGH);
   for ( int i = 0; i < 9; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
   digitalWrite(columnas[i],HIGH);// estableix totes les variables de l'array LEDS com a sortides
   delay(t);
   digitalWrite(columnas[i],LOW);// estableix totes les variables de l'array LEDS com a sortides
  }
  digitalWrite(fila1,LOW); 

  digitalWrite(fila2,HIGH);
   for ( int i = 0; i < 9; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
   digitalWrite(columnas[i],HIGH);// estableix totes les variables de l'array LEDS com a sortides
   delay(t);
   digitalWrite(columnas[i],LOW);// estableix totes les variables de l'array LEDS com a sortides
  }
  digitalWrite(fila2,LOW);

  digitalWrite(fila3,HIGH);
   for ( int i = 0; i < 9; i++)//inicia funcio for, estableix variable i amb un valor de 0 , condiciona, si i es inferior a 8 incrementa el valor de i en 1.
  {
   digitalWrite(columnas[i],HIGH);// estableix totes les variables de l'array LEDS com a sortides
   delay(t);
   digitalWrite(columnas[i],LOW);// estableix totes les variables de l'array LEDS com a sortides
  }
  digitalWrite(fila3,LOW);


  
}
