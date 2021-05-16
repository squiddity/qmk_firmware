/* Copyright 2021 Alex Kagno
  * 
  * This program is free software: you can redistribute it and/or modify 
  * it under the terms of the GNU General Public License as published by 
  * the Free Software Foundation, either version 2 of the License, or 
  * (at your option) any later version. 
  * 
  * This program is distributed in the hope that it will be useful, 
  * but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
  * GNU General Public License for more details. 
  * 
  * You should have received a copy of the GNU General Public License 
  * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
*/ 

#pragma once

#ifdef AUDIO_ENABLE
#   define STARTUP_SONG    SONG(STARTUP_SOUND)
#   define GOODBYE_SONG    SONG(GOODBYE_SOUND)
#   define AUDIO_CLICKY
#   define AUDIO_CLICKY_FREQ_RANDOMNESS 1.0f
#   define MIDI_BASIC
#   define MUSIC_MASK keycode != KC_NO
#endif

// save me space!
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
