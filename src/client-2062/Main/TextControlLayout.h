#pragma once

// Layout observed in FUN_10018600, FUN_10018840, and FUN_100188E0.
// The names of the opaque fields reflect their known offsets, not guessed UI
// semantics. The callback-state block begins at +0x80 in the mapped image.
struct TextControl {
    unsigned char unknown_00[0x24];
    unsigned short style;
    unsigned char unknown_26[0x46];
    char* text_buffer;
    unsigned int field_70;
    unsigned int field_74;
    unsigned int field_78;
    unsigned int field_7c;
    unsigned char callback_state[0x80];

    void SetTextControlPairedValue(unsigned int value);
    void SetResourceText(int token);
};
