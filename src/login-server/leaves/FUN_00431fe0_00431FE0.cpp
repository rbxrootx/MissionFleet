// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431FE0 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_00431fe0_00431FE0() {
    __asm {
        ; Exact mapped bytes E8 CE 3C 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax + 14h], 0
        ; Exact mapped bytes 75 53: jne 0x43203e
        __asm _emit 0x75
        __asm _emit 0x53
        push esi
        ; Exact mapped bytes E8 95 3A 00 00: call 0x435a86
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes FF 15 E4 C1 43 00: call dword ptr [0x43c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        push 0
        push 432335h
        push -1
        ; Exact mapped bytes FF 15 54 C4 43 00: call dword ptr [0x43c454]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 435eb6h
        mov ecx, 44fb80h
        mov dword ptr [esi + 30h], eax
        ; Exact mapped bytes E8 2D 4E 00 00: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 74 0B: je 0x43202e
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes E8 8B 3C 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [eax + 8]
        ; Exact mapped bytes FF 56 14: call dword ptr [esi + 0x14]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x14
        push 436393h
        mov ecx, 44fb7ch
        ; Exact mapped bytes E8 76 4D 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
