// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58519650 .. +0x2AF bytes.
extern "C" __declspec(naked) void FUN_58519650_58519650() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58881274h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 48h
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
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 48 C8 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc8
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 30h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 35 C8 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 82 61 F8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x61
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 20h
        ; Exact mapped bytes E8 3E 79 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x79
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3D: je 0x58519716
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DF D2 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd2
        __asm _emit 0xf6
        __asm _emit 0xff
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x585196ed
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        add eax, 7
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E B3 F6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb3
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0F 43 05 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5851971d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 5ch], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 D2 F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7B B2 F6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E C1 F7 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc1
        __asm _emit 0xf7
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
        ; Exact mapped bytes E8 7B D2 F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 C2 F7 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc2
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 54h], eax
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
        ; Exact mapped bytes E8 4D D2 F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 BF F7 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xbf
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 C1 F7 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc1
        __asm _emit 0xf7
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
        ; Exact mapped bytes E8 26 D2 F6 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F C2 F7 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc2
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 50h], esi
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 5ch], 0
        ; Exact mapped bytes 74 21: je 0x585197f9
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C8 43 05 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 26 F7 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x26
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0B: jmp 0x58519814
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1F 29 F7 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x29
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x585198dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2A 7E FB FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x585198d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 87 D1 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xd1
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6C 28 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 48h]
        sub eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 B7 77 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x77
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4ch]
        sub edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes E8 A2 77 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x77
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        imul eax, eax, 75h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 24h]
        imul edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 28h]
        imul eax, dword ptr [ebp - 28h]
        add edx, eax
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes F2 0F 2A 45 E8: cvtsi2sd xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe8
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 7F 77 33 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x77
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 E7 79 31 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x79
        __asm _emit 0x31
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes 7D 21: jge 0x585198d8
        __asm _emit 0x7d
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C1 2B F7 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x2b
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 74 11: je 0x585198d8
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 29 00 00 00: call 0x58519900
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2C FF FF FF: jmp 0x58519809
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 45 06 00: call 0x5857dec0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        nop
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
