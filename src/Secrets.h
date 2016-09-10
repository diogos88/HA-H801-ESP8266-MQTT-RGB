#pragma once

const char* mqtt_server = "192.168.1.89";
// Password for update server
const char* username = "admin";
const char* password = "";

// Light
// the payload that represents enabled/disabled state, by default
const char* LIGHT_ON = "ON";
const char* LIGHT_OFF = "OFF";

// MQTT topics
// state, brightness, rgb
const char* MQTT_UP = "active";
char* MQTT_LIGHT_RGB_STATE_TOPIC = (char*)"XXXXXXXX/rgb/light/status";
char* MQTT_LIGHT_RGB_COMMAND_TOPIC = (char*)"XXXXXXXX/rgb/light/switch";
char* MQTT_LIGHT_RGB_BRIGHTNESS_STATE_TOPIC = (char*)"XXXXXXXX/rgb/brightness/status";
char* MQTT_LIGHT_RGB_BRIGHTNESS_COMMAND_TOPIC = (char*)"XXXXXXXX/rgb/brightness/set";
char* MQTT_LIGHT_RGB_RGB_STATE_TOPIC = (char*)"XXXXXXXX/rgb/rgb/status";
char* MQTT_LIGHT_RGB_RGB_COMMAND_TOPIC = (char*)"XXXXXXXX/rgb/rgb/set";

char* MQTT_LIGHT_W1_STATE_TOPIC = (char*)"XXXXXXXX/w1/light/status";
char* MQTT_LIGHT_W1_COMMAND_TOPIC = (char*)"XXXXXXXX/w1/light/switch";
char* MQTT_LIGHT_W1_BRIGHTNESS_STATE_TOPIC = (char*)"XXXXXXXX/w1/brightness/status";
char* MQTT_LIGHT_W1_BRIGHTNESS_COMMAND_TOPIC = (char*)"XXXXXXXX/w1/brightness/set";

char* MQTT_LIGHT_W2_STATE_TOPIC = (char*)"XXXXXXXX/w2/light/status";
char* MQTT_LIGHT_W2_COMMAND_TOPIC = (char*)"XXXXXXXX/w2/light/switch";
char* MQTT_LIGHT_W2_BRIGHTNESS_STATE_TOPIC = (char*)"XXXXXXXX/w2/brightness/status";
char* MQTT_LIGHT_W2_BRIGHTNESS_COMMAND_TOPIC = (char*)"XXXXXXXX/w2/brightness/set";

char* chip_id = (char*)"00000000";
char* myhostname = (char*)"esp00000000";