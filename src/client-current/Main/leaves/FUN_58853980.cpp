// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853980 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_58853980() {
    __asm {
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 2b8h]
        mov eax, dword ptr [ecx + 54h]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x58853996
        __asm _emit 0x74
        __asm _emit 0x06
        movzx eax, word ptr [eax + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x58853998
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push esi
        lea esi, [eax - 1]
        imul esi, dword ptr [esp + 0ch]
        mov eax, 0f2b9d649h
        imul esi
        add edx, esi
        sar edx, 7
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        ; Exact mapped bytes 78 04: js 0x588539ba
        __asm _emit 0x78
        __asm _emit 0x04
        push 0
        ; Exact mapped bytes EB 02: jmp 0x588539bc
        __asm _emit 0xeb
        __asm _emit 0x02
        push -50h
        ; Exact mapped bytes E8 5F F3 0A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, esi
        cdq
        xor eax, edx
        sub eax, edx
        pop esi
        cmp eax, 25h
        ; Exact mapped bytes 75 1A: jne 0x588539e8
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [edi + 31ch], 0
        ; Exact mapped bytes 74 11: je 0x588539e8
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [edi + 2b8h]
        mov dword ptr [eax + 50h], 26h
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 2b8h]
        mov dword ptr [ecx + 50h], eax
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
