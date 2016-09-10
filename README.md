# HomeAssistant-H801-ESP8266-MQTT-RGB

The is an alternative firmware for the H801 LED dimmer that uses MQTT as a control channel. This makes it easy to integrate into Home Assistant and other Home Automation applications.

## Channels

Channel | Remark
XXXXXXXX/rgb/light/status | Dimmer send current status (ON/OFF)
XXXXXXXX/rgb/light/switch | Set RGB channel ON or OFF
XXXXXXXX/rgb/brightness/status | Dimmer sends current brightness (this will be stored even when you switch the RGB channel off)
XXXXXXXX/rgb/brightness/set | Set brigness (0-255)
XXXXXXXX/rgb/rgb/status | Dimmer reports the RGB value (3 values 0-255)
XXXXXXXX/rgb/rgb/set | Set the RGB values (Format r,g,b) values 0-255 for each channel
XXXXXXXX/w[12]/light/status | Status of W1/W2 channel
XXXXXXXX/w[12]/light/switch | Set W1/W2 ON or OFF
XXXXXXXX/w[12]/brightness/status | Brightness of W1/W2 channel
XXXXXXXX/w[12]/brightness/set | Set brightness of W1/W2 channel

## Home assistant example configuration

```yaml
light:

- platform: mqtt
  name: "RGB"
  state_topic: "0085652A/rgb/light/status"
  command_topic: "0085652A/rgb/light/switch"
  brightness_state_topic: "0085652A/rgb/brightness/status"
  brightness_command_topic: "0085652A/rgb/brightness/set"
  rgb_state_topic: "0085652A/rgb/rgb/status"
  rgb_command_topic: "0085652A/rgb/rgb/set"
  state_value_template: "{{ value_json.state }}"
  brightness_value_template: "{{ value_json.brightness }}"
  rgb_value_template: "{{ value_json.rgb | join(',') }}"
  qos: 0
  payload_on: "ON"
  payload_off: "OFF"
  optimistic: false

- platform: mqtt
  name: "W1"
  state_topic: "0085652A/w1/light/status"
  command_topic: "0085652A/w1/light/switch"
  brightness_state_topic: "0085652A/w1/brightness/status"
  brightness_command_topic: "0085652A/w1/brightness/set"
  state_value_template: "{{ value_json.state }}"
  brightness_value_template: "{{ value_json.brightness }}"
  qos: 0
  payload_on: "ON"
  payload_off: "OFF"
  optimistic: false

- platform: mqtt
  name: "W2"
  state_topic: "0085652A/w2/light/status"
  command_topic: "0085652A/w2/light/switch"
  brightness_state_topic: "0085652A/w2/brightness/status"
  brightness_command_topic: "0085652A/w2/brightness/set"
  state_value_template: "{{ value_json.state }}"
  brightness_value_template: "{{ value_json.brightness }}"
  qos: 0
  payload_on: "ON"
  payload_off: "OFF"
  optimistic: false

```
