// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831ACF .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_58831acf() {
    __asm {
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 0C 67 96 58: push 0x5896670c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 08 67 96 58: push 0x58966708
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 C8 43 89 58: call dword ptr [0x588943c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
