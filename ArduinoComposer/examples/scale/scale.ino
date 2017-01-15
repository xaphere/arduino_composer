#include <ArduinoComposer.h>

Song* scale() {
  Song* out = new Song(120, 16);
  if (out == nullptr) {
    return out;
  }
  out->addNote(Notes::C4, NoteValue::quater);
  out->addNote(Notes::D4, NoteValue::quater);
  out->addNote(Notes::E4, NoteValue::quater);
  out->addNote(Notes::F4, NoteValue::quater);
  out->addNote(Notes::G4, NoteValue::quater);
  out->addNote(Notes::A4, NoteValue::quater);
  out->addNote(Notes::B4, NoteValue::quater);
  out->addNote(Notes::C5, NoteValue::quater);

  out->addNote(Notes::B4, NoteValue::quater);
  out->addNote(Notes::A4, NoteValue::quater);
  out->addNote(Notes::G4, NoteValue::quater);
  out->addNote(Notes::F4, NoteValue::quater);
  out->addNote(Notes::E4, NoteValue::quater);
  out->addNote(Notes::D4, NoteValue::quater);
  out->addNote(Notes::C4, NoteValue::quater);

  out->addRest(NoteValue::half);

  return out;
}

const byte speakerPin = 9; // speaker connected to digital pin 9

void setup() {

  pinMode(speakerPin, OUTPUT);
}

void loop() {

  Song* song = scale();
  if (song != nullptr) {
    song->play(speakerPin);
    delete song;
  }

}
