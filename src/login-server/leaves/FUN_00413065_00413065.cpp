// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413065 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_00413065_00413065() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 83 7E 30 00: cmp word ptr [esi + 0x30], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 7E 15: jle 0x413084
        __asm _emit 0x7e
        __asm _emit 0x15
        push dword ptr [esp + 8]
        ; Exact mapped bytes E8 BB 1B 00 00: call 0x414c33
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esp + 0ch]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 04 00 00 00: call 0x413088
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
