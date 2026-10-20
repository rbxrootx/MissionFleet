// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892236 .. +0x12 bytes.
extern "C" __declspec(naked) void Unwind_58892236() {
    __asm {
        ; Exact mapped bytes 6A 38: push 0x38
        __asm _emit 0x6a
        __asm _emit 0x38
        ; Exact mapped bytes 8B 85 80 FB FF FF: mov eax, dword ptr [ebp - 0x480]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F0 ED F9 FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xed
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
