// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886557A .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_5886557a_5886557A() {
    __asm {
        ; Exact mapped bytes 83 3D 98 98 96 58 00: cmp dword ptr [0x58969898], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 03: je 0x58865586
        __asm _emit 0x74
        __asm _emit 0x03
        xor eax, eax
        ret
        push esi
        ; Exact mapped bytes E8 53 FB 00 00: call 0x588750df
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 66 FE 00 00: call 0x588753f7
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 0C: jne 0x588655a3
        __asm _emit 0x75
        __asm _emit 0x0c
        push eax
        ; Exact mapped bytes E8 73 76 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        or eax, 0ffffffffh
        pop esi
        ret
        push edi
        push esi
        ; Exact mapped bytes E8 7F 00 00 00: call 0x58865629
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x588655b4
        __asm _emit 0x75
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 0C: jmp 0x588655c0
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes A3 A4 98 96 58: mov dword ptr [0x589698a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        xor edi, edi
        ; Exact mapped bytes A3 98 98 96 58: mov dword ptr [0x58969898], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 49 76 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 43 76 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
