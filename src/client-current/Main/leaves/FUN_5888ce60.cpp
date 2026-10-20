// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888CE60 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_5888ce60() {
    __asm {
        push ebx
        push ebp
        ; Exact mapped bytes 8B 2D C4 C3 98 58: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push esi
        mov esi, dword ptr [esp + 14h]
        xor eax, eax
        push edi
        lea edi, [esi + 18h]
        mov dword ptr [edi], eax
        mov dword ptr [edi + 4], eax
        mov dword ptr [edi + 8], eax
        mov dword ptr [edi + 0ch], eax
        push 58a0b450h
        mov dword ptr [edi + 10h], eax
        push esi
        mov ebx, ecx
        mov dword ptr [edi + 14h], eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 8
        cmp dword ptr [ebx + 0b8h], 1
        ; Exact mapped bytes 75 17: jne 0x5888ceb1
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebx + 154h]
        mov eax, dword ptr [eax + 80h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5888ceb1
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        push edi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 8
        mov ebx, dword ptr [esp + 14h]
        mov ecx, 0ch
        mov edi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [esp + 1ch]
        push esi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        inc eax
        push eax
        push esi
        add ebx, 30h
        push ebx
        ; Exact mapped bytes E8 77 FE 0E 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
