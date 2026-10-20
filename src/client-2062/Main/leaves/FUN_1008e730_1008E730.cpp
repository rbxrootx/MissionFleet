// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008E730 .. +0x314 bytes.
extern "C" __declspec(naked) void FUN_1008e730_1008E730() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov al, byte ptr [esi + 2d5h]
        cmp al, 2
        ; Exact mapped bytes 75 24: jne 0x1008e762
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 F5 02 00 00: jne 0x1008ea3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 158h]
        pop edi
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov byte ptr [esi + 2d5h], 0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp al, 3
        ; Exact mapped bytes 0F 85 D5 02 00 00: jne 0x1008ea3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 0ch]
        test edi, edi
        ; Exact mapped bytes 75 18: jne 0x1008e78a
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [esi + 140h]
        pop edi
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov byte ptr [esi + 2d5h], 0
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 90 01 00 00: je 0x1008e925
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 57 1C 10: mov eax, dword ptr [0x101c5734]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x1008e894
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x1008e813
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [eax + 164h]
        dec ecx
        cmp edx, ecx
        ; Exact mapped bytes 76 5F: jbe 0x1008e813
        __asm _emit 0x76
        __asm _emit 0x5f
        cmp edx, ecx
        ; Exact mapped bytes 7E 13: jle 0x1008e7cb
        __asm _emit 0x7e
        __asm _emit 0x13
        test ecx, ecx
        ; Exact mapped bytes 7C 0F: jl 0x1008e7cb
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1008e7cb
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + ecx*4]
        ; Exact mapped bytes EB 02: jmp 0x1008e7cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1008e802
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 E2 01 00 00: jmp 0x1008e9f5
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x1008e834
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008e834
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x1008e836
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0bch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1008e86b
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 0F 8E 8F 00 00 00: jle 0x1008e90d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x1008e90d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 7B: jmp 0x1008e90f
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x1008e8b5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008e8b5
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x1008e8b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0bch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1008e8ec
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x1008e90d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008e90d
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x1008e90f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x1008e9d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x1008e9ad
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 5ah
        ; Exact mapped bytes 7E 12: jle 0x1008e946
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008e946
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x1008e948
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0bch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1008e97d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov eax, dword ptr [esi + 90h]
        cmp dword ptr [eax + 164h], 59h
        ; Exact mapped bytes 7E 12: jle 0x1008e99e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1008e99e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 164h]
        ; Exact mapped bytes EB 02: jmp 0x1008e9a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c0h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1008e9d5
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov ecx, dword ptr [esi + 0bch]
        push 0fffffeffh
        ; Exact mapped bytes E8 7B 07 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 6B 07 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 148h]
        push 101h
        ; Exact mapped bytes E8 5B 07 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 14ch]
        lea ecx, [edi + 0ch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1008ea21
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008ea21
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        xor edx, edx
        mov byte ptr [esi + 2d5h], 5
        mov dl, byte ptr [edi + 5ah]
        lea ecx, [edi + 5ch]
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push 0
        ; Exact mapped bytes E8 61 E2 FB FF: call 0x1004cca0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
