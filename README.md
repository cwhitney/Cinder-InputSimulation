# Cinder-InputSimulation

An OSX header-only utility to simulate native input.

### Usage
```
#include "InputSimulation.h"
...
// outputs 'heLLO'
sb::InputSimulation::keyTap( KeyEvent::KEY_h );
sb::InputSimulation::keyTap( KeyEvent::KEY_e );
sb::InputSimulation::keyTap( KeyEvent::KEY_l sb::InputSimulation::KeyOptions().shiftDown()  );
sb::InputSimulation::keyTap( KeyEvent::KEY_l sb::InputSimulation::KeyOptions().shiftDown()  );
sb::InputSimulation::keyTap( KeyEvent::KEY_o sb::InputSimulation::KeyOptions().shiftDown()  );

// Presses command + 's' to save
sb::InputSimulation::keyTap( KeyEvent::KEY_s sb::InputSimulation::KeyOptions().accelDown()  );
```

It's recommended to use Cinder's `KeyEvent` enum for consistency, but because Cinder uses character ASCII values as their enum value, it allows you do things like this:

```
// outputs 'hi'
sb::InputSimulation::keyTap( 'h' );
sb::InputSimulation::keyTap( 'i' );
```

### Contributing
All the values aren't mapped. A pull request helping with more values, or with PC/linux compatibility would be welcome.

OSX keymap:
[https://stackoverflow.com/questions/3202629/where-can-i-find-a-list-of-mac-virtual-key-codes](https://stackoverflow.com/questions/3202629/where-can-i-find-a-list-of-mac-virtual-key-codes)