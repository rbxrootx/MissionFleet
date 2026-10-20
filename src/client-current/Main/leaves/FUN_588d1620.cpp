// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D1620 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_588d1620() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 58 EF FF FF: call 0x588d0580
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x588d1630
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi + 50h]
        movzx ecx, word ptr [eax + 38h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 91 FC FF FF: call 0x588d12d0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 E9: je 0x588d162c
        __asm _emit 0x74
        __asm _emit 0xe9
        mov ecx, esi
        ; Exact mapped bytes E8 66 E7 FF FF: call 0x588cfdb0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        neg eax
        pop esi
        ret
    }
}
