// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D0580 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_588d0580() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 38 F9 FF FF: call 0x588cfec0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x588d0590
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 89 F9 FF FF: call 0x588cff20
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 F1: je 0x588d058c
        __asm _emit 0x74
        __asm _emit 0xf1
        mov ecx, esi
        ; Exact mapped bytes E8 3E FB FF FF: call 0x588d00e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 E6: je 0x588d058c
        __asm _emit 0x74
        __asm _emit 0xe6
        mov ecx, esi
        ; Exact mapped bytes E8 83 F7 FF FF: call 0x588cfd30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 DB: je 0x588d058c
        __asm _emit 0x74
        __asm _emit 0xdb
        mov ecx, esi
        ; Exact mapped bytes E8 18 A8 E7 FF: call 0x5874add0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa8
        __asm _emit 0xe7
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        neg eax
        pop esi
        ret
    }
}
