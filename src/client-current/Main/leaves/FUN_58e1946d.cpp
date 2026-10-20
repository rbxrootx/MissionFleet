// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58E1946D .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_58e1946d() {
    __asm {
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes C0 C7 03: rol bh, 3
        __asm _emit 0xc0
        __asm _emit 0xc7
        __asm _emit 0x03
        ; Exact mapped bytes 0F B7 DB: movzx ebx, bx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xdb
        ; Exact mapped bytes BB DC 7A 0F 12: mov ebx, 0x120f7adc
        __asm _emit 0xbb
        __asm _emit 0xdc
        __asm _emit 0x7a
        __asm _emit 0x0f
        __asm _emit 0x12
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes E9 AD 32 FA FF: jmp 0x58dbc72c
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x32
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
