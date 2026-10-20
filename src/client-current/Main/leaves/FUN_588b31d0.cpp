// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B31D0 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_588b31d0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 6
        ; Exact mapped bytes 74 49: je 0x588b3222
        __asm _emit 0x74
        __asm _emit 0x49
        cmp eax, 7
        ; Exact mapped bytes 74 44: je 0x588b3222
        __asm _emit 0x74
        __asm _emit 0x44
        cmp eax, 8
        ; Exact mapped bytes 75 08: jne 0x588b31eb
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, 1
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 74 2A: je 0x588b321a
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp eax, 5
        ; Exact mapped bytes 74 25: je 0x588b321a
        __asm _emit 0x74
        __asm _emit 0x25
        cmp eax, 3
        ; Exact mapped bytes 75 03: jne 0x588b31fd
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 08: jne 0x588b320a
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, 4
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        cmp eax, 9
        sete cl
        add ecx, 5
        mov eax, ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 2
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
