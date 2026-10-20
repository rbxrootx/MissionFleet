// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887EAC5 .. +0x15 bytes.
extern "C" __declspec(naked) void Unwind_5887eac5() {
    __asm {
        ; Exact mapped bytes 68 10 39 00 00: push 0x3910
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 38 FE FF FF: mov eax, dword ptr [ebp - 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5E 25 FB FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x25
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
