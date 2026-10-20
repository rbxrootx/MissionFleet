// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430E66 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_00430e66_00430E66() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 10h]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x430e7c
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        ; Exact mapped bytes E8 99 FB FF FF: call 0x430a11
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x430e83
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 BC E3 FF FF: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
