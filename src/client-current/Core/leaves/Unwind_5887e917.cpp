// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887E917 .. +0x12 bytes.
extern "C" __declspec(naked) void Unwind_5887e917() {
    __asm {
        ; Exact mapped bytes 68 90 00 00 00: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0F 27 FB FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x27
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
