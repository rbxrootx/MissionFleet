// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880CC2 .. +0x12 bytes.
extern "C" __declspec(naked) void Unwind_58880cc2() {
    __asm {
        ; Exact mapped bytes 68 1C 01 00 00: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 D8: mov eax, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 64 03 FB FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x03
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
