// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B4D90 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_588b4d90() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0ch]
        inc eax
        push eax
        push ecx
        lea esi, [edi + 1a0h]
        push esi
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 58a0b450h
        push esi
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x588b4de1
        __asm _emit 0x75
        __asm _emit 0x25
        mov byte ptr [esi], al
        movzx eax, word ptr [edi + 19ch]
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x588b4dd1
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 09: jne 0x588b4dda
        __asm _emit 0x75
        __asm _emit 0x09
        xor edx, edx
        ; Exact mapped bytes 66 89 97 9C 01 00 00: mov word ptr [edi + 0x19c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0b0h]
        push esi
        ; Exact mapped bytes E8 73 A5 EA FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa5
        __asm _emit 0xea
        __asm _emit 0xff
        pop edi
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
