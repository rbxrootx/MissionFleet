// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880FD5 .. +0x12 bytes.
extern "C" __declspec(naked) void Unwind_58880fd5() {
    __asm {
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 F0 FE FF FF: mov eax, dword ptr [ebp - 0x110]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 51 00 FB FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x00
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
