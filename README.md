# My QMK Firmware for Preonic

#### By doublespoiler/Skylan Lew

#### Personal Preonic 5x12 keymap firmware. Includes 

## Technologies Used

* QMK
* QMK MSYS
* QMK Toolbox
* C

## Description

```
QWERTY Layer
 * ,-----------------------------------------------------------------------------------.
 * |  esc |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | GUI  |prtscn|   \  | alt  |space | work |  fn  |space | left | down |  up  |right |
 * `-----------------------------------------------------------------------------------'

  Work
 * ,-----------------------------------------------------------------------------------.
 * |  `   |      |      |      |      |      |      |      |      |      |      |  =   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      | del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  <   |   {  |  (   |   [  |      |      |  ]   | )    |   }  |   >  |  `   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|      |      |      |      |      |      |      |      |      |      |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |  `   |      |      |      |      | home | pgdn | pgup |  end |
 * `-----------------------------------------------------------------------------------'

 function
 * ,-----------------------------------------------------------------------------------.
 * |  `   |xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|DT DOWN|DTUP|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|DTPRINT|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  f1  |  f2  |   f3 |   f4 |  f5  |  f6  |  f7  |  f8  |  f9  | f10  |  f11 | f12  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |RGBTOG|  MOD | SAI  | HUI  | VAI  |xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|  to0 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |xxxxxx| RMOD | SAD  | HUD  | VAD  |      |      |xxxxxx|xxxxxx| mute | vold | volu |
 * `-----------------------------------------------------------------------------------'
```


## Setup/Installation Requirements

* Clone with git clone https://github.com/doublespoiler/preonic-firmware
  * Or clone by downloading ZIP
* Drag and drop the .bin file from my_firmware into QMK toolbox
  * Reset keyboard
  * Flash
* The original keymap.c is located in /keyboards/preonic/keymaps/doubespoiler for editing. Please see original QMK documentation for editing instructions and keycodes

## Known Bugs

* I tried to get sound to work, but it didn't

## License

GNU GPL

Copyright (c) Jack Humbert