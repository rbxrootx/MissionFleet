// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A38D0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_587a38d0() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        mov esi, dword ptr [eax + 0ch]
        push edi
        mov edi, ecx
        test esi, esi
        ; Exact mapped bytes 74 3E: je 0x587a391e
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, esi
        ; Exact mapped bytes E8 F9 2D 13 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x2d
        __asm _emit 0x13
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 29: jne 0x587a3917
        __asm _emit 0x75
        __asm _emit 0x29
        cmp dword ptr [edi + 3ech], esi
        ; Exact mapped bytes 74 21: je 0x587a3917
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [edi + 16ch]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x587a3917
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [edi + 8]
        mov edx, dword ptr [edi + 4]
        push eax
        push ecx
        push edx
        push esi
        ; Exact mapped bytes E8 C1 8F FC FF: call 0x5876c8d0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x8f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 75 0C: jne 0x587a3923
        __asm _emit 0x75
        __asm _emit 0x0c
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 C2: jne 0x587a38e0
        __asm _emit 0x75
        __asm _emit 0xc2
        pop edi
        xor eax, eax
        pop esi
        ret
        pop edi
        mov eax, 1
        pop esi
        ret
    }
}
