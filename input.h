#ifndef INPUT_H
#define INPUT_H

#include <stdbool.h>
#include "wiimote.h"

#define PI 3.141592654

void input_init();
void input_unload();
int input_update(struct wiimote_state * state);

#endif
