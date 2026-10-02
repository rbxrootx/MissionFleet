// These callback types follow the observed stack-cleanup convention. Their
// higher-level host contracts are not recovered.
typedef void (__stdcall *TokenTextWriter)(void*, int);
typedef unsigned int (__stdcall *TextLengthReader)(void*);

extern "C" TokenTextWriter DAT_101750B0;
extern "C" TextLengthReader DAT_101750A8;

#include "TextControlLayout.h"

void TextControl::SetResourceText(int token)
{
    field_70 = field_74;
    if (token != 0) {
        *text_buffer = 0;
        DAT_101750B0(callback_state, token);
        field_78 = DAT_101750A8(callback_state);
    } else {
        *text_buffer = 0;
        callback_state[0] = 0;
        field_78 = 0;
    }
    field_7c = 0;
    style = (style & 0xe1ff) | 0x104;
}
