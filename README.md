# Millipe For Pokitto

A direct port of [Millipe](https://github.com/Dreamer2345/Millipe), an Centipede Clone by @Dreamer2345.
Currently there is no sound, but hopefully that will change someday.
I hope the commit history of this repo can be of use to people trying to learn how to make direct ports of Arduboy games for Pokitto.

## How To Compile

### PlatformIO + VSCode

(Note that 'the root folder' refers to the file containing the `src` folder, `platformio.ini` and `pokitto_pre.py`.)

* Download the [Arduboy2 implementation for Pokitto](https://github.com/Pharap/PokittoArduboy2Prototype)
* Place `Arduboy2`, `Arduino` and `avr-libc` in the root folder
* Open the root folder in VSCode
* Run `PlatformIO: Build`
