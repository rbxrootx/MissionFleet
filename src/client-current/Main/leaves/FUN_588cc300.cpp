// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CC300 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_588cc300() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 78 42 00 00: call 0x588d0580
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x588cc310
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi + 50h]
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 1
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 DF FC FF FF: call 0x588cc000
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 E7: je 0x588cc30c
        __asm _emit 0x74
        __asm _emit 0xe7
        mov ecx, esi
        ; Exact mapped bytes E8 54 3E 00 00: call 0x588d0180
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        pop esi
        ret
    }
}
