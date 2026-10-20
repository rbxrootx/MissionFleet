// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58770530 .. +0x282 bytes.
extern "C" __declspec(naked) void FUN_58770530_58770530() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58770552
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D 4D 02 00 00: jge 0x587707a9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DC BE D1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xbe
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 ED 25 D3 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x25
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [eax + 14h]
        and edx, 3ffh
        xor edx, 55h
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 0F 84 1C 02 00 00: je 0x587707a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD BD D1 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbd
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 4
        add eax, ecx
        mov edx, dword ptr [ebp - 4]
        lea eax, [eax + edx*4]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 04 B7 D1 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb7
        __asm _emit 0xd1
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 4
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 E7 01 00 00: jne 0x587707a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x587705d6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 64h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F 8D 32 01 00 00: jge 0x58770714
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, dword ptr [ebp - 10h]
        cmp ecx, 64h
        ; Exact mapped bytes 7E 09: jle 0x587705f6
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 64h
        ; Exact mapped bytes EB 09: jmp 0x587705ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 BD D1 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xbd
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 4
        add eax, ecx
        imul edx, dword ptr [ebp - 4], 64h
        add eax, edx
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 87 B6 D1 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb6
        __asm _emit 0xd1
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp + 8]
        imul eax, dword ptr [ebp - 30h]
        cdq
        mov ecx, 64h
        idiv ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 59 05 78 54 8B 58: mulsd xmm0, qword ptr [0x588b5478]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x54
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 0F 0C 00: call 0x588315a0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 83 3D 60 35 90 58 FF: cmp dword ptr [0x58903560], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 74 62: je 0x587706c3
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 8B 15 60 35 90 58: mov edx, dword ptr [0x58903560]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes F2 0F 2A 45 DC: cvtsi2sd xmm0, dword ptr [ebp - 0x24]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 24h]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 B8: movsd qword ptr [ebp - 0x48], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes F2 0F 5A 45 B8: cvtsd2ss xmm0, qword ptr [ebp - 0x48]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes F3 0F 5E 05 60 4D 89 58: divss xmm0, dword ptr [0x58894d60]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes F2 0F 2A 4D D8: cvtsi2sd xmm1, dword ptr [ebp - 0x28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 28h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 0C D5 70 4D 89 58: addsd xmm1, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 4D B0: movsd qword ptr [ebp - 0x50], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes F2 0F 5A 4D B0: cvtsd2ss xmm1, qword ptr [ebp - 0x50]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes F3 0F 59 C8: mulss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 28 C1: movaps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc1
        ; Exact mapped bytes E8 10 0D 0C 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 52 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x52
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 0dh
        ; Exact mapped bytes 75 06: jne 0x587706d9
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 52 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x52
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 08: jne 0x587706f1
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 16: jae 0x5877070f
        __asm _emit 0x73
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        xor edx, edx
        mov ecx, 190h
        div ecx
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 B9 FE FF FF: jmp 0x587705cd
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 90 75 94 58 02: cmp dword ptr [0x58947590], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x02
        ; Exact mapped bytes 75 08: jne 0x58770725
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 13 BD D1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xbd
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C4 21 E6 FF: call 0x585d2900
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x21
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx eax, al
        add eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 3B 05 34 D2 8F 58: cmp eax, dword ptr [0x588fd234]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 7E 24: jle 0x5877076e
        __asm _emit 0x7e
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EE BC D1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xbc
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9F 21 E6 FF: call 0x585d2900
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x21
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx edx, al
        ; Exact mapped bytes A1 34 D2 8F 58: mov eax, dword ptr [0x588fd234]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        sub eax, edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CA BC D1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xbc
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        movzx ecx, byte ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 46 E9 FD FF: call 0x5874f0d0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FD 0F FF FF: call 0x587617a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A0 FD FF FF: jmp 0x58770549
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
