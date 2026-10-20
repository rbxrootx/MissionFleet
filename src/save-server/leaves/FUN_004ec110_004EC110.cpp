// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC110 .. +0x282 bytes.
extern "C" __declspec(naked) void FUN_004ec110_004EC110() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58dbe7h
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
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 47 AC FE FF: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 60h
        ; Exact mapped bytes E8 BC 8B 03 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 63905ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x4ec167
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 8000h
        ; Exact mapped bytes 72 11: jb 0x4ec178
        __asm _emit 0x72
        __asm _emit 0x11
        push 1eh
        push 676ad0h
        ; Exact mapped bytes E8 CD CB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec178
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4ec158
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 22: je 0x4ec1a6
        __asm _emit 0x74
        __asm _emit 0x22
        push 63a218h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 99 E3 FE FF: call 0x4da52a
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ec1a6
        __asm _emit 0x75
        __asm _emit 0x11
        push 20h
        push 676ad0h
        ; Exact mapped bytes E8 9F CB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec1a6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4ec17e
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 22: je 0x4ec1d4
        __asm _emit 0x74
        __asm _emit 0x22
        push 636f38h
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 6B E3 FE FF: call 0x4da52a
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ec1d4
        __asm _emit 0x75
        __asm _emit 0x11
        push 22h
        push 676ad0h
        ; Exact mapped bytes E8 71 CB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec1d4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x4ec1ac
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 22: je 0x4ec202
        __asm _emit 0x74
        __asm _emit 0x22
        push 636f20h
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 3D E3 FE FF: call 0x4da52a
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ec202
        __asm _emit 0x75
        __asm _emit 0x11
        push 24h
        push 676ad0h
        ; Exact mapped bytes E8 43 CB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec202
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4ec1da
        __asm _emit 0x75
        __asm _emit 0xd2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 3ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 40h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 44h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 48h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4ch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 50h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 54h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 58h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 5ch], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 2ch], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 34h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 38h], 0
        ; Exact mapped bytes 83 3D DC 22 67 00 00: cmp dword ptr [0x6722dc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x22
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x4ec363
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 83 3D 3C 6A 68 00 00: cmp dword ptr [0x686a3c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 43: jne 0x4ec307
        __asm _emit 0x75
        __asm _emit 0x43
        push 3eh
        push 676ad0h
        push 1ch
        ; Exact mapped bytes E8 2D FE FD FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0F: je 0x4ec2ee
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0ah
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F7 50 FD FF: call 0x4c13e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4ec2f5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 10h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes A3 3C 6A 68 00: mov dword ptr [0x686a3c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 38 6A 68 00 00: cmp dword ptr [0x686a38], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 42: jne 0x4ec352
        __asm _emit 0x75
        __asm _emit 0x42
        push 40h
        push 676ad0h
        push 20h
        ; Exact mapped bytes E8 E1 FD FD FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0D: je 0x4ec338
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C8 89 05 00: call 0x544cfb
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x4ec33f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 89 15 38 6A 68 00: mov dword ptr [0x686a38], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes 8B 0D 3C 6A 68 00: mov ecx, dword ptr [0x686a3c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 53 FD FF: call 0x4c1742
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x4ec375
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 1ch], 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1D 00 00 00: call 0x4ec392
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
