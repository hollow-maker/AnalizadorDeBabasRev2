//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⣶⣷⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀Version del codigo:    0.9.2
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣷⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ Editado el:            11/01/2026
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀ Programador:           JKodamaX
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀ SO:                    CachyOS x86_64
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀ Kernel:                Linux 6.19.7-1-cachyos
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀ Para microcontrolador: ATmega328p
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠹⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠨⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣏⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀
// ⠀⠀⠀⠀⢸⡆⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢹⣿⢿⡇⠀
// ⠀⢀⣤⣶⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⢿⡌⠷⠂
// ⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⢻⡌⠳⠀⠀
// ⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⢿⣧⡀⠀⠀⠀⠀
// ⠈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠨⠛⠃⠀⠀⠀⠀
// ⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣀⠀⣠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠈⠙⠛⠛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⣀⣤⣶⣾⠷
// ⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⠛⠉⠀
// ⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⡀⠀⠀
//==========================================================================================
//                                        Librerias
//==========================================================================================
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <PID_v1.h>

//==========================================================================================
//                                        Definición de pines
//==========================================================================================
#define PinSensorDeTurbidez A3
#define PinSensorDeTemperatura A2
#define PinCalentadorPWM 5
#define PinLED 13
#define PinBateria A1
#define PinLEDTurbidimetria 7

//==========================================================================================
//                                  Configuración pantalla OLED
//==========================================================================================
#define AnchoPantalla 128
#define AltoPantalla 64
#define ResetOled 4
#define DireccionOled 0x3c

//==========================================================================================
//                                   Constantes del sistema
//==========================================================================================
const float temperaturaObjetivo = 65.0;
const float umbralDeTurbidez = 20.0;
const unsigned long tiempoLAMP = 60;
bool ok;

//==========================================================================================
//                          Variables para el gráfico de turbidez
//==========================================================================================
const short maxMuestras = 120;
int muestrasTurbidez[maxMuestras];
unsigned long ultimoMuestreo = 0;
const unsigned long IntervaloDeMuestreo = 30000;  // 30 segundos
bool mostrandoGrafica = false;

//==========================================================================================
//                                      Variable oled
//==========================================================================================
Adafruit_SSD1306 oled(AnchoPantalla, AltoPantalla, &Wire, ResetOled);

//==========================================================================================
//                                       Variables PID
//==========================================================================================
double temperaturaActual, salidaPID, setpointPID;
double kp = 50, ki = 0.78, kd = 0.1;
PID miPID(&temperaturaActual, &salidaPID, &setpointPID, kp, ki, kd, DIRECT);

//==========================================================================================
//                                     Variables sensores
//==========================================================================================
float cambioRelativoTurbidez;
float turbidezActual;
float voltajeSistema = 5.0;
bool resultadoPrueba = false;

float voltajeBateria;
int cargaBateria;
float R1 = 10000;
float R2 = 1130;
const float VMin = 9.0;
const float VMax = 12.22;
float voltaje = 0;
//==========================================================================================
//                                         Icono del ADN
//==========================================================================================
const unsigned char ICONO_DNA[] PROGMEM = {
  0x04, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x02, 0x00, 0x00, 0x00, 0x00, 0x30,
  0x00, 0x00, 0x30, 0x01, 0x80, 0x00, 0x00, 0x00, 0x30, 0x01, 0xc0, 0x20, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0xc0, 0x00, 0x03, 0x00,
  0x00, 0x07, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x60, 0x00, 0x00, 0x20, 0x00, 0x01,
  0x80, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x82, 0x00, 0x00, 0x00,
  0x00, 0x30, 0x00, 0x00, 0x30, 0x01, 0x80, 0x00, 0x00, 0x00, 0x30, 0x03, 0xc0, 0x20, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x10, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x04, 0x00, 0x80, 0x04, 0x00, 0xc0, 0x00,
  0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x60, 0x00, 0x00, 0x20,
  0x00, 0x01, 0x80, 0x00, 0x06, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x82, 0x00,
  0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x01, 0x80, 0x00, 0x00, 0x00, 0x30, 0x07, 0xc0, 0x20,
  0x00, 0x00, 0x00, 0x00, 0x40, 0x10, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x04, 0x00, 0x80, 0x04, 0x00,
  0xc0, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00
};

//==========================================================================================
//                                             Main
//==========================================================================================
void setup() {
  inicializarPines();
  inicializarPantalla();
  inicializarPID();

  dibujarMarco();
  oled.setCursor(10, 30);
  oled.print("Inicializando");
  oled.setCursor(10, 40);
  oled.print("Espere...");
  oled.display();
  delay(3000);
  autochequeo();

  ejecutarProtocoloLAMP();
  digitalWrite(PinLED, HIGH);
  }
}

void loop() 
{
  //revisandoSensores();
  mostrarResultadoFinal();
  delay(2000);
}

//==========================================================================================
//                                       Inicializaciones
//==========================================================================================
void inicializarPines() {
  pinMode(PinLED, OUTPUT);
  pinMode(PinSensorDeTemperatura, INPUT);
  pinMode(PinSensorDeTurbidez, INPUT);
  pinMode(PinCalentadorPWM, OUTPUT);
  pinMode(PinBateria, INPUT);
  pinMode(PinLEDTurbidimetria, OUTPUT);

  digitalWrite(PinLED, LOW);
  digitalWrite(PinLEDTurbidimetria, LOW);
  analogWrite(PinCalentadorPWM, 0);
}

void inicializarPantalla() {
  Wire.begin();
  oled.begin(SSD1306_SWITCHCAPVCC, DireccionOled);
  oled.clearDisplay();
}

void inicializarPID() {
  setpointPID = temperaturaObjetivo;
  miPID.SetMode(AUTOMATIC);
  miPID.SetOutputLimits(0, 255);
}

void autochequeo() {
  leerTemperatura();
  leerVoltajeSistema();
  leerTurbidez();
  leerBateria();

  if (voltajeSistema < 4 || voltajeSistema > 6) mostrarError("Voltaje sist");
  if (temperaturaActual < 0 || temperaturaActual > 30) mostrarError("Sensor temp");
  if (turbidezActual < 50 || turbidezActual > 400) mostrarError("Sensor luz");
  if (cargaBateria < 40) mostrarError("Bateria Baja");
}

//========================================================================================== 
//                                   Lectura de sensores
//==========================================================================================
void leerVoltajeSistema() {
  ADMUX = _BV(REFS0) | _BV(MUX3) | _BV(MUX2) | _BV(MUX1);
  delay(2);
  ADCSRA |= _BV(ADSC);
  while (bit_is_set(ADCSRA, ADSC))
    ;
  voltajeSistema = ((1.1 * (4.98 / 4.25)) * 1023) / ADC;
}

void leerTemperatura() {
  const int MUESTRAS = 20;
  const double COEF_A = 0.0008271674167;
  const double COEF_B = 0.0002087945411;
  const double COEF_C = 0.00000008061094912;

  int suma = 0;
  for (int i = 0; i < MUESTRAS; i++) {
    suma += analogRead(PinSensorDeTemperatura);
    delay(1);
  }

  leerVoltajeSistema();
  float voltaje = (suma / (float)MUESTRAS) * voltajeSistema / 1023.0;
  float resistenciaTermistor = (voltaje * 100000) / (voltajeSistema - voltaje);
  double logResistencia = log(resistenciaTermistor);

  temperaturaActual = (1.0 / (COEF_A + COEF_B * logResistencia + COEF_C * pow(logResistencia, 3.0))) - 273.15;
}

void leerTurbidez() {
  digitalWrite(PinLEDTurbidimetria, HIGH);
  const int MUESTRAS = 50;
  int suma = 0;
  for (int i = 0; i < MUESTRAS; i++) {
    suma += analogRead(PinSensorDeTurbidez);
    delay(2);
  }
  digitalWrite(PinLEDTurbidimetria, LOW);
  float lectura = suma / (float)MUESTRAS;
  turbidezActual = lectura;
}

void leerBateria() {
  const int MUESTRAS = 50;

  int suma = 0;
  for (int i = 0; i < MUESTRAS; i++) {
    suma += analogRead(PinBateria);
    delay(2);
  }
  float entrada = suma / MUESTRAS;
  leerVoltajeSistema();
  voltaje = entrada * voltajeSistema / 1023;
  //nivelBateria = constrain((voltaje - VOLT_MIN) / (VOLT_MAX - VOLT_MIN) * 100.0, 0.0, 100.0);
  // nivelBateria = voltaje;
  voltajeBateria = voltaje * (R1 + R2) / R2;
  cargaBateria = ((voltajeBateria - VMin) / (VMax - VMin)) * 100.0;

  if (cargaBateria < 0) cargaBateria = 0;
  if (cargaBateria > 100) cargaBateria = 100;
}

//==========================================================================================
//                                       Control de temp
//==========================================================================================
bool temperaturaEstable() {
  static float tempAnterior = 0;
  static int contadorEstable = 0;
  const float MargenDeEstabilidad = 0.2f;
  const int IteracionesRequeridas = 10;

  bool estable = abs(temperaturaActual - tempAnterior) <= MargenDeEstabilidad;
  tempAnterior = temperaturaActual;

  if (estable) {
    contadorEstable++;
  } else {
    contadorEstable = 0;
  }

  return contadorEstable >= IteracionesRequeridas && temperaturaActual >= (temperaturaObjetivo - MargenDeEstabilidad);
}

void controlarTemperatura() {
  miPID.Compute();
  analogWrite(PinCalentadorPWM, (int)salidaPID);

  // Protección contra sobrecalentamiento
  if (temperaturaActual > temperaturaObjetivo + 5.0) {
    analogWrite(PinCalentadorPWM, 0);
    mostrarError("Temp alta!");
    while (true)
      ;
  }
}

//==========================================================================================
//                                          Graficos
//==========================================================================================
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣶⣶⣶⣶⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣶⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⣹⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⢀⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠊⣿⣿⣟⡿⣿⣿⣿⣿⡿⡁⣿⣿⣿⠀⠀⠀⠀⣀⣤⡾⣦⣄⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⣀⣴⣾⠋⠉⣻⡷⢦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠃⢽⣿⣿⠿⢻⠏⠑⢀⣿⣿⣿⣀⣠⡶⠋⢹⣷⣄⢠⣿⣿⡶⣤⡀⠀⠀⠀
// ⠀⠀⣀⣴⣾⢫⣿⡿⠄⣾⣿⠇⠀⣼⡟⠛⠛⣻⣿⣧⣀⣴⣶⣾⣿⣿⣷⣶⣄⣰⡟⣻⣿⡟⠉⣿⣷⡀⠘⣿⣿⠀⠙⢿⣇⢼⣿⣷⢦⣄
// ⣴⡞⢹⣿⡿⣸⠟⠀⠀⣿⠏⠀⢸⣿⡟⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣿⣿⡇⠀⠻⣿⡇⠀⠈⢻⠀⠀⠀⠛⠌⠻⣿⡠⣿
// ⣿⡏⡿⠏⠀⠁⠀⠀⠀⠋⡃⠀⠸⡿⠀⠀⢸⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣙⣿⠁⠀⠀⠹⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠃⠙
// ⠋⠀⠁⠀⠀⠄⠀⠀⠀⢀⠁⠀⠀⠁⠀⠀⢘⠃⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠸⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⠛⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⣰⡀⢀⡀⣻⣄⡀⢀⣠⣴⣿⣿⣿⠃⢠⣿⣿⣿⣿⣿⣿⣿⣿⡆⠹⣿⣿⣿⣶⣄⡀⢀⣰⣏⣀⣀⣠⣇⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠙⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠋⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠙⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠈⠉⠛⠋⠁⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠈⠙⠛⠛⠉⠉⠛⠀⠀⠀⠀⠀⠀⠀⠀
void dibujarMarco() {
  oled.clearDisplay();
  oled.setTextColor(WHITE);
  oled.drawRect(0, 0, AnchoPantalla, AltoPantalla, WHITE);
  oled.drawBitmap(108, 1, ICONO_DNA, 20, 64, WHITE);
}

void mostrarError(String mensaje) {
  dibujarMarco();
  oled.setTextSize(1);
  oled.setCursor(10, 30);
  oled.print("ERROR:");
  oled.setCursor(10, 40);
  oled.print(mensaje);
  oled.display();
  analogWrite(PinCalentadorPWM, 0);
  ok = false;
  
  while (true) {
    digitalWrite(PinLED, HIGH);
    delay(100);
    digitalWrite(PinLED, LOW);
    delay(100);
  }
}

void mostrarGraficaTurbidez() {
  int indiceMuestra = 119;
  int minTurbidez = 0, maxTurbidez = 100;
  
  dibujarMarco();
  oled.setTextSize(1);

  oled.drawLine(10, 10, 10, 54, WHITE);
  oled.drawLine(10, 54, 105, 54, WHITE);

  oled.setCursor(10, 4);
  oled.print(maxTurbidez);
  oled.setCursor(1, 50);
  oled.print(minTurbidez);
  oled.setCursor(50, 55);
  oled.print("Tiempo");

  for (int i = 0; i < indiceMuestra; i++) {
    if (muestrasTurbidez[i] >= 0) {
      int x = 10 + (i * 90 / (indiceMuestra - 1));
      int y = 44 - map(muestrasTurbidez[i], minTurbidez, maxTurbidez, 0, 44);

      oled.setCursor(x, y);
      oled.print(".");
    }
  }
  oled.display();
}

void mostrarResultadoFinal() {
  mostrandoGrafica = !mostrandoGrafica;
  if (mostrandoGrafica) {
    mostrarGraficaTurbidez();
  } else {
    dibujarMarco();
    oled.setTextSize(2);
    oled.setCursor(10, 30);

    if (resultadoPrueba) {
      oled.print("POSITIVO");
    } else {
      oled.print("NEGATIVO");
    }
    oled.display();
  }
}
//==========================================================================================
//                                       Funciones lamp
//==========================================================================================
void precalentar() {
  while (!temperaturaEstable()) {
    leerTemperatura();
    leerBateria();
    controlarTemperatura();

    dibujarMarco();

    oled.setCursor(55, 5);
    oled.print("Bat ");
    oled.print(cargaBateria, 1);
    oled.print("%");

    oled.setCursor(10, 20);
    oled.print("Precalentando");
    oled.setCursor(10, 30);
    oled.print("Espere...");
    oled.setCursor(10, 50);
    oled.print("T ");
    oled.print(temperaturaActual, 1);
    oled.print(" C");
    oled.display();
  }
}

void ejecutarReaccionLAMP() {
  unsigned long tiempoInicio = millis();
  float turbidezInicial = turbidezActual;

  // Inicializar array de muestras
  for (int i = 0; i < maxMuestras; i++) {
    muestrasTurbidez[i] = 0;
  }

  //colocar la turbidez inicial
  int indiceMuestra = 0;

  while ((millis() - tiempoInicio) < (tiempoLAMP * 60000UL)) {
    leerTemperatura();
    leerTurbidez();
    leerBateria();
    controlarTemperatura();

    cambioRelativoTurbidez = (abs(turbidezInicial - turbidezActual) / turbidezInicial) * 100;
    
    if (millis() - ultimoMuestreo >= IntervaloDeMuestreo && indiceMuestra < maxMuestras) {
      muestrasTurbidez[indiceMuestra] = (int)cambioRelativoTurbidez;
      indiceMuestra = indiceMuestra + 1;
      ultimoMuestreo = millis();
    }



    dibujarMarco();

    oled.setCursor(55, 5);
    oled.print("Bat ");
    oled.print(cargaBateria, 1);
    oled.print("%");

    oled.setCursor(10, 20);
    oled.print("Realizando LAMP");
    oled.setCursor(10, 30);
    oled.print("Progreso: ");
    oled.print((millis() - tiempoInicio) / 60000);
    oled.print("m");
    oled.setCursor(10, 40);
    oled.print("Cambio: ");
    oled.print(cambioRelativoTurbidez, 1);
    oled.print("%");
    oled.setCursor(10, 50);
    oled.print("T ");
    oled.print(temperaturaActual, 1);
    oled.print(" C");
    oled.display();

    if (cambioRelativoTurbidez >= umbralDeTurbidez) {
      resultadoPrueba = true;
      break;
    }
  }
}

void ejecutarProtocoloLAMP() {
  leerTurbidez();
  precalentar();
  ejecutarReaccionLAMP();
  analogWrite(PinCalentadorPWM, 0);
}

//==========================================================================================
//                                   Funciones de pruebas
//==========================================================================================
// ⢻⣕⢯⢿⣯⡷⣹⣿⣿⣦⠹⣿⡆⢿⣿⡄⡆⢿⣿⣷⣿⣇⣿⣿⣿⣿⣸⣿⣿⣿⣿⡟⣰⠟⠛⠻⢿⣴⣿⠏⣴⣿⣟⣾⠟⢀⣵⣿⣿⣿
// ⢷⣝⢷⣱⣟⣿⠋⣌⢿⣿⣷⡹⣿⣬⣿⠿⠿⣛⣛⣉⣭⣭⣭⣭⣭⣭⣝⣛⡻⠿⢿⣴⡟⠀⠀⠀⢸⡿⢣⣾⣿⠟⠛⠙⠛⠛⢷⣿⣿⣿
// ⠙⠻⣷⣏⣿⢣⠁⢻⣷⡙⡿⢟⣫⣥⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣬⡇⠀⠀⠀⣾⣵⣿⡟⠀⠀⣴⣶⣦⠀⠀⠙⣯⣵
// ⣿⣿⣍⣿⢣⠉⠀⠶⣿⣷⠐⣿⣿⣿⡿⣿⣿⣿⣿⣿⣻⣿⣿⠿⢿⣛⣛⣭⣭⣭⣶⣶⡇⠀⠀⣸⣧⣭⣽⣇⠀⠀⢸⣿⣿⠁⠀⠀⣿⣿
// ⡙⠿⣿⠇⠆⠀⢀⣾⣾⡝⠇⢿⣿⡿⣕⣪⣿⡿⢟⣛⣭⣵⣶⣿⣿⣿⣿⣿⡿⠿⠿⢻⡇⠀⢠⡟⠀⠀⠀⠈⡳⠶⣳⠞⠁⠀⠀⣰⣿⡿
// ⣿⣷⡿⠀⠀⠀⢸⣿⣿⣿⢮⣿⣷⡿⢟⣫⣵⣾⣿⣿⣿⣿⠿⠟⠛⠉⠁⠀⠀⠀⠀⢸⡇⠀⣾⡀⠀⠀⠀⠀⡀⡼⠁⠀⣀⣴⡾⣟⡭⠖
// ⠿⣿⡇⠀⠀⠀⣿⣿⡿⢏⡾⢟⣥⣶⣿⡯⣿⡿⠟⠋⠁⠀⠀⠀⠀⠀⠤⠶⠂⠘⣴⠞⠂⠸⣯⢈⠄⡀⠎⡐⣸⠇⠀⣼⣵⡟⢻⣡⣴⣾
// ⣬⣿⢰⣀⣀⣤⣾⠶⠞⣭⣾⣿⣿⣿⠟⠋⠁⠀⠀⢀⠀⠀⠀⠩⠁⠀⠞⣈⣷⠐⣯⠀⠀⠀⣽⠂⣾⣿⣦⣴⠛⠁⠘⣯⠻⣿⣿⣿⣿⣿
// ⢾⡇⣾⣿⠟⢩⣾⣿⣿⠇⢬⠛⠋⠀⠀⠀⢠⣤⠄⠀⠀⠀⣿⡶⡤⠀⢀⠻⢿⠀⢸⠳⠶⠞⣷⡀⠛⠿⠿⣯⡀⠀⠀⡼⢷⡹⣿⣟⣛⣩
// ⣿⢸⣿⠟⠀⠀⠨⣶⠷⠀⡈⠃⢀⡀⠠⠚⣿⣿⠁⡀⢠⠀⠨⠁⠄⠀⠨⠈⠂⠀⢸⡌⠀⡀⣿⣧⠀⠁⠀⢎⡛⠛⠛⠡⠀⢳⠹⣿⣿⣟
// ⣿⠘⣡⣾⡀⡀⠀⣁⣀⣤⣑⠀⠈⠁⠈⠊⠂⠀⠀⣇⣿⠀⠀⣀⣀⣀⣤⣤⣤⣤⣼⣥⣤⣥⠿⢿⠆⠀⠁⠁⠈⠀⠀⠀⠀⠀⠃⢻⣿⣿
// ⢣⣾⣿⡿⠋⢀⡘⠻⠟⠛⠁⠀⠀⣀⡤⣀⣤⣶⣶⣬⣙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣫⣾⣿⣿⣿⣿⣮⡻⣶⡆⠀⠀⢠⣇⠀⢸⣿⣿
// ⣿⠿⢁⠀⠀⢸⠀⣀⡀⠠⢰⢰⣿⣟⣾⣿⣿⣿⣿⣿⡿⠷⡽⣿⣿⣿⣿⣿⣿⣿⡏⣼⣿⣿⣿⣿⣿⡟⠋⠙⢸⡇⠀⢰⢸⣿⠀⢸⡿⠾
// ⠁⠀⢸⠀⠀⣸⠀⠃⠀⠀⣿⡎⣿⢸⣿⣿⣿⣿⣿⣟⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⡇⢿⣿⣿⣿⣿⣿⣇⠀⠀⣠⡇⠀⠘⣇⢿⠀⢸⡿⣿
// ⠀⠀⠸⡀⠀⣿⠓⡇⢘⠿⠹⡿⡸⡼⣿⣿⣿⣿⣿⣿⣶⣤⣖⣿⣿⣿⣿⣿⣿⣿⣿⡘⢿⣿⣿⣿⣿⣿⣿⣟⣼⣇⠀⠀⠈⠪⡠⣿⣿⣿
// ⠀⠈⠀⢇⠀⢻⠀⡀⠈⢇⠀⠐⠱⡑⣌⡻⣿⣿⣿⣿⠿⣫⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣝⣛⣛⣛⣻⣵⣿⣿⣿⣶⠲⠂⣆⢦⣤⣉⣻
// ⠁⠀⠀⠘⡄⢸⠀⠠⠀⡐⠘⢀⣀⣌⣌⣿⣷⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⢸⡘⣿⣿⣿
// ⠀⠀⠀⠀⠐⠘⡄⠀⠀⠠⠅⡈⠉⢩⠉⠉⣤⣙⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠈⡇⣿⠛⠿
// ⠀⠀⠀⠀⠀⠀⢣⠀⠀⠀⠀⡀⠀⠀⢡⠁⢌⢻⣿⣿⣿⣿⢏⣦⣭⣭⣮⣭⡁⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⡇⢸⡷⢦
// ⠀⢀⠀⠀⠀⠀⠈⡆⠀⠀⠀⠁⢀⠀⠀⠂⠔⢡⠹⣿⣿⣿⢺⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⠿⢛⠁⠀⠀⠀⠀⠀⠀⡇⣼⣛⠷
// ⢀⠄⠀⣼⣄⣀⣀⡀⠰⡄⠀⠀⠀⡠⠀⠀⣁⠡⠂⢻⣿⣿⣦⣍⡻⠿⠿⢟⣡⣿⡿⠿⠿⢛⣛⣭⣶⣾⠃⠀⠀⠀⠀⠀⠀⠀⡇⣿⢿⣿
// ⠘⠀⢰⣿⣿⣿⣿⣿⣄⣿⡄⠀⠀⢃⠀⠀⠸⢤⠈⡀⢭⣩⣭⣭⣭⣉⠭⣶⢠⣶⢶⢄⠛⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡶⢰⣿⣷⣎
// ⣶⣤⣼⡿⣟⣽⣿⣿⣿⣿⣧⣤⣤⣤⡤⠀⣀⡁⠐⠀⢠⣙⠛⠛⠟⠛⠫⢦⠞⣩⣽⣮⡻⣿⣶⣮⣭⣛⣛⣛⢿⣿⣿⢋⣶⣶⣎⢿⣿⣿
// ⣾⣛⢇⣫⣿⣿⢫⣶⣶⡝⣿⢟⣋⣥⣶⣿⣿⣿⣿⣿⣿⡟⢸⣿⣿⢟⣧⣬⢱⣮⣝⣿⣿⡸⣿⣿⣿⣿⣿⣿⡎⣛⠟⡨⢹⠻⣋⣾⣿⣯
// ⠀⣱⣾⣿⣿⡿⡘⠿⠿⡣⠁⠿⢻⣿⣿⣿⣿⣿⣿⣿⠏⡀⢺⣿⢱⣿⣿⡟⣄⠻⣿⣷⡹⣧⠹⣿⣿⣿⣿⣿⡇⣿⠺⣥⡰⣵⣟⣮⠻⣿

void revisandoSensores()
{
  leerTemperatura();
  leerBateria();
  leerTurbidez();

  dibujarMarco();

  oled.setCursor(55, 5);
  oled.print("Bat ");
  oled.print(cargaBateria, 1);
  oled.print("%");

  oled.setCursor(10, 20);
  oled.print("Haciendo");
  oled.setCursor(10, 30);
  oled.print("Pruebas...");
  
  oled.setCursor(10, 50);
  oled.print("T: ");
  oled.print(temperaturaActual, 1);

  oled.setCursor(55, 50);
  oled.print("O: ");
  oled.print(turbidezActual, 1);
  oled.display();

  delay(500);
}