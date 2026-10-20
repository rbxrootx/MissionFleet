// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CE820 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_588ce820() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 58 1D 00 00: call 0x588d0580
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x588ce830
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 39 FD FF FF: call 0x588ce570
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 F1: je 0x588ce82c
        __asm _emit 0x74
        __asm _emit 0xf1
        mov ecx, esi
        ; Exact mapped bytes E8 DE FB FF FF: call 0x588ce420
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        neg eax
        pop esi
        ret
    }
}
