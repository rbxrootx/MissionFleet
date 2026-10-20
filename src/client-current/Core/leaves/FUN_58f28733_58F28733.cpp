// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F28733 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58f28733_58F28733() {
    __asm {
        ; Exact mapped bytes 0F B7 07: movzx eax, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x07
        ; Exact mapped bytes 66 0F BA F1 42: btr cx, 0x42
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0xf1
        __asm _emit 0x42
        ; Exact mapped bytes 0F 94 C5: sete ch
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc5
        ; Exact mapped bytes F7 D1: not ecx
        __asm _emit 0xf7
        __asm _emit 0xd1
        ; Exact mapped bytes 0F B7 C8: movzx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc8
        ; Exact mapped bytes C1 E9 04: shr ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes 03 0C 33: add ecx, dword ptr [ebx + esi]
        __asm _emit 0x03
        __asm _emit 0x0c
        __asm _emit 0x33
        ; Exact mapped bytes A8 8B: test al, 0x8b
        __asm _emit 0xa8
        __asm _emit 0x8b
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes 66 85 D1: test cx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd1
        ; Exact mapped bytes 24 0F: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes E9 37 7C F8 FF: jmp 0x58eb038e
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 54 25 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x25
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4D 04: mov cl, byte ptr [ebp + 4]
        __asm _emit 0x8a
        __asm _emit 0x4d
        __asm _emit 0x04
    }
}
