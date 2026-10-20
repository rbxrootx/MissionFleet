// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DBE0 .. +0x12 bytes.
extern "C" __declspec(naked) void Unwind_5887dbe0() {
    __asm {
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 E0 FE FF FF: mov eax, dword ptr [ebp - 0x120]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 46 34 FB FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x34
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
