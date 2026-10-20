// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58793180 .. +0x41B bytes.
extern "C" __declspec(naked) void FUN_58793180() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 12140h]
        mov dword ptr [esi + 1213ch], 13h
        push edi
        xor edi, edi
        mov dword ptr [esi + 12108h], edi
        mov dword ptr [esi + 12104h], edi
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov eax, dword ptr [esi + 12140h]
        mov dword ptr [eax + 6ch], 0ffffh
        mov dword ptr [eax + 70h], edi
        mov ecx, dword ptr [esi + 12124h]
        mov eax, 0ffffffh
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [esi + 12128h]
        mov dword ptr [edx + 60h], eax
        mov ecx, 2
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12124h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12128h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12114h]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x587932dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 35h
        ; Exact mapped bytes 7E 16: jle 0x58793223
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], edi
        ; Exact mapped bytes 74 0E: je 0x58793223
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0d40h
        ; Exact mapped bytes EB 02: jmp 0x58793225
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [eax + 54h], ecx
        cmp ecx, edi
        ; Exact mapped bytes 74 28: je 0x58793254
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [eax + 0ch], edx
        mov edx, dword ptr [ecx + 1ch]
        add ecx, 20h
        mov dword ptr [eax + 10h], edx
        mov edx, dword ptr [ecx]
        add eax, 14h
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1cah
        ; Exact mapped bytes 7E 16: jle 0x5879327b
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], edi
        ; Exact mapped bytes 74 0E: je 0x5879327b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 728h]
        ; Exact mapped bytes EB 02: jmp 0x5879327d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 12118h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, edi
        ; Exact mapped bytes 74 28: je 0x587932b2
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 1211ch]
        mov dword ptr [eax + 28h], 100h
        mov dword ptr [eax + 84h], edi
        mov dword ptr [eax + 8ch], 40000000h
        mov ecx, dword ptr [esi + 1211ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esp + 0ch]
        cmp eax, 190h
        ; Exact mapped bytes 0F 8F 90 02 00 00: jg 0x5879357b
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 7E 02 00 00: je 0x5879356f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0c9h
        ; Exact mapped bytes 0F 87 7F 02 00 00: ja 0x5879357b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [eax + 587935f8h]
        ; Exact mapped bytes FF 24 8D 9C 35 79 58: jmp dword ptr [ecx*4 + 0x5879359c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x35
        __asm _emit 0x79
        __asm _emit 0x58
        push 0ffffh
        push 58997c3ch
        ; Exact mapped bytes E9 6C 02 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 58997c18h
        ; Exact mapped bytes E9 5D 02 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 58997bf8h
        ; Exact mapped bytes E9 4E 02 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 58997bd8h
        ; Exact mapped bytes E9 3F 02 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 58997bach
        ; Exact mapped bytes E9 30 02 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 0ffffh
        push 58997b8ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BE F3 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 FF 86 94 21 01 00: inc word ptr [esi + 0x12194]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        movzx eax, word ptr [esi + 12194h]
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 1F: jne 0x587933a5
        __asm _emit 0x75
        __asm _emit 0x1f
        push 0ffffh
        push 58997b70h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 93 F3 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        ; Exact mapped bytes FF 15 C8 C3 98 58: call dword ptr [0x5898c3c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 12128h]
        ; Exact mapped bytes E8 30 75 17 00: call 0x5890a8e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x17
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0ffffh
        push 58997b48h
        ; Exact mapped bytes E9 C1 01 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 58997b24h
        ; Exact mapped bytes E9 B2 01 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 9D 1F 11 00: call 0x588a5380
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x1f
        __asm _emit 0x11
        __asm _emit 0x00
        push 0ffffh
        push 58997af8h
        ; Exact mapped bytes E9 93 01 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 58997ad0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 23 F3 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 12108h], edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0ffffh
        push 58997aa4h
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 58997a7ch
        ; Exact mapped bytes E9 4F 01 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 0ffffh
        push 58997a54h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DD F2 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push 58997a2ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C6 F2 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push 58997a04h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 AF F2 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0ffffh
        push 589979d4h
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 589979ach
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 58997988h
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 0ffffh
        push 58997954h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 60 F2 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push 58997920h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 49 F2 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0ffffh
        push 589978f8h
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x58793585
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffffh
        push 589978dch
        ; Exact mapped bytes EB 7E: jmp 0x58793585
        __asm _emit 0xeb
        __asm _emit 0x7e
        push 0ffffh
        push 589978bch
        ; Exact mapped bytes EB 72: jmp 0x58793585
        __asm _emit 0xeb
        __asm _emit 0x72
        push 0ffffh
        push 5899789ch
        ; Exact mapped bytes EB 66: jmp 0x58793585
        __asm _emit 0xeb
        __asm _emit 0x66
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 0ffffh
        push 5899787ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F4 F1 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push 5899785ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DD F1 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push 5899783ch
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C6 F1 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0ffffh
        push 58997820h
        ; Exact mapped bytes EB 0A: jmp 0x58793585
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0ffffh
        push 589977f4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9A F1 FF FF: call 0x58792730
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
