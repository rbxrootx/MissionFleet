// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CF280 .. +0x2FF bytes.
extern "C" __declspec(naked) void FUN_100cf280_100CF280() {
    __asm {
        push -1
        push 10172e89h
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
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 6B 8E F6 FF: call 0x10038130
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x8e
        __asm _emit 0xf6
        __asm _emit 0xff
        xor eax, eax
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], eax
        ; Exact mapped bytes 66 81 66 24 FF DF: and word ptr [esi + 0x24], 0xdfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xdf
        push 54h
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esi], 101763b0h
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes E8 AF D4 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 76: je 0x100cf379
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6ch
        ; Exact mapped bytes 7E 12: jle 0x100cf323
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100cf323
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 1b0h]
        ; Exact mapped bytes EB 02: jmp 0x100cf325
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 28h]
        push 320h
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 74 F6 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100cf373
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100cf37b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0e8h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes E8 13 D4 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 34: je 0x100cf3d1
        __asm _emit 0x74
        __asm _emit 0x34
        push 646464h
        push 0
        lea ecx, [ebx + 3ch]
        push 0ffffffh
        push ecx
        lea edx, [ebp + 0dch]
        lea ecx, [ebx + 21h]
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D B0 56 1C 10: mov ecx, dword ptr [0x101c56b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [ebp + 3ch]
        push edx
        push ecx
        push 0
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 83 95 F4 FF: call 0x10018950
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100cf3d3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 6ch], edi
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
        ; Exact mapped bytes 74 06: je 0x100cf3ee
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B2 FB 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfb
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100cf3fb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 05 FB 02 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        push 0c8h
        mov dword ptr [eax + 90h], 10h
        ; Exact mapped bytes E8 8E D3 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        xor edi, edi
        mov byte ptr [esp + 1ch], 3
        cmp eax, edi
        ; Exact mapped bytes 74 1B: je 0x100cf43f
        __asm _emit 0x74
        __asm _emit 0x1b
        add ebx, 1eh
        push 3e8h
        add ebp, 0c4h
        push ebx
        push ebp
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 73 32 F6 FF: call 0x100326b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x32
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100cf441
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 1ch], 0
        cmp dword ptr [ecx + 170h], 16h
        ; Exact mapped bytes 7E 0F: jle 0x100cf467
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, edi
        ; Exact mapped bytes 74 05: je 0x100cf467
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx + 58h]
        ; Exact mapped bytes EB 02: jmp 0x100cf469
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D E8 57 1C 10: mov ecx, dword ptr [0x101c57e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 2
        ; Exact mapped bytes 7E 0F: jle 0x100cf487
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, edi
        ; Exact mapped bytes 74 05: je 0x100cf487
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 02: jmp 0x100cf489
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 5E 3C F6 FF: call 0x100330f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes E8 36 3B F6 FF: call 0x10032fd0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x3b
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 8ch
        ; Exact mapped bytes 7E 11: jle 0x100cf4bc
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, edi
        ; Exact mapped bytes 74 07: je 0x100cf4bc
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 2300h
        ; Exact mapped bytes EB 02: jmp 0x100cf4be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 70h]
        push edi
        push edi
        push eax
        ; Exact mapped bytes E8 07 3A F6 FF: call 0x10032ed0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x3a
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 8dh
        ; Exact mapped bytes 7E 11: jle 0x100cf4eb
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, edi
        ; Exact mapped bytes 74 07: je 0x100cf4eb
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 2340h
        ; Exact mapped bytes EB 02: jmp 0x100cf4ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 70h]
        push edi
        push edi
        push eax
        ; Exact mapped bytes E8 98 39 F6 FF: call 0x10032e90
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x39
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 8eh
        ; Exact mapped bytes 7E 11: jle 0x100cf51a
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, edi
        ; Exact mapped bytes 74 07: je 0x100cf51a
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 2380h
        ; Exact mapped bytes EB 02: jmp 0x100cf51c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 70h]
        push edi
        push edi
        push edi
        push eax
        ; Exact mapped bytes E8 18 3A F6 FF: call 0x10032f40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x3a
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        push edi
        push edi
        push edi
        ; Exact mapped bytes E8 4D 3A F6 FF: call 0x10032f80
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x3a
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        push edi
        ; Exact mapped bytes E8 74 5E FF FF: call 0x100c53b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [esi + 7ch], edi
        mov dword ptr [esi + 78h], edi
        lea eax, [esi + 80h]
        mov ecx, 20h
        mov byte ptr [eax], 0
        add eax, 100h
        dec ecx
        ; Exact mapped bytes 75 F5: jne 0x100cf553
        __asm _emit 0x75
        __asm _emit 0xf5
        mov edx, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 2080h], edx
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
