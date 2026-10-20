// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CCAE0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_588ccae0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 98 3A 00 00: call 0x588d0580
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 02: jne 0x588ccaee
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 EB FD FF FF: call 0x588cc8e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
