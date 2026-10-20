// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004245AB .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_004245ab_004245AB() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        cmp dword ptr [eax], 0e06d7363h
        ; Exact mapped bytes 75 14: jne 0x4245ce
        __asm _emit 0x75
        __asm _emit 0x14
        cmp dword ptr [eax + 10h], 3
        ; Exact mapped bytes 75 0E: jne 0x4245ce
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp dword ptr [eax + 14h], 19930520h
        ; Exact mapped bytes 75 05: jne 0x4245ce
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 5C DF FF FF: jmp 0x42252a
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 78 FE 44 00: mov eax, dword ptr [0x44fe78]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4245eb
        __asm _emit 0x74
        __asm _emit 0x14
        push eax
        ; Exact mapped bytes E8 13 20 00 00: call 0x4265f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 09: je 0x4245eb
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes FF 15 78 FE 44 00: call dword ptr [0x44fe78]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x4245ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
