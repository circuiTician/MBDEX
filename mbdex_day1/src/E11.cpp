#include <Arduino.h>  // Always include this in PlatformIO projects

void setup() {
  // Serial.begin() starts communication between ESP32 and your computer
  // 115200 is the "baud rate" — speed of communication in bits per second
  // Your Serial Monitor must be set to the SAME baud rate to read messages
  Serial.begin(115200);

  // Small delay to let Serial connection settle before printing
  delay(1000);

  // Print a welcome message — this runs ONCE when ESP32 powers on
  Serial.println("Hello from ESP32!");
  Serial.println("====================");

  // xPortGetCoreID() tells us which CPU core is running this code
  // ESP32 has 2 cores: Core 0 (Wi-Fi/OS) and Core 1 (your code)
  Serial.print("Running on Core: ");
  Serial.println(xPortGetCoreID());  // Should print 1

  Serial.println("Setup complete!");
}

void loop() {
  // loop() runs forever after setup() finishes
  // We print a message every 2 seconds to show the ESP32 is alive

  Serial.println("ESP32 is running... (loop)");
  delay(2000);  // Wait 2000 milliseconds = 2 seconds
}