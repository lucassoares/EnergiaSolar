const int sensorLdr = A0;
int ledPin = 13;
int sensorValue = 0;
float power = 0;

void setup(){
    pinMode(ledPin,OUTPUT);
}
void loop(){
    sensorValue = analogRead(sensorLdr);
    //vai somando energia na bateria
    if(sensorValue >= 800){
        power = power + 0.1;
    }
    
    //verifica se a bateria tem carga
    if(power >= 1){
        digitalWrite(ledPin,HIGH);
        power = power - 0.5;
    }
    else{
        digitalWrite(ledPin,LOW);
    }
}