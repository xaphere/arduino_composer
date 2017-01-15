# Arduino Composer

Basic library for composing music for Arduino that utilizes [tone()](https://www.arduino.cc/en/Reference/Tone) function for playback

### Usage
Add the **ArduinoComposer** folder to your _Sketchbook_location_\libraries
and include the ArduinoComposer.h to your project
```C
#include <ArduinoComposer.h>
```
```C
  // BPM: is the beats per minute of the song; the default value is 120, could be changed at any time
  // length: the maximum notes and rests the song could contain.
  //  WARNING!!! The constructor dynamically allocates memory 
  //    so its posible to fail and crash you program if you don't have enough heap space.
  //  When constructed the size of the song object is 3 * length + 3 bytes
  Song song(byte BPM = 120 , byte length = UCHAR_MAX); 
```
```C
  // add middle C or Do held for 1/4 time
  // see notes.h for the supported notes names and times
  song.addNote(Notes::C4, NoteValue::quater);
```
```C
  // basic arithmetic can be used for the times 
  song.addNote(Notes::B4, NoteValue::half - NoteValue::sixteenth);
```
```C
  if( song.addNote(Notes::A4, NoteValue::eighth)) {
    // addNote returns false if it failed to add the note
  }
```
```C
  // addRest adds a note with frequency 0.0f held for a given time
  song.addRest(NoteValue::half);
```
```C
  // remove the last recorded note
  song.popNote();
```
```C
  // removes all recorded notes
  song.clear();
```
```C
  //play the recorded song to a given pin
  //    the pin must support Pulse-width modulation and be configured to OUTPUT
  song.play(speakerPin);
```
