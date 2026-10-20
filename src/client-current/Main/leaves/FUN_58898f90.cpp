// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58898F90 .. +0x5BF bytes.
extern "C" __declspec(naked) void FUN_58898f90() {
    __asm {
        sub esp, 20h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 9D 05 00 00: je 0x58899542
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        mov ecx, dword ptr [esp + 34h]
        ; Exact mapped bytes 0F 85 48 05 00 00: jne 0x5889950b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 4]
        cmp eax, 201h
        ; Exact mapped bytes 0F 87 0A 05 00 00: ja 0x588994db
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 34 03 00 00: je 0x5889930b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 D1 02 00 00: je 0x588992b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 200h
        ; Exact mapped bytes 0F 85 1E 05 00 00: jne 0x5889950b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 0f0h], 1
        ; Exact mapped bytes 0F 85 9D 02 00 00: jne 0x58899297
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [edx + 4]
        cmp eax, ecx
        ; Exact mapped bytes 7F 49: jg 0x58899059
        __asm _emit 0x7f
        __asm _emit 0x49
        mov ebx, dword ptr [edi + 14h]
        mov ebp, dword ptr [edi + 1ch]
        mov dword ptr [esp + 20h], ebx
        mov ebx, dword ptr [edi + 18h]
        mov dword ptr [esp + 24h], ebx
        mov ebx, dword ptr [edi + 20h]
        add eax, ebp
        cmp eax, ecx
        mov dword ptr [esp + 2ch], ebx
        ; Exact mapped bytes 7C 2B: jl 0x58899059
        __asm _emit 0x7c
        __asm _emit 0x2b
        mov eax, dword ptr [edi + 8]
        mov ecx, dword ptr [edx + 8]
        cmp eax, ecx
        ; Exact mapped bytes 7F 21: jg 0x58899059
        __asm _emit 0x7f
        __asm _emit 0x21
        mov ebx, dword ptr [edi + 14h]
        mov dword ptr [esp + 20h], ebx
        mov ebx, dword ptr [edi + 18h]
        mov dword ptr [esp + 24h], ebx
        mov ebx, ebp
        mov ebp, dword ptr [edi + 20h]
        add eax, ebp
        cmp eax, ecx
        mov dword ptr [esp + 28h], ebx
        ; Exact mapped bytes 0F 8D B2 04 00 00: jge 0x5889950b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [esi + 108h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8E 01 01 00 00: jle 0x5889916b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 118h]
        xor ebx, ebx
        mov dword ptr [esp + 10h], edx
        cmp edx, ebx
        ; Exact mapped bytes 0F 84 F8 01 00 00: je 0x58899276
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 86 EC 00 00 00: fld dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, eax
        sub edx, ecx
        mov ecx, dword ptr [esi + 128h]
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes DA 64 24 14: fisub dword ptr [esp + 0x14]
        __asm _emit 0xda
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 9E EC 00 00 00: fstp dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + ecx*4 + 11ch]
        sub edx, 0fh
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        sub eax, dword ptr [ecx + 8]
        ; Exact mapped bytes DC 3D 38 01 9A 58: fdivr qword ptr [0x589a0138]
        __asm _emit 0xdc
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        add dword ptr [esi + 10ch], eax
        mov edx, dword ptr [esi + 10ch]
        ; Exact mapped bytes D9 5C 24 18: fstp dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DB 86 0C 01 00 00: fild dword ptr [esi + 0x10c]
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 7D 06: jge 0x588990dd
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 110h]
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 86 10 01 00 00: fild dword ptr [esi + 0x110]
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 06: jge 0x588990fb
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 44 24 18: fld dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DE C2: faddp st(2)
        __asm _emit 0xde
        __asm _emit 0xc2
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D8 DA: fcomp st(2)
        __asm _emit 0xd8
        __asm _emit 0xda
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 7A 23: jp 0x58899131
        __asm _emit 0x7a
        __asm _emit 0x23
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 CA: fxch st(2)
        __asm _emit 0xd9
        __asm _emit 0xca
        ; Exact mapped bytes DE F1: fdivrp st(1)
        __asm _emit 0xde
        __asm _emit 0xf1
        ; Exact mapped bytes DE E9: fsubp st(1)
        __asm _emit 0xde
        __asm _emit 0xe9
        ; Exact mapped bytes E8 83 3B 0E 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x3b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [esi + 118h], eax
        mov dword ptr [esi + 10ch], ebx
        mov dword ptr [esi + 110h], ebx
        ; Exact mapped bytes EB 04: jmp 0x58899135
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes D9 86 EC 00 00 00: fld dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D 48 01 9A 58: fcomp qword ptr [0x589a0148]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 5
        ; Exact mapped bytes 7B 0C: jnp 0x58899154
        __asm _emit 0x7b
        __asm _emit 0x0c
        cmp dword ptr [esi + 118h], ebx
        ; Exact mapped bytes 0F 8F 22 01 00 00: jg 0x58899276
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 05 30 01 9A 58: fld dword ptr [0x589a0130]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        mov dword ptr [esi + 118h], ebx
        ; Exact mapped bytes D9 9E EC 00 00 00: fstp dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0B 01 00 00: jmp 0x58899276
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D 05 01 00 00: jge 0x58899276
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 128h]
        lea ebp, [esi + edx*4 + 11ch]
        mov edx, dword ptr [esi + 118h]
        mov dword ptr [esp + 10h], edx
        add edx, 0fh
        cmp edx, dword ptr [ebp]
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x58899276
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, eax
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D8 86 EC 00 00 00: fadd dword ptr [esi + 0xec]
        __asm _emit 0xd8
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 9E EC 00 00 00: fstp dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        sub ecx, 0fh
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 8]
        sub ecx, eax
        ; Exact mapped bytes DC 3D 38 01 9A 58: fdivr qword ptr [0x589a0138]
        __asm _emit 0xdc
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        add dword ptr [esi + 110h], ecx
        mov edx, dword ptr [esi + 110h]
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 86 10 01 00 00: fild dword ptr [esi + 0x110]
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 7D 06: jge 0x588991e9
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 10ch]
        ; Exact mapped bytes D9 5C 24 18: fstp dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 44 24 18: fld dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DB 86 0C 01 00 00: fild dword ptr [esi + 0x10c]
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 06: jge 0x58899207
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 44 24 14: fld dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DE C2: faddp st(2)
        __asm _emit 0xde
        __asm _emit 0xc2
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes D8 DA: fcomp st(2)
        __asm _emit 0xd8
        __asm _emit 0xda
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 7A 21: jp 0x5889923b
        __asm _emit 0x7a
        __asm _emit 0x21
        ; Exact mapped bytes DE F9: fdivp st(1)
        __asm _emit 0xde
        __asm _emit 0xf9
        ; Exact mapped bytes DA 44 24 10: fiadd dword ptr [esp + 0x10]
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 7B 3A 0E 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [esi + 118h], eax
        xor eax, eax
        mov dword ptr [esi + 10ch], eax
        mov dword ptr [esi + 110h], eax
        ; Exact mapped bytes EB 04: jmp 0x5889923f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes DD D9: fstp st(1)
        __asm _emit 0xdd
        __asm _emit 0xd9
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes D9 05 40 01 9A 58: fld dword ptr [0x589a0140]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes D8 96 EC 00 00 00: fcom dword ptr [esi + 0xec]
        __asm _emit 0xd8
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 5
        ; Exact mapped bytes 7B 0E: jnp 0x58899260
        __asm _emit 0x7b
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp]
        sub ecx, 0fh
        cmp dword ptr [esi + 118h], ecx
        ; Exact mapped bytes 7C 14: jl 0x58899274
        __asm _emit 0x7c
        __asm _emit 0x14
        mov edx, dword ptr [ebp]
        ; Exact mapped bytes D9 9E EC 00 00 00: fstp dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub edx, 0fh
        mov dword ptr [esi + 118h], edx
        ; Exact mapped bytes EB 02: jmp 0x58899276
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        ; Exact mapped bytes D9 86 EC 00 00 00: fld dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1F 3A 0E 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x3a
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 D7 A0 06 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 128h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D9 F3 FF FF: call 0x58898670
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 104h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [esi + 108h], edx
        ; Exact mapped bytes E9 58 02 00 00: jmp 0x5889950b
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 8]
        add eax, -0dh
        cmp eax, 1bh
        ; Exact mapped bytes 0F 87 49 02 00 00: ja 0x5889950b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 58899560h]
        ; Exact mapped bytes FF 24 85 50 95 89 58: jmp dword ptr [eax*4 + 0x58899550]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x95
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 94 F9 FF FF: call 0x58898c80
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 11 FA FF FF: call 0x58898d10
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [edi + 4]
        cmp eax, edx
        ; Exact mapped bytes 7F 52: jg 0x58899373
        __asm _emit 0x7f
        __asm _emit 0x52
        mov ebx, dword ptr [ecx + 14h]
        mov ebp, dword ptr [ecx + 1ch]
        mov dword ptr [esp + 20h], ebx
        mov ebx, dword ptr [ecx + 18h]
        mov dword ptr [esp + 24h], ebx
        mov ebx, dword ptr [ecx + 20h]
        add eax, ebp
        cmp eax, edx
        mov dword ptr [esp + 2ch], ebx
        ; Exact mapped bytes 7C 34: jl 0x58899373
        __asm _emit 0x7c
        __asm _emit 0x34
        mov eax, dword ptr [ecx + 8]
        mov edx, dword ptr [edi + 8]
        cmp eax, edx
        ; Exact mapped bytes 7F 2A: jg 0x58899373
        __asm _emit 0x7f
        __asm _emit 0x2a
        mov ebx, dword ptr [ecx + 14h]
        mov dword ptr [esp + 20h], ebx
        mov ebx, dword ptr [ecx + 18h]
        mov dword ptr [esp + 24h], ebx
        mov ebx, ebp
        mov ebp, dword ptr [ecx + 20h]
        add eax, ebp
        cmp eax, edx
        mov dword ptr [esp + 28h], ebx
        ; Exact mapped bytes 7C 0D: jl 0x58899373
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov byte ptr [esi + 0f0h], 1
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edi + 4]
        cmp dword ptr [esi + 0f4h], eax
        ; Exact mapped bytes 0F 8F 89 01 00 00: jg 0x5889950b
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0fch], eax
        ; Exact mapped bytes 0F 8C 7D 01 00 00: jl 0x5889950b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 8]
        cmp dword ptr [esi + 0f8h], edi
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes 0F 8F 6A 01 00 00: jg 0x5889950b
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 100h], edi
        ; Exact mapped bytes 0F 8C 5E 01 00 00: jl 0x5889950b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 128h]
        mov edi, dword ptr [esi + edx*4 + 11ch]
        lea ebp, [esi + edx*4 + 11ch]
        lea edx, [edi + edi*4]
        add edx, edx
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esi + 118h]
        add edi, -0fh
        lea ebx, [edx + eax]
        mov dword ptr [esp + 1ch], ebx
        mov ebx, dword ptr [esp + 18h]
        mov dword ptr [esp + 10h], edi
        mov edi, dword ptr [ecx + 8]
        cmp ebx, edi
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 7D 4B: jge 0x58899445
        __asm _emit 0x7d
        __asm _emit 0x4b
        sub edx, eax
        mov dword ptr [esi + 118h], edx
        test edx, edx
        ; Exact mapped bytes 7E 23: jle 0x58899429
        __asm _emit 0x7e
        __asm _emit 0x23
        ; Exact mapped bytes D9 86 EC 00 00 00: fld dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DC 3D 38 01 9A 58: fdivr qword ptr [0x589a0138]
        __asm _emit 0xdc
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes D9 5C 24 18: fstp dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes D9 44 24 18: fld dword ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DA 4C 24 14: fimul dword ptr [esp + 0x14]
        __asm _emit 0xda
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DE E9: fsubp st(1)
        __asm _emit 0xde
        __asm _emit 0xe9
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x588994ae
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0feh
        mov dword ptr [esi + 118h], 0
        ; Exact mapped bytes E8 23 9F 06 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9f
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes D9 05 30 01 9A 58: fld dword ptr [0x589a0130]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes EB 69: jmp 0x588994ae
        __asm _emit 0xeb
        __asm _emit 0x69
        mov eax, dword ptr [ecx + 14h]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [esp + 20h], eax
        mov eax, dword ptr [ecx + 1ch]
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [ecx + 20h]
        add edi, eax
        cmp ebx, edi
        mov dword ptr [esp + 24h], edx
        ; Exact mapped bytes 7E 51: jle 0x588994b4
        __asm _emit 0x7e
        __asm _emit 0x51
        mov edx, dword ptr [esp + 1ch]
        mov ebp, dword ptr [ebp]
        lea eax, [edx + 0fh]
        cmp ebp, eax
        ; Exact mapped bytes 7C 24: jl 0x58899495
        __asm _emit 0x7c
        __asm _emit 0x24
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        mov dword ptr [esi + 118h], edx
        ; Exact mapped bytes DC 3D 38 01 9A 58: fdivr qword ptr [0x589a0138]
        __asm _emit 0xdc
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes D9 5C 24 1C: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes D9 44 24 1C: fld dword ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DA 4C 24 14: fimul dword ptr [esp + 0x14]
        __asm _emit 0xda
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes D8 86 EC 00 00 00: fadd dword ptr [esi + 0xec]
        __asm _emit 0xd8
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x588994ae
        __asm _emit 0xeb
        __asm _emit 0x19
        add ebp, -0fh
        push 213h
        mov dword ptr [esi + 118h], ebp
        ; Exact mapped bytes E8 B8 9E 06 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x9e
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes D9 05 40 01 9A 58: fld dword ptr [0x589a0140]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes D9 9E EC 00 00 00: fstp dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 86 EC 00 00 00: fld dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 37 0E 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x37
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        push eax
        ; Exact mapped bytes E8 95 9E 06 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x9e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 97 F1 FF FF: call 0x58898670
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 30: jmp 0x5889950b
        __asm _emit 0xeb
        __asm _emit 0x30
        sub eax, 202h
        ; Exact mapped bytes 74 22: je 0x58899504
        __asm _emit 0x74
        __asm _emit 0x22
        sub eax, 8
        ; Exact mapped bytes 75 24: jne 0x5889950b
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 66 39 41 0A: cmp word ptr [ecx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x0a
        mov ecx, esi
        ; Exact mapped bytes 0F 8E 07 FE FF FF: jle 0x588992fa
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 88 F7 FF FF: call 0x58898c80
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [esi + 0f0h], 0
        mov eax, dword ptr [esi + 3ch]
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x58899542
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x58899536
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [esp + 34h]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 10: je 0x58899542
        __asm _emit 0x74
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x58899520
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
