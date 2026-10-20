// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F046 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_5884f046_5884F046() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [esi]
        cmp dword ptr [edi], 0e0434352h
        ; Exact mapped bytes 74 12: je 0x5884f06a
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [edi], 0e0434f4dh
        ; Exact mapped bytes 74 0A: je 0x5884f06a
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [edi], 0e06d7363h
        ; Exact mapped bytes 74 1B: je 0x5884f083
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes EB 13: jmp 0x5884f07d
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes E8 B7 05 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 7E 08: jle 0x5884f07d
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes E8 AC 05 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        dec dword ptr [eax + 18h]
        pop edi
        xor eax, eax
        pop esi
        pop ebp
        ret
        ; Exact mapped bytes E8 9E 05 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 10h], edi
        mov esi, dword ptr [esi + 4]
        ; Exact mapped bytes E8 93 05 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 14h], esi
        ; Exact mapped bytes E8 8C 6D 01 00: call 0x58865e27
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
