// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CD2E0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_588cd2e0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 98 32 00 00: call 0x588d0580
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x588cd2f0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 D9 FD FF FF: call 0x588cd0d0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 F1: je 0x588cd2ec
        __asm _emit 0x74
        __asm _emit 0xf1
        mov ecx, esi
        ; Exact mapped bytes E8 AE 2A 00 00: call 0x588cfdb0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        pop esi
        ret
    }
}
