#include "WifiConnect.h"
#include "AccelSensor.h"

# include <HardwareSerial.h>
WifiConnect wifi;
AccelSensor accel;
String data;

HardwareSerial SerialPort(2);

char *ssid = "brisa-2261695";
char *password = "f2qovena";
char *broker_mqtt = "broker.hivemq.com";
int broker_port = 1883;
char *topic = "/aviacao";

void setup()
{
    SerialPort.begin(115200, SERIAL_8N1, 16, 17);
    // Serial.begin(115200);
    //wifi.WifiSetup(ssid, password);
    accel.setConfig();
    // wifi.MqttSetup(broker_mqtt, broker_port);
    // wifi.ConnectMqtt(topic);
    // wifi.HttpRegister();
}

void loop()
{
    accel.getEvent();
    data = String(accel.ax) +","+ String(accel.ay) +","+ String(accel.az) ;
    SerialPort.print(data);
   // Serial.println(data);

    // wifi.MqttPublish(topic, data);
      delay(1000);
    // wifi.MqttLoop();
}
