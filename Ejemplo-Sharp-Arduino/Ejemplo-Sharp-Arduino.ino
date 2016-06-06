#include "Sharp_Borra.h"
Sharp SensorIzq(0); //Crea un sensor llamado SensorIzq 
                    //Conectado en el analogico 0

int Dis;    //Variable que guarda la distancia

void setup() {
  Serial.begin(9600);//Inicia la comunicacion serial
}

void loop() {
Dis = SensorIzq.GetDis();         //Guarda en Dis la distancia del sensor Izquierdo
Serial.print("La distacia es ");  //Imprime
Serial.println(Dis);              //El valor de la distancia
delay(50);                        //Espera 50 ms
}
