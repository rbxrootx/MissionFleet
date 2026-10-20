// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58536200 .. +0x3FB bytes.
extern "C" __declspec(naked) void FUN_58536200_58536200() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58882ad3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 64h
        push esi
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
        ; Exact mapped bytes 0F 84 A8 03 00 00: je 0x585365eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes E8 C1 B0 F5 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        push eax
        ; Exact mapped bytes E8 B0 B0 F5 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        cmp esi, eax
        ; Exact mapped bytes 7E 24: jle 0x5853628b
        __asm _emit 0x7e
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 54h]
        sub eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov ecx, dword ptr [ebp - 10h]
        add eax, dword ptr [ecx + 54h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 68h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        ; Exact mapped bytes E8 79 B0 F5 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        push eax
        ; Exact mapped bytes E8 68 B0 F5 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        cmp esi, eax
        ; Exact mapped bytes 7E 24: jle 0x585362d3
        __asm _emit 0x7e
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 58h]
        sub eax, dword ptr [edx + 64h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 58h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov ecx, dword ptr [ebp - 10h]
        add eax, dword ptr [ecx + 58h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        sub ecx, 14h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5ch], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov edx, dword ptr [ebp - 10h]
        add ecx, dword ptr [edx + 5ch]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], ecx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 6ch]
        sub eax, dword ptr [edx + 70h]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 00 F3 27 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf3
        __asm _emit 0x27
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 6ch]
        sub ecx, dword ptr [eax + 70h]
        mov eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 8ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 90h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 8ch]
        cmp ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes 75 14: jne 0x58536390
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 90h]
        cmp ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes 74 1C: je 0x585363ac
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        add edx, 8ch
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 94h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E5 FB FF FF: call 0x58535f90
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ecx + 94h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ecx + 98h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 0F 8D 0E 02 00 00: jge 0x585365eb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A9 FB F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfb
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 5A F5 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x5a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0B: jmp 0x58536409
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2A 5D F5 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x585364f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 35 B2 F9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb2
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x585364ef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E2 BD 22 00: call 0x58762220
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbd
        __asm _emit 0x22
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x585364ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 B7 AB 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xab
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 52: je 0x585364b2
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 3ch], eax
        push 14h
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 E6 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe6
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 05 F5 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 1388h
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B3 4D 28 00: call 0x587bb260
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4d
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x585364b9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 24h], eax
        push 102h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D7 F0 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf0
        __asm _emit 0x27
        __asm _emit 0x00
        push 1388h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9A F9 F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 05: jmp 0x585364f4
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 0A FF FF FF: jmp 0x585363fe
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x585365b8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 FF AA 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xaa
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 6B: je 0x58536583
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes E8 3D A7 31 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa7
        __asm _emit 0x31
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5853653b
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 18h
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 E5 F4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 04 F5 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 1388h
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E2 4C 28 00: call 0x587bb260
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5853658a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 60h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 34h], edx
        push 102h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 06 F0 27 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf0
        __asm _emit 0x27
        __asm _emit 0x00
        push 1388h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C9 F8 F4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E0 03 F5 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x585365e4
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 64h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 9C: call dword ptr [ebp - 0x64]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x9c
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x585365eb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
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
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
