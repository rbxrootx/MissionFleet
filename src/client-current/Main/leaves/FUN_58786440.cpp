// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786440 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_58786440() {
    __asm {
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0C: je 0x58786453
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4C 24 04: mov cx, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 88 C4 03 00 00: mov word ptr [eax + 0x3c4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xc4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
