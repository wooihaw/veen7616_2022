#include "linear_regression.h"

Eloquent::ML::Port::LinearRegression rgr;

void setup() {
    Serial.begin(115200);
}

void loop() {
    float hg[2];

    Serial.print("Enter height in cm: ");
    hg[0] = recvWithEndMarker();
    Serial.println(hg[0]);    
    Serial.print("Enter gender (female->0, male->1): ");
    hg[1] = recvWithEndMarker();
    Serial.println(hg[1]);
    Serial.print("Predicted weight: ");
    Serial.print(rgr.predict(hg));
    Serial.println(' kg');
    delay(500);
}

float recvWithEndMarker() {
    char endMarker = '\n';
    while (Serial.available() == 0);
    String incoming = Serial.readStringUntil(endMarker);
    return incoming.toFloat();
}