// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002B080 .. +0x436 bytes.
extern "C" __declspec(naked) void FUN_1002b080_1002B080() {
    __asm {
        push -1
        push 1016dc2bh
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
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ecx, ecx
        mov eax, dword ptr [esi + 8ch]
        mov dword ptr [esi + 78h], ebx
        ; Exact mapped bytes 8B 2D 6C 57 1C 10: mov ebp, dword ptr [0x101c576c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x6c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov cl, byte ptr [eax + esi + 7ch]
        mov eax, ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 2ah
        shl eax, 5
        or al, 5
        ; Exact mapped bytes 66 89 44 24 28: mov word ptr [esp + 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        mov edx, dword ptr [esp + 28h]
        push edx
        ; Exact mapped bytes E8 6C 9F FF FF: call 0x10025040
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 2A: jne 0x1002b104
        __asm _emit 0x75
        __asm _emit 0x2a
        push eax
        ; Exact mapped bytes A1 DC 92 1C 10: mov eax, dword ptr [0x101c92dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1017f3bch
        push 1017f394h
        push eax
        ; Exact mapped bytes FF 15 8C 51 17 10: call dword ptr [0x1017518c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 74 10 14 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 90 51 17 10: call dword ptr [0x10175190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 8F A2 00 00 00: mov cx, word ptr [edi + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0bh
        ; Exact mapped bytes E8 17 A2 FF FF: call 0x10025330
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes 75 2B: jne 0x1002b14c
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 15 DC 92 1C 10: mov edx, dword ptr [0x101c92dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push 1017f3bch
        push 1017f364h
        push edx
        ; Exact mapped bytes FF 15 8C 51 17 10: call dword ptr [0x1017518c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 2C 10 14 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 90 51 17 10: call dword ptr [0x10175190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push 243d0h
        mov dword ptr [esi + 78h], ebx
        ; Exact mapped bytes E8 47 16 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x16
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        test eax, eax
        mov dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 74 3C: je 0x1002b1a8
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp + 160h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 57 04: mov dx, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x04
        cmp ecx, edx
        ; Exact mapped bytes 7E 15: jle 0x1002b191
        __asm _emit 0x7e
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 7C 11: jl 0x1002b191
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1002b191
        __asm _emit 0x74
        __asm _emit 0x07
        shl edx, 6
        add edx, ecx
        ; Exact mapped bytes EB 02: jmp 0x1002b193
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esi + 8]
        push 40h
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 6A 8B 01 00: call 0x10043d10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1002b1aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ebp
        mov ecx, eax
        mov dword ptr [esp + 20h], 0ffffffffh
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 A0 8A 01 00: call 0x10043c60
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 0ffffh
        push 0
        push edi
        ; Exact mapped bytes E8 ED A0 01 00: call 0x100452c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 64h
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esi + 0c4h]
        push 0
        push eax
        ; Exact mapped bytes E8 AE 98 01 00: call 0x10044aa0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 0
        push 2710h
        ; Exact mapped bytes E8 3C 98 01 00: call 0x10044a40
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 30: call dword ptr [edx + 0x30]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x30
        mov ecx, dword ptr [esi + 0c4h]
        push 0
        ; Exact mapped bytes E8 74 85 01 00: call 0x10043790
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        mov dword ptr [eax + 120h], 0
        mov al, byte ptr [edi + 9ch]
        mov ecx, dword ptr [esi + 0c4h]
        and eax, 7fh
        cmp eax, 64h
        ; Exact mapped bytes 72 05: jb 0x1002b245
        __asm _emit 0x72
        __asm _emit 0x05
        mov eax, 64h
        mov dword ptr [ecx + 0cch], eax
        mov ecx, dword ptr [esi + 0c4h]
        push 168h
        push 0
        ; Exact mapped bytes E8 53 84 01 00: call 0x100436b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push ebx
        push 168h
        push 0
        ; Exact mapped bytes E8 70 84 01 00: call 0x100436e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8F 9A 00 00 00: mov cx, word ptr [edi + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shr ecx, 4
        and ecx, 7fh
        push ecx
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes E8 C7 84 01 00: call 0x10043750
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        lea eax, [ebx + ebx*4]
        shl eax, 1
        push eax
        mov dword ptr [ecx + 0a8h], eax
        ; Exact mapped bytes E8 D0 7D 01 00: call 0x10043070
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push 0
        ; Exact mapped bytes E8 13 86 01 00: call 0x100438c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        test eax, eax
        ; Exact mapped bytes 74 75: je 0x1002b32c
        __asm _emit 0x74
        __asm _emit 0x75
        push 1c24h
        ; Exact mapped bytes E8 DF 14 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, eax
        mov ecx, 709h
        xor eax, eax
        mov dword ptr [esi + 0d0h], edi
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edx, dword ptr [esi + 0c4h]
        mov eax, dword ptr [esi + 0d0h]
        add esp, 4
        mov dword ptr [edx + 16ch], eax
        mov eax, dword ptr [esi + 8ch]
        test eax, eax
        mov edi, eax
        ; Exact mapped bytes 75 05: jne 0x1002b2f8
        __asm _emit 0x75
        __asm _emit 0x05
        mov edi, 1
        mov ecx, dword ptr [esi + 0c4h]
        mov eax, dword ptr [ecx + 154h]
        cdq
        idiv edi
        mov dword ptr [ecx + 154h], eax
        mov eax, dword ptr [esi + 8ch]
        mov ecx, dword ptr [esi + 0c4h]
        lea eax, [eax + eax*4]
        mov edx, dword ptr [ecx]
        lea eax, [eax + eax*4]
        lea eax, [eax*4 + 0ah]
        push eax
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        ; Exact mapped bytes A1 6C 57 1C 10: mov eax, dword ptr [0x101c576c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, 4
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 11: jle 0x1002b34f
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1002b34f
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 100h
        ; Exact mapped bytes EB 02: jmp 0x1002b351
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        xor ecx, ecx
        mov edi, 3
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        mov dword ptr [esi + 70h], ecx
        ; Exact mapped bytes A1 6C 57 1C 10: mov eax, dword ptr [0x101c576c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 11: jle 0x1002b37d
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1002b37d
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x1002b37f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        mov eax, edx
        cdq
        idiv ecx
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes A1 6C 57 1C 10: mov eax, dword ptr [0x101c576c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 11: jle 0x1002b3ab
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1002b3ab
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x1002b3ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c8h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1002b3e2
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
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
        ; Exact mapped bytes A1 6C 57 1C 10: mov eax, dword ptr [0x101c576c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 11: jle 0x1002b400
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1002b400
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 100h
        ; Exact mapped bytes EB 02: jmp 0x1002b402
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0cch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1002b437
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
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
        mov ecx, dword ptr [esi + 70h]
        mov eax, 0b60b60b7h
        dec ecx
        pop edi
        imul ecx, dword ptr [esi + 78h]
        imul ecx
        mov eax, dword ptr [esi + 0c8h]
        add edx, ecx
        sar edx, 8
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [esi + 70h]
        dec ecx
        mov eax, 0b60b60b7h
        imul ecx, dword ptr [esi + 78h]
        imul ecx
        mov eax, dword ptr [esi + 0cch]
        add edx, ecx
        sar edx, 8
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [esi + 0c8h]
        add ecx, 14h
        add esi, 14h
        mov edx, dword ptr [ecx]
        mov dword ptr [esi], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [esi + 4], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [esi + 8], edx
        mov eax, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 0ch], eax
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
