#include "Mushroom.h"

// IsArduboy.h must be included before Arduboy2.h
#include "IsArduboy.h"
#include <Arduboy2.h>

#include "Globals.h"

void Mushroom::draw()
{
	Sprites::drawSelfMasked(this->x, this->y, Tiles, (2 - this->h));
}

void Mushroom::damage()
{
	if (this->h > 0)
	{
		--this->h;

		#if IS_ARDUBOY
		sound.noTone();
		sound.tone(NOTE_G2, 50);
		#endif
	}
	else
	{
		#if IS_ARDUBOY
		sound.noTone();
		sound.tone(NOTE_G3, 50);
		#endif

		this->active = false;
		points += 5;
	}
}