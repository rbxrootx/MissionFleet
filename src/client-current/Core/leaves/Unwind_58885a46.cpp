// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58885A46 .. +0x12 bytes.
extern "C" __declspec(naked) void Unwind_58885a46() {
    __asm {
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 8B 85 2C FD FF FF: mov eax, dword ptr [ebp - 0x2d4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E0 B5 FA FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb5
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
