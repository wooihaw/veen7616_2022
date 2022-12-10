#include "randomforest.h"

Eloquent::ML::Port::RandomForest clf;

void setup() {
    Serial.begin(115200);
}

void loop() {
    float hw[2] = {180, 80};

    Serial.print("Predicted class (you should see '1'): ");
    Serial.println(clf.predict(hw));
    Serial.print("Predicted label (you should see 'Male'): ");
    Serial.println(clf.predictLabel(hw));
    delay(3000);
}