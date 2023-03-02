#pragma once

#define NUM_BUTTONS 3

enum Button {
    // Every button must have an id in the range of 0 to NUM_BUTTONS-1
    BUTTON_SELECT = 0,
    BUTTON_DOWN = 1,
    BUTTON_UP = 2,
    // Historical reasons ↓
    BUTTON_1 = 0,
    BUTTON_2 = 1,
    BUTTON_3 = 2
};

extern char* ButtonNames[];