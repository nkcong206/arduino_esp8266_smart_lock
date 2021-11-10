#include <EEPROM.h>

char auth[33] = "2N598mrUatO83WklL5lJxb7L8aC99KpN";
char ssid[33] = "LUCI CROP" ;
char pass[21] = "luci1109";

char auth1[33];
char ssid1[33];
char pass1[21];

void setup() 
  {
    EEPROM.begin(512);
    Serial.begin(9600);
    EEPROM.put( 0, auth);  // SSID dài 32 byte
    delay(10);
    EEPROM.put( 33, ssid);  
    delay(10);
    EEPROM.put( 66, pass);  
    delay(10);
    EEPROM.commit();

    EEPROM.get( 0, auth1);  // mã blynk dài 32 byte
    delay(10);
    EEPROM.get( 33, ssid1);  // SSID dài 32 byte
    delay(10);
    EEPROM.get( 66, pass1);  // Pass dài 20 byte
    delay(10);

    Serial.print(auth1);
    Serial.print(ssid1);
    Serial.print(pass1);
  }

void loop() 
  {
    
 
}
