// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58756D10 .. +0x1A0 bytes.
extern "C" __declspec(naked) void FUN_58756d10() {
    __asm {
        sub esp, 18h
        ; Exact mapped bytes DD 05 38 D7 98 58: fld qword ptr [0x5898d738]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        push ebx
        ; Exact mapped bytes DD 05 20 CF 98 58: fld qword ptr [0x5898cf20]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 24h], edi
        xor eax, eax
        lea esi, [edi + 56h]
        mov dword ptr [esp + 1ch], 28h
        cmp dword ptr [esi - 6], 0
        ; Exact mapped bytes 0F 84 50 01 00 00: je 0x58756e90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [esi]
        mov ecx, dword ptr [esi + 1ah]
        ; Exact mapped bytes 66 83 FA FF: cmp dx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 74 30: je 0x58756d7c
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 66 83 FA 01: cmp dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 74 2A: je 0x58756d7c
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 66 83 FA 02: cmp dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 22 01 00 00: jne 0x58756e7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 16h]
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        mov eax, ebx
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        sub eax, dword ptr [edi + 5f8h]
        shl eax, 8
        cdq
        idiv ebx
        push eax
        ; Exact mapped bytes E8 69 BF 1A 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xbf
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x58756e6d
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 2]
        mov eax, dword ptr [esi + 0ah]
        mov ebp, dword ptr [esi + 6]
        mov ecx, dword ptr [esi + 0eh]
        mov edi, dword ptr [edi + 5f8h]
        sub eax, ebx
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        sub ecx, ebp
        mov dword ptr [esp + 18h], ecx
        mov ecx, dword ptr [esi + 16h]
        mov eax, 55555556h
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        imul ecx
        ; Exact mapped bytes D9 5C 24 18: fstp dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp edi, eax
        mov dword ptr [esp + 20h], ecx
        mov dword ptr [esp + 10h], edi
        ; Exact mapped bytes 7D 42: jge 0x58756e09
        __asm _emit 0x7d
        __asm _emit 0x42
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        lea ecx, [ecx + ecx*4]
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes D9 5C 24 20: fstp dword ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes D9 44 24 20: fld dword ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DE CA: fmulp st(2)
        __asm _emit 0xde
        __asm _emit 0xca
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DE FB: fdivp st(3)
        __asm _emit 0xde
        __asm _emit 0xfb
        ; Exact mapped bytes D9 CA: fxch st(2)
        __asm _emit 0xd9
        __asm _emit 0xca
        ; Exact mapped bytes E8 A3 5E 22 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x5e
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes D9 44 24 18: fld dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DE CB: fmulp st(3)
        __asm _emit 0xde
        __asm _emit 0xcb
        ; Exact mapped bytes DE CA: fmulp st(2)
        __asm _emit 0xde
        __asm _emit 0xca
        ; Exact mapped bytes DE F9: fdivp st(1)
        __asm _emit 0xde
        __asm _emit 0xf9
        ; Exact mapped bytes EB 4B: jmp 0x58756e54
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes D9 5C 24 20: fstp dword ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 20: fld dword ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DE F4: fdivrp st(4)
        __asm _emit 0xde
        __asm _emit 0xf4
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes DE E3: fsubrp st(3)
        __asm _emit 0xde
        __asm _emit 0xe3
        ; Exact mapped bytes D9 CA: fxch st(2)
        __asm _emit 0xd9
        __asm _emit 0xca
        ; Exact mapped bytes DC 0D 30 D7 98 58: fmul qword ptr [0x5898d730]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 CA: fxch st(2)
        __asm _emit 0xd9
        __asm _emit 0xca
        ; Exact mapped bytes D8 C9: fmul st(1)
        __asm _emit 0xd8
        __asm _emit 0xc9
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes D8 CC: fmul st(4)
        __asm _emit 0xd8
        __asm _emit 0xcc
        ; Exact mapped bytes D8 F2: fdiv st(2)
        __asm _emit 0xd8
        __asm _emit 0xf2
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D8 F3: fdiv st(3)
        __asm _emit 0xd8
        __asm _emit 0xf3
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes E8 5E 5E 22 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5e
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes D9 44 24 18: fld dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DE CC: fmulp st(4)
        __asm _emit 0xde
        __asm _emit 0xcc
        ; Exact mapped bytes D9 CB: fxch st(3)
        __asm _emit 0xd9
        __asm _emit 0xcb
        ; Exact mapped bytes DE F1: fdivrp st(1)
        __asm _emit 0xde
        __asm _emit 0xf1
        ; Exact mapped bytes D9 CA: fxch st(2)
        __asm _emit 0xd9
        __asm _emit 0xca
        ; Exact mapped bytes DE F1: fdivrp st(1)
        __asm _emit 0xde
        __asm _emit 0xf1
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        mov edi, eax
        add edi, ebx
        ; Exact mapped bytes E8 43 5E 22 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x5e
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1ah]
        add eax, ebp
        push eax
        push edi
        ; Exact mapped bytes E8 27 C4 1A 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc4
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, dword ptr [esp + 24h]
        ; Exact mapped bytes DD 05 38 D7 98 58: fld qword ptr [0x5898d738]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, 1
        ; Exact mapped bytes DD 05 20 CF 98 58: fld qword ptr [0x5898cf20]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [edi + 5f8h]
        cmp edx, dword ptr [esi + 16h]
        ; Exact mapped bytes 75 07: jne 0x58756e90
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi - 6], 0
        add esi, 24h
        sub dword ptr [esp + 1ch], 1
        ; Exact mapped bytes 0F 85 98 FE FF FF: jne 0x58756d36
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        inc dword ptr [edi + 5f8h]
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        pop edi
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        pop esi
        pop ebp
        pop ebx
        add esp, 18h
        ret
    }
}
