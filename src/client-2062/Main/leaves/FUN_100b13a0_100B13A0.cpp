// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B13A0 .. +0x292 bytes.
extern "C" __declspec(naked) void FUN_100b13a0_100B13A0() {
    __asm {
        push -1
        push 10171b6fh
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
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        push ebp
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 CB D5 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor ebx, ebx
        lea eax, [esi + 58h]
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esi], 10176134h
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 34h], 2
        push 54h
        ; Exact mapped bytes E8 95 B3 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb3
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 1D: je 0x100b143a
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 81 D5 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100b143c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        push 54h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [eax - 8], edi
        ; Exact mapped bytes E8 52 B3 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb3
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 1D: je 0x100b147d
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3E D5 04 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x100b147f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, dword ptr [esp + 38h]
        push 0fch
        mov byte ptr [esp + 20h], bl
        mov dword ptr [edx], edi
        ; Exact mapped bytes E8 0D B3 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb3
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 3F: je 0x100b14e2
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 29h
        ; Exact mapped bytes 7E 12: jle 0x100b14c4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b14c4
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a40h
        ; Exact mapped bytes EB 02: jmp 0x100b14c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 43h]
        push edx
        mov edx, dword ptr [esp + 2ch]
        add edx, 0cfh
        push edx
        push 8
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B0 DD 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100b14e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 38h]
        mov dword ptr [esi + 60h], eax
        mov eax, dword ptr [esp + 34h]
        add ecx, 4
        dec eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esp + 38h], ecx
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 FF FE FF FF: jne 0x100b1404
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 50h]
        push 0fffffeffh
        ; Exact mapped bytes E8 4E DC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        push 0fffffeffh
        ; Exact mapped bytes E8 41 DC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        push 101h
        ; Exact mapped bytes E8 34 DC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 6A B2 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb2
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 50: je 0x100b1596
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 44 57 1C 10: mov ecx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 9
        ; Exact mapped bytes 7E 12: jle 0x100b1567
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b1567
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 240h
        ; Exact mapped bytes EB 02: jmp 0x100b1569
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0dch]
        push 40h
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 0a0h
        push edx
        ; Exact mapped bytes 8B 15 5C 58 1C 10: mov edx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 2C 5D F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x5d
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b1598
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0a0h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 F7 B1 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb1
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 4C: je 0x100b1605
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 44 57 1C 10: mov ecx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 10: jle 0x100b15d8
        __asm _emit 0x7e
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100b15d8
        __asm _emit 0x74
        __asm _emit 0x06
        lea ebx, [ecx + 2c0h]
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 8B 15 68 58 1C 10: mov edx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add ebp, 0dch
        push 40h
        add ecx, 0f4h
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 BD 5C F6 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x5c
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100b1607
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and edx, 0e5f0h
        mov dword ptr [esi + 68h], eax
        or dh, 5
        mov eax, esi
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
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
