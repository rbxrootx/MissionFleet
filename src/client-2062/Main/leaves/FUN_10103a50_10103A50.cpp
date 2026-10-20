// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103A50 .. +0xF7 bytes.
extern "C" __declspec(naked) void FUN_10103a50_10103A50() {
    __asm {
        sub esp, 10h
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x10103a7b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [esp + 20h]
        mov ecx, dword ptr [eax]
        push 0
        push edx
        mov edx, dword ptr [esp + 24h]
        push edx
        mov edx, dword ptr [esp + 24h]
        push edx
        push eax
        ; Exact mapped bytes FF 51 4C: call dword ptr [ecx + 0x4c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x4c
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes A1 50 93 1C 10: mov eax, dword ptr [0x101c9350]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 18: fld dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        add eax, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 8], ecx
        ; Exact mapped bytes D8 64 24 08: fsub dword ptr [esp + 8]
        __asm _emit 0xd8
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x08
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esp + 0ch], edx
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes D9 5C 24 18: fstp dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 44 24 20: fld dword ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes D8 64 24 10: fsub dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 18: fld dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D8 4C 24 18: fmul dword ptr [esp + 0x18]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 C1: fld st(1)
        __asm _emit 0xd9
        __asm _emit 0xc1
        ; Exact mapped bytes D8 CA: fmul st(2)
        __asm _emit 0xd8
        __asm _emit 0xca
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes D9 FA: fsqrt
        __asm _emit 0xd9
        __asm _emit 0xfa
        ; Exact mapped bytes E8 E6 8C 06 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes DB 44 24 04: fild dword ptr [esp + 4]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes D9 54 24 04: fst dword ptr [esp + 4]
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes D8 1D 14 68 17 10: fcomp dword ptr [0x10176814]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x14
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 59: je 0x10103b34
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes D9 44 24 04: fld dword ptr [esp + 4]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes D8 1D 10 68 17 10: fcomp dword ptr [0x10176810]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 1F: jne 0x10103b0c
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes D9 05 10 68 17 10: fld dword ptr [0x10176810]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes D8 64 24 08: fsub dword ptr [esp + 8]
        __asm _emit 0xd8
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x08
        mov edi, dword ptr [esi]
        ; Exact mapped bytes D8 0D 0C 68 17 10: fmul dword ptr [0x1017680c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 A2 8C 06 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 57 0C: call dword ptr [edi + 0xc]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes EB 09: jmp 0x10103b15
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [esi]
        push 0
        mov ecx, esi
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes D9 44 24 1C: fld dword ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes D8 0D 08 68 17 10: fmul dword ptr [0x10176808]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, dword ptr [esi]
        ; Exact mapped bytes E8 80 8C 06 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 57 10: call dword ptr [edi + 0x10]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x10
        pop edi
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push 0ffffd8f0h
        mov ecx, esi
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
