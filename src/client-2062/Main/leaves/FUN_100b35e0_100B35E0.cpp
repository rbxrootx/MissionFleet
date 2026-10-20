// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B35E0 .. +0x474 bytes.
extern "C" __declspec(naked) void FUN_100b35e0_100B35E0() {
    __asm {
        push -1
        push 10171ccdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        push eax
        push ebx
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 2B 3F F9 FF: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x3f
        __asm _emit 0xf9
        __asm _emit 0xff
        xor ebp, ebp
        push 54h
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esi], 1017616ch
        ; Exact mapped bytes E8 68 91 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x91
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 71: je 0x100b36bb
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 202h
        ; Exact mapped bytes 7E 10: jle 0x100b366b
        __asm _emit 0x7e
        __asm _emit 0x10
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x100b366b
        __asm _emit 0x74
        __asm _emit 0x06
        mov ebp, dword ptr [eax + 808h]
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 2ch]
        push edx
        push 0
        push 0
        push eax
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2E B3 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b36bd
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x100b36bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 84h], edi
        ; Exact mapped bytes E8 8C BA 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 C5 90 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 75: je 0x100b3762
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 203h
        ; Exact mapped bytes 7E 12: jle 0x100b3710
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b3710
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 80ch]
        ; Exact mapped bytes EB 02: jmp 0x100b3712
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 2ch]
        push eax
        push 0
        push 0
        push ecx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 87 B2 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x100b3764
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x100b3764
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 88h], edi
        ; Exact mapped bytes E8 2A 90 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 77: je 0x100b37ff
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 201h
        ; Exact mapped bytes 7E 12: jle 0x100b37ab
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b37ab
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 804h]
        ; Exact mapped bytes EB 02: jmp 0x100b37ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 2ch]
        push ecx
        push 0
        push 0
        push edx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EC B1 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100b37fb
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100b3801
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 8ch], ecx
        ; Exact mapped bytes E8 4A B9 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 83 8F 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 54: je 0x100b3883
        __asm _emit 0x74
        __asm _emit 0x54
        mov ebp, dword ptr [esp + 2ch]
        push 1e1e1eh
        push 0
        push 0dcdcdch
        lea edx, [ebp + 14h]
        lea eax, [ebx + 130h]
        push edx
        lea ecx, [ebp + 4]
        push eax
        ; Exact mapped bytes A1 A8 56 1C 10: mov eax, dword ptr [0x101c56a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 8ch]
        push ecx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1D 23 F6 FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x23
        __asm _emit 0xf6
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 5
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 28 8F 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 06: jmp 0x100b3889
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebp, dword ptr [esp + 2ch]
        xor edi, edi
        mov dword ptr [esi + 0b4h], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes 66 C7 47 26 E8 03: mov word ptr [edi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100b38a7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F9 B6 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b38b4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4C B6 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [esi + 90h]
        add ebp, 2ah
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 34h], 7
        push 184h
        ; Exact mapped bytes E8 CD 8E 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 6
        ; Exact mapped bytes 74 31: je 0x100b3914
        __asm _emit 0x74
        __asm _emit 0x31
        push 1e1e1eh
        push 0
        lea edx, [ebp + 0bh]
        push 0aaaaaah
        lea ecx, [ebx + 0a4h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebx + 40h]
        push ebp
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F0 4C F6 FF: call 0x10018600
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x4c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100b3916
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, dword ptr [esp + 38h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [edx], edi
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 66 C7 47 26 E8 03: mov word ptr [edi + 0x26], 0x3e8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 74 06: je 0x100b3934
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6C B6 04 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100b3941
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 BF B5 04 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esp + 38h]
        mov eax, dword ptr [esp + 34h]
        add edx, 4
        add ebp, 0ch
        dec eax
        mov dword ptr [esp + 38h], edx
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 6B FF FF FF: jne 0x100b38c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fch
        ; Exact mapped bytes E8 38 8E 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 7
        mov edi, 2ch
        ; Exact mapped bytes 74 3E: je 0x100b39bb
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100b399d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b399d
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100b399f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        add edx, 90h
        push edx
        lea edx, [ebx + 34h]
        push edx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D7 B8 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100b39bd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 CE 8D 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 8
        ; Exact mapped bytes 74 3E: je 0x100b3a20
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], edi
        ; Exact mapped bytes 7E 12: jle 0x100b3a02
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100b3a02
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x100b3a04
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        add ebx, 34h
        add edx, 9eh
        push edx
        push ebx
        push 3
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 72 B8 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100b3a22
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0b0h], eax
        mov ecx, 18h
        xor eax, eax
        lea edi, [esi + 0bch]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
