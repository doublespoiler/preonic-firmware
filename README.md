# My QMK Firmware for Preonic

#### By doublespoiler/Skylan Lew

#### Personal Preonic 5x12 keymap firmware.  

## Technologies Used

* QMK
* QMK MSYS
* QMK Toolbox
* C

## Description

The idea was to make a layout I could use for programming and gaming, because I don't like toggle layers.
QWERTY layer is standard, with a dedicated enter key, because I'm still trying to figure out my dynamic tapping rate. 
The Dynamic Tapping Rate can be changed with FN+0,-, and printed with fn+bksp, default is 200ms

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
 * |  `   |xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|DT DOWN|DT UP|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|DTPRNT|
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
* The original keymap.c is located in /keyboards/preonic/keymaps/doubespoiler for editing. Please see [original QMK documentation](https://docs.qmk.fm/#/) for editing instructions and keycodes

## Known Bugs

* Sound settings are included, but I have them turned off.

## License

GNU GPL

Copyright (c) Jack Humbert