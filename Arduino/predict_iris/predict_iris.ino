#include "classifier.h"

Eloquent::ML::Port::RandomForest clf;

void setup() {
    Serial.begin(115200);
}

void loop() {
    float irisSample[4] = {6.0, 2.2, 4.0, 1.0};

    Serial.print("Predicted class (you should see '1'): ");
    Serial.println(clf.predict(irisSample));
    Serial.print("Predicted label (you should see 'versicolor'): ");
    Serial.println(clf.predictLabel(irisSample));    
    delay(3000);
}