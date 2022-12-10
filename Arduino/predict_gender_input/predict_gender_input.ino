#include "randomforest.h"

Eloquent::ML::Port::RandomForest clf;

void setup() {
    Serial.begin(115200);
}

void loop() {
    float hw[2];

    Serial.print("Enter height in cm: ");
    hw[0] = recvWithEndMarker();
    Serial.println(hw[0]);    
    Serial.print("Enter weight in kg: ");
    hw[1] = recvWithEndMarker();
    Serial.println(hw[1]);
    Serial.print("Predicted class: ");
    Serial.println(clf.predict(hw));
    Serial.print("Predicted label: ");
    Serial.println(clf.predictLabel(hw));
    delay(500);
}

float recvWithEndMarker() {
    char endMarker = '\n';
    while (Serial.available() == 0);
    String incoming = Serial.readStringUntil(endMarker);
    return incoming.toFloat();
}