// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100ED180 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_100ed180_100ED180() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [ecx + 0c08h]
        xor esi, 0aaaaaaaah
        cmp eax, esi
        ; Exact mapped bytes 7D 26: jge 0x100ed1bb
        __asm _emit 0x7d
        __asm _emit 0x26
        test esi, esi
        ; Exact mapped bytes 74 16: je 0x100ed1af
        __asm _emit 0x74
        __asm _emit 0x16
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv esi
        pop esi
        mov dword ptr [ecx + 1030h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop esi
        mov dword ptr [ecx + 1030h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 64h
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
