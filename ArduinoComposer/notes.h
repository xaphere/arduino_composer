#ifndef COMPOSER_NOTES_H
#define COMPOSER_NOTES_H

//Supported notes
enum struct Notes : byte {
	None,
	C0,  //C0
	Db0,  //C#0/Db0
	D0,  //D0
	Eb0,  //D#0/Eb0
	E0,  //E0
	F0,  //F0
	Gb0,  //F#0/Gb0
	G0,  //G0
	Ab0,  //G#0/Ab0
	A0,  //A0
	Bb0,  //A#0/Bb0
	Berr0,  //B0 //TODO: clash with binary.h
	C1,  //C1
	Db1,  //C#1/Db1
	D1,  //D1
	Eb1,  //D#1/Eb1
	E1,  //E1
	F1,  //F1
	Gb1,  //F#1/Gb1
	G1,  //G1
	Ab1,  //G#1/Ab1
	A1,  //A1
	Bb1,  //A#1/Bb1
	Berr1,  //B1 //TODO: clash with binary.h
	C2,  //C2 (Middle C)
	Db2,  //C#2/Db2
	D2,  //D2
	Eb2,  //D#2/Eb2
	E2,  //E2
	F2,  //F2
	Gb2,  //F#2/Gb2
	G2,  //G2
	Ab2,  //G#2/Ab2
	A2,  //A2
	Bb2,  //A#2/Bb2
	B2,  //B2
	C3,  //C3
	Db3,  //C#3/Db3
	D3,  //D3
	Eb3,  //D#3/Eb3
	E3,  //E3
	F3,  //F3
	Gb3,  //F#3/Gb3
	G3,  //G3
	Ab3,  //G#3/Ab3
	A3,  //A3
	Bb3,  //A#3/Bb3
	B3,  //B3
	C4,  //C4
	Db4,  //C#4/Db4
	D4,  //D4
	Eb4,  //D#4/Eb4
	E4,  //E4
	F4,  //F4
	Gb4,  //F#4/Gb4
	G4,  //G4
	Ab4,  //G#4/Ab4
	A4,  //A4
	Bb4,  //A#4/Bb4
	B4,  //B4
	C5,  //C5
	Db5,  //C#5/Db5
	D5,  //D5
	Eb5,  //D#5/Eb5
	E5,  //E5
	F5,  //F5
	Gb5,  //F#5/Gb5
	G5,  //G5
	Ab5,  //G#5/Ab5
	A5,  //A5
	Bb5,  //A#5/Bb5
	B5,  //B5
	C6,  //C6
	Db6,  //C#6/Db6
	D6,  //D6
	Eb6,  //D#6/Eb6
	E6,  //E6
	F6,  //F6
	Gb6,  //F#6/Gb6
	G6,  //G6
	Ab6,  //G#6/Ab6
	A6,  //A6
	Bb6,  //A#6/Bb6
	B6,  //B6
	C7,  //C7
	Db7,  //C#7/Db7
	D7,  //D7
	Eb7,  //D#7/Eb7
	E7,  //E7
	F7,  //F7
	Gb7,  //F#7/Gb7
	G7,  //G7
	Ab7,  //G#7/Ab7
	A7,  //A7
	Bb7,  //A#7/Bb7
	B7,  //B7
	C8,  //C8
	Db8,  //C#8/Db8
	D8,  //D8
	Eb8,  //D#8/Eb8
	SIZE
};

//Note freqiencies lookup table 
//Reference: http://www.phy.mtu.edu/~suits/notefreqs.html
static const float noteFrequencies[static_cast<unsigned>(Notes::SIZE)] PROGMEM = {
	0.0,
	16.35,  //C0
	17.32,  //C#0/Db0
	18.35,  //D0
	19.45,  //D#0/Eb0
	20.6,  //E0
	21.83,  //F0
	23.12,  //F#0/Gb0
	24.5,  //G0
	25.96,  //G#0/Ab0
	27.5,  //A0
	29.14,  //A#0/Bb0
	30.87,  //B0
	32.7,  //C1
	34.65,  //C#1/Db1
	36.71,  //D1
	38.89,  //D#1/Eb1
	41.2,  //E1
	43.65,  //F1
	46.25,  //F#1/Gb1
	49,  //G1
	51.91,  //G#1/Ab1
	55,  //A1
	58.27,  //A#1/Bb1
	61.74,  //B1
	65.41,  //C2 (Middle C)
	69.3,  //C#2/Db2
	73.42,  //D2
	77.78,  //D#2/Eb2
	82.41,  //E2
	87.31,  //F2
	92.5,  //F#2/Gb2
	98,  //G2
	103.83,  //G#2/Ab2
	110,  //A2
	116.54,  //A#2/Bb2
	123.47,  //B2
	130.81,  //C3
	138.59,  //C#3/Db3
	146.83,  //D3
	155.56,  //D#3/Eb3
	164.81,  //E3
	174.61,  //F3
	185,  //F#3/Gb3
	196,  //G3
	207.65,  //G#3/Ab3
	220,  //A3
	233.08,  //A#3/Bb3
	246.94,  //B3
	261.63,  //C4
	277.18,  //C#4/Db4
	293.66,  //D4
	311.13,  //D#4/Eb4
	329.63,  //E4
	349.23,  //F4
	369.99,  //F#4/Gb4
	392,  //G4
	415.3,  //G#4/Ab4
	440,  //A4
	466.16,  //A#4/Bb4
	493.88,  //B4
	523.25,  //C5
	554.37,  //C#5/Db5
	587.33,  //D5
	622.25,  //D#5/Eb5
	659.26,  //E5
	698.46,  //F5
	739.99,  //F#5/Gb5
	783.99,  //G5
	830.61,  //G#5/Ab5
	880,  //A5
	932.33,  //A#5/Bb5
	987.77,  //B5
	1046.5,  //C6
	1108.73,  //C#6/Db6
	1174.66,  //D6
	1244.51,  //D#6/Eb6
	1318.51,  //E6
	1396.91,  //F6
	1479.98,  //F#6/Gb6
	1567.98,  //G6
	1661.22,  //G#6/Ab6
	1760,  //A6
	1864.66,  //A#6/Bb6
	1975.53,  //B6
	2093,  //C7
	2217.46,  //C#7/Db7
	2349.32,  //D7
	2489.02,  //D#7/Eb7
	2637.02,  //E7
	2793.83,  //F7
	2959.96,  //F#7/Gb7
	3135.96,  //G7
	3322.44,  //G#7/Ab7
	3520,  //A7
	3729.31,  //A#7/Bb7
	3951.07,  //B7
	4186.01,  //C8
	4434.92,  //C#8/Db8
	4698.64,  //D8
	4978.03 //D#8/Eb8
};

//Note time Values
//	Reference : http://www.sengpielaudio.com/calculator-bpmtempotime.htm
enum class NoteValue {
	whole = 240,
	half = 120,
	quater = 60,
	eighth = 30,
	sixteenth = 15
};

#endif // !COMPOSER_NOTES_H