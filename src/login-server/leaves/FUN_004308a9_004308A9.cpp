// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004308A9 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_004308a9_004308A9() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 04 C5 43 00: call dword ptr [0x43c504]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 20 C4 43 00: mov edi, dword ptr [0x43c420]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 2E: je 0x4308f4
        __asm _emit 0x74
        __asm _emit 0x2e
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x4308dd
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 D0 FF FF FF: call 0x4308a9
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 3F: jne 0x43091c
        __asm _emit 0x75
        __asm _emit 0x3f
        cmp dword ptr [ebp + 10h], 0
        push esi
        ; Exact mapped bytes 75 07: jne 0x4308eb
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 EF E9 FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 31: jmp 0x43091c
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes E8 0F EA FF FF: call 0x42f2ff
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x43091c
        __asm _emit 0x75
        __asm _emit 0x28
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 1B: je 0x43091a
        __asm _emit 0x74
        __asm _emit 0x1b
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 9E FF FF FF: call 0x4308a9
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x43091c
        __asm _emit 0x75
        __asm _emit 0x0d
        push 2
        push esi
        ; Exact mapped bytes FF 15 78 C4 43 00: call dword ptr [0x43c478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB DF: jmp 0x4308f9
        __asm _emit 0xeb
        __asm _emit 0xdf
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
