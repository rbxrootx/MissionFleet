// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004152A1 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_004152a1_004152A1() {
    __asm {
        ; Exact mapped bytes 66 8B 4C 24 04: mov cx, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 F9 FF: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 74 1B: je 0x4152c7
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 83 F9 FC: cmp cx, -4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xfc
        ; Exact mapped bytes 74 15: je 0x4152c7
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [esp + 8]
        inc eax
        ; Exact mapped bytes 66 83 F9 02: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 74 06: je 0x4152c3
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F9 03: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 75 07: jne 0x4152ca
        __asm _emit 0x75
        __asm _emit 0x07
        inc eax
        inc eax
        ; Exact mapped bytes EB 03: jmp 0x4152ca
        __asm _emit 0xeb
        __asm _emit 0x03
        push 1
        pop eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
