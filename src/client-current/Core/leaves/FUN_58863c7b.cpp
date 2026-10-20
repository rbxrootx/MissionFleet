// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58863C7B .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58863c7b() {
    __asm {
        ; Exact mapped bytes E8 56 BD 00 00: call 0x5886f9d6
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes E8 95 FF FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
