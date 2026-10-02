// Ghidra identifies this as a small method on the text-like control used by
// the full-screen constructor at 0x1002C3D0. The meanings of both fields are
// still unknown; preserve their observed offsets until surrounding writes
// establish stronger names.
#include "TextControlLayout.h"

void TextControl::SetTextControlPairedValue(unsigned int value)
{
    field_74 = value;
    field_70 = value;
}
