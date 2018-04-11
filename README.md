# pioproject
Example project structure for supporting both PlatformIO and Arduino IDE builds in the same project

## PlatformIO support

In `src/config.h`, be sure top line is commented out:

```
// #define __USE_ARDUINO_IDE__
```

## Arduino IDE support

In `src/config.h` uncomment at the top of the file:

```
#define __USE_ARDUINO_IDE__
```

Copy or link libraries into your Arduino library directory.

E.g.: `cp -r ~/Documents/PlatformIO/Projects/pioproject/lib/* ~/Documents/Arduino/libraries`

or: `ln -s ~/Documents/PlatformIO/Projects/pioproject/lib/blinker ~/Documents/Arduino/libraries/blinker`
