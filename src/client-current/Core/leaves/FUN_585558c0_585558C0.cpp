// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585558C0 .. +0x3DB bytes.
extern "C" __declspec(naked) void FUN_585558c0_585558C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883362h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 88h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 134h], 2
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 3e8h], 0
        ; Exact mapped bytes 74 17: je 0x5855591e
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3e8h]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 73 06 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 DF B6 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb6
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 52: je 0x5855598a
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 44h], ecx
        push 0
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 F1 F2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf1
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 10 F3 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x10
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 1770h
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DB 58 26 00: call 0x587bb260
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x58
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58555991
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 54h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 FF FB 25 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        push 60h
        ; Exact mapped bytes E8 4B B6 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb6
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 73: je 0x58555a3f
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 5ch], edx
        push 1ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 F0 F2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf0
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 0F F3 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3f8h]
        mov dword ptr [ebp - 68h], ecx
        ; Exact mapped bytes 8B 15 10 07 96 58: mov edx, dword ptr [0x58960710]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 6ch], edx
        push -1
        push 1b58h
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C6 7B 01 00: call 0x5856d600
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58555a46
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 70h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3ech], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4F 05 00 00: call 0x58555fc0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 20h
        ; Exact mapped bytes E8 8B B5 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb5
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 3D: je 0x58555ac9
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2C 0F F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xff
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x58555aa0
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        add eax, 7
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 74h]
        push eax
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB EF F2 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xef
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5C 7F 01 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58555ad0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 7ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [eax + 70h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 0E F3 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C8 EE F2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xee
        __asm _emit 0xf2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB FD F3 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xf3
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 0E F3 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F1 FE F3 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 0E F3 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 FB F3 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 FD F3 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xf3
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 0E F3 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x0e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 FE F3 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 8ch], esi
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 27: je 0x58555bb8
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 80h], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 09 80 01 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 63 F3 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x63
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0B: jmp 0x58555bd3
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 60 65 F3 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x65
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x58555c7c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6B BA F7 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xba
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x58555c77
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C8 0D F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AA 64 F3 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x64
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 84h]
        sub eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 EF B3 2F 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb3
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 88h]
        sub edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes E8 D7 B3 2F 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb3
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        imul eax, eax, 75h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 30h]
        imul edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 34h]
        imul eax, dword ptr [ebp - 34h]
        add edx, eax
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes F2 0F 2A 45 C8: cvtsi2sd xmm0, dword ptr [ebp - 0x38]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xc8
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 B4 B3 2F 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb3
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 1C B6 2D 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb6
        __asm _emit 0x2d
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x58555bc8
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 13ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
