// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58519F90 .. +0x2D6 bytes.
extern "C" __declspec(naked) void FUN_58519f90_58519F90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 AD 02 00 00: je 0x5851a262
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 11 BF F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xbf
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 0F 84 78 01 00 00: je 0x5851a155
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 1E F7 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x1e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x58519ff8
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3B 21 F7 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x21
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 34 01 00 00: je 0x5851a136
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 46 76 FB FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x5851a131
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 64h]
        shl eax, 1
        cdq
        mov ecx, 5
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 91 C9 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc9
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 77 20 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x20
        __asm _emit 0xf7
        __asm _emit 0xff
        imul edx, eax, 11h
        add edi, edx
        push edi
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 67 1C F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x1c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        div dword ptr [ecx + 64h]
        shr edx, 1
        add esi, edx
        mov dword ptr [ebp - 30h], esi
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 60 C9 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc9
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 20 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x20
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 28h]
        sub eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 90 6F 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x6f
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 2ch]
        sub edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes E8 7B 6F 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6f
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        imul eax, eax, 75h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 18h]
        imul edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 1ch]
        imul eax, dword ptr [ebp - 1ch]
        add edx, eax
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes F2 0F 2A 45 F0: cvtsi2sd xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 58 6F 33 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6f
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 C0 71 31 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x71
        __asm _emit 0x31
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 73 0B: jae 0x5851a0e6
        __asm _emit 0x73
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D F5 FF FF: call 0x58519650
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 50: jmp 0x5851a136
        __asm _emit 0xeb
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF C8 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc8
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 75 3B: jne 0x5851a131
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 2E F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x5851a131
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 36 23 F7 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF A8 F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa8
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 75 10: jne 0x5851a131
        __asm _emit 0x75
        __asm _emit 0x10
        cmp dword ptr [ebp - 10h], 190h
        ; Exact mapped bytes 7D 07: jge 0x5851a131
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes E9 B7 FE FF FF: jmp 0x58519fed
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 14: je 0x5851a150
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 34h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 91 BD F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xbd
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x5851a1d8
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        ; Exact mapped bytes E8 E0 B6 F9 FF: call 0x584b5840
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb6
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5851a178
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 69 BD F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xbd
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 74 57: je 0x5851a1d8
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 5ch]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x5851a1d8
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 74 37: je 0x5851a1d8
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x5851a1c7
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3ch], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5851a1ce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5851a1f9
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5851a1f9
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 5A: je 0x5851a262
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5851a21c
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB E6: jmp 0x5851a202
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EC B3 F7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb3
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5851a240
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x5851a262
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5851a260
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C8 B3 F7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb3
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB A0: jmp 0x5851a202
        __asm _emit 0xeb
        __asm _emit 0xa0
        pop edi
        pop esi
        mov esp, ebp
    }
}
