// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891211 .. +0x12 bytes.
extern "C" __declspec(naked) void Unwind_58891211() {
    __asm {
        ; Exact mapped bytes 68 CC 00 00 00: push 0xcc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 DC: mov eax, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 15 FE F9 FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfe
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
