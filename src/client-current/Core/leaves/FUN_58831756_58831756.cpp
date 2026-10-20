// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831756 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58831756_58831756() {
    __asm {
        ; Exact mapped bytes E8 D2 0E 00 00: call 0x5883262d
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58831766
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 97 0A 00 00: call 0x588321fb
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x5883177e
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes E8 BE 0E 00 00: call 0x58832629
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D2 3D 03 00: call 0x58865543
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x58831779
        __asm _emit 0x74
        __asm _emit 0x03
        xor al, al
        ret
        ; Exact mapped bytes E8 EF 41 03 00: call 0x5886596d
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        mov al, 1
        ret
    }
}
