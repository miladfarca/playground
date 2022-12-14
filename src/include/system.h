#ifndef _SYSTEM_H
#define _SYSTEM_H
#include <stdint.h>

struct system_time {
  uint8_t seconds;
  uint8_t minutes;
  uint8_t hours;
  char *am_pm;
};

struct system_time system_get_time();
void system_turn_speaker_on(uint32_t nFrequence);
void system_turn_speaker_off();

#endif
