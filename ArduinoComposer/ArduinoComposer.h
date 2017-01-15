/*
	ArduinoComposer.h - Library for composing small pieces of music 
	utilizing Arduinos tone() function
	Created by Ivan Nikolov, January 10, 2017.
*/

#ifndef COMPOSER_H
#define COMPOSER_H

#include <limits.h>
#include "notes.h"


static const byte MAX_SONG_LENGTH = UCHAR_MAX;

class Song {
private:
	byte bpm = 0;
	byte length = 0;
	byte noteCount = 0;
	NoteValue* values;
	Notes* notes;


public:
	// Song constructor
	//	@bpm : beats per minute
	//	@length : songs notes and rests
	Song(byte bpm = 120, byte length = MAX_SONG_LENGTH) :
		bpm(bpm),
		length(length)
	{
		if (length > 0) {
			notes = new Notes[length];
			values = new NoteValue[length];
		}
	}
	~Song() {
		if (notes != nullptr) {
			delete[] notes;
		}
		if (values != nullptr) {
			delete[] values;
		}
	}

	byte Length() const {
		return length;
	}

	// Returns the memory footprint of the song
	size_t Size() const {
		return length * sizeof(NoteValue) + length * sizeof(Notes) + 3 * sizeof(byte);
	}

	bool addNote(Notes note, NoteValue hold) {
		if (noteCount == length) {
			return false;
		}
		if (note >= Notes::SIZE) {
			return false;
		}
		notes[noteCount] = note;
		values[noteCount] = hold;
		noteCount++;
		return true;
	}
	void addRest(NoteValue hold) {
		addNote(Notes::None, hold);
	}
	void play(int speakerPin) {
		for (int i = 0; i < noteCount; ++i) {
			float time = (static_cast<float>(values[i]) * 1000.0f / bpm);
			tone(speakerPin, pgm_read_float( noteFrequencies + static_cast<unsigned>(notes[i])), time);
			delay(1 + time);
		}
	}
};

#endif // !COMPOSER_H