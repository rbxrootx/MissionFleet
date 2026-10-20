// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58882D74 .. +0x12 bytes.
extern "C" __declspec(naked) void Unwind_58882d74() {
    __asm {
        ; Exact mapped bytes 68 84 00 00 00: push 0x84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 BC: mov eax, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B2 E2 FA FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe2
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
