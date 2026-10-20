// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58879798 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_58879798_58879798() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 78 69: js 0x58879810
        __asm _emit 0x78
        __asm _emit 0x69
        ; Exact mapped bytes 3B 35 B0 9B 96 58: cmp esi, dword ptr [0x58969bb0]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 73 61: jae 0x58879810
        __asm _emit 0x73
        __asm _emit 0x61
        mov eax, esi
        mov ebx, esi
        and eax, 3fh
        shr ebx, 6
        imul ecx, eax, 38h
        mov eax, dword ptr [ebx*4 + 589699b0h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ecx + eax + 18h], -1
        ; Exact mapped bytes 75 43: jne 0x58879810
        __asm _emit 0x75
        __asm _emit 0x43
        push edi
        ; Exact mapped bytes E8 60 28 00 00: call 0x5887c033
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 0ch]
        cmp eax, 1
        ; Exact mapped bytes 75 22: jne 0x588797fd
        __asm _emit 0x75
        __asm _emit 0x22
        sub esi, 0
        ; Exact mapped bytes 74 14: je 0x588797f4
        __asm _emit 0x74
        __asm _emit 0x14
        sub esi, 1
        ; Exact mapped bytes 74 0A: je 0x588797ef
        __asm _emit 0x74
        __asm _emit 0x0a
        sub esi, 1
        ; Exact mapped bytes 75 13: jne 0x588797fd
        __asm _emit 0x75
        __asm _emit 0x13
        push edi
        push -0ch
        ; Exact mapped bytes EB 08: jmp 0x588797f7
        __asm _emit 0xeb
        __asm _emit 0x08
        push edi
        push -0bh
        ; Exact mapped bytes EB 03: jmp 0x588797f7
        __asm _emit 0xeb
        __asm _emit 0x03
        push edi
        push -0ah
        ; Exact mapped bytes FF 15 F0 42 89 58: call dword ptr [0x588942f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebx*4 + 589699b0h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 18h], edi
        xor eax, eax
        pop edi
        ; Exact mapped bytes EB 16: jmp 0x58879826
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes E8 5A 8C FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 3A 8C FE FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        and dword ptr [eax], 0
        or eax, 0ffffffffh
        pop esi
        pop ebx
        leave
        ret
    }
}
