#include <Arduino.h>
#include <Preferences.h>
#include <nvs_flash.h>

void getSettings(void);
void saveUsername(String newUserName);
void saveUI(bool useBLE);
void saveTxPower(int txPower);
void saveLoraFrq(int loraFrq);
void saveSpreadingFactor(int spreadFactor);

extern String username;
extern bool useBLE;
extern int txPower;
extern int loraFrq;
extern int spreadingFactor;
