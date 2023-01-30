#include "DHT.h"

// Pins conectados aos Sensores
int rele = 12;
#define DHTPIN1 2 //1 
#define DHTPIN2 3 //2
#define DHTPIN3 4 //3
#define DHTPIN4 5 //4
#define DHTPIN5 6 //5
#define DHTPIN6 7 //6
#define DHTPIN7 8 //7
#define DHTPIN8 9 //8
#define DHTPIN9 10 //9
#define DHTPIN10 26 //10
#define DHTPIN11 24 //11
#define DHTPIN12 22 //12
#define DHTPIN13 30 //13
#define DHTPIN14 32 //14
#define DHTPIN15 34 //15

// Definir o tipo de Sensor (DHT-11)
#define DHTTYPE DHT11   // DHT 11

DHT dht1(DHTPIN1, DHTTYPE);
DHT dht2(DHTPIN2, DHTTYPE);
DHT dht3(DHTPIN3, DHTTYPE);
DHT dht4(DHTPIN4, DHTTYPE);
DHT dht5(DHTPIN5, DHTTYPE);
DHT dht6(DHTPIN6, DHTTYPE);
DHT dht7(DHTPIN7, DHTTYPE);
DHT dht8(DHTPIN8, DHTTYPE);
DHT dht9(DHTPIN9, DHTTYPE);
DHT dht10(DHTPIN10, DHTTYPE);
DHT dht11(DHTPIN11, DHTTYPE);
DHT dht12(DHTPIN12, DHTTYPE);
DHT dht13(DHTPIN13, DHTTYPE);
DHT dht14(DHTPIN14, DHTTYPE);
DHT dht15(DHTPIN15, DHTTYPE);

void setup() {
  Serial.begin(9600);
  pinMode(rele,OUTPUT);
  digitalWrite(rele,LOW);

  dht1.begin();
  dht2.begin();
  dht3.begin();
  dht4.begin();
  dht5.begin();
  dht6.begin();
  dht7.begin();
  dht8.begin();
  dht9.begin();
  dht10.begin();
  dht11.begin();
  dht12.begin();
  dht13.begin();
  dht14.begin();
  dht15.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(200);

  float t1 = dht1.readTemperature();
  float t2 = dht2.readTemperature();
  float t3 = dht3.readTemperature();
  float t4 = dht4.readTemperature();
  float t5 = dht5.readTemperature();
  float t6 = dht6.readTemperature();
  float t7 = dht7.readTemperature();
  float t8 = dht8.readTemperature();
  float t9 = dht9.readTemperature();
  float t10 = dht10.readTemperature();
  float t11 = dht11.readTemperature();
  float t12= dht12.readTemperature();
  float t13 = dht13.readTemperature();
  float t14 = dht14.readTemperature();
  float t15 = dht15.readTemperature();

  Serial.print(t1);
  Serial.print(";");
  Serial.print(t2);
  Serial.print(";");
  Serial.print(t3);
  Serial.print(";");
  Serial.print(t4);
  Serial.print(";");
  Serial.print(t5);
  Serial.print(";");
  Serial.print(t6);
  Serial.print(";");
  Serial.print(t7);
  Serial.print(";");
  Serial.print(t8);
  Serial.print(";");
  Serial.print(t9);
  Serial.print(";");
  Serial.print(t10);
  Serial.print(";");
  Serial.print(t11);
  Serial.print(";");
  Serial.print(t12);
  Serial.print(";");
  Serial.print(t13);
  Serial.print(";");
  Serial.print(t14);
  Serial.print(";");
  Serial.print(t15);
  Serial.println(";");
}
