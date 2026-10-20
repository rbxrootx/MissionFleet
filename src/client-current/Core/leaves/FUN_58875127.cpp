// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58875127 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58875127() {
    __asm {
        ; Exact mapped bytes E8 74 3A FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 4C 9C 96 58: push 0x58969c4c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 08 FF FF FF: call 0x5887503f
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
