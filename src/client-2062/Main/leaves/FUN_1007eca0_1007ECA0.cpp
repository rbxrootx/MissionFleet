// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007ECA0 .. +0x37A bytes.
extern "C" __declspec(naked) void FUN_1007eca0_1007ECA0() {
    __asm {
        push -1
        push 1016fd4fh
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
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 CB FC 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        xor ebx, ebx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 198h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10175d9ch
        ; Exact mapped bytes E8 91 DA 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 0F: je 0x1007ed2e
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101ab964h
        mov ecx, eax
        ; Exact mapped bytes E8 94 0D 08 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007ed30
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 60h], eax
        lea eax, [esi + 64h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [esp + 38h], eax
        push 54h
        ; Exact mapped bytes E8 5A DA 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 7A: je 0x1007edd2
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 13: jle 0x1007ed76
        __asm _emit 0x7e
        __asm _emit 0x13
        test ebx, ebx
        ; Exact mapped bytes 7C 0F: jl 0x1007ed76
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1007ed76
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + ebx*4]
        ; Exact mapped bytes EB 02: jmp 0x1007ed78
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push 0
        add ecx, 78h
        push 0
        add edx, 96h
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 17 FC 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1007edd4
        __asm _emit 0x74
        __asm _emit 0x2e
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
        ; Exact mapped bytes EB 02: jmp 0x1007edd4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 38h]
        inc ebx
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        add eax, 4
        cmp ebx, 2
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 0F 8C 4F FF FF FF: jl 0x1007ed3f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        push 0fffffeffh
        ; Exact mapped bytes E8 63 03 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 0e1h
        ; Exact mapped bytes E8 16 03 08 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [esi + 6ch]
        mov ebx, 2
        mov dword ptr [esp + 38h], 8
        mov dword ptr [esp + 34h], eax
        push 54h
        ; Exact mapped bytes E8 7B D9 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 7E: je 0x1007eeb5
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 17: jle 0x1007ee59
        __asm _emit 0x7e
        __asm _emit 0x17
        test ebx, ebx
        ; Exact mapped bytes 7C 13: jl 0x1007ee59
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1007ee59
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esp + 38h]
        mov ebp, dword ptr [edx + eax]
        ; Exact mapped bytes EB 02: jmp 0x1007ee5b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push 0
        add eax, 78h
        push 0
        add ecx, 96h
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 34 FB 07 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0x07
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2E: je 0x1007eeb7
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
        ; Exact mapped bytes EB 02: jmp 0x1007eeb7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov byte ptr [esp + 1ch], 0
        mov dword ptr [eax], edi
        mov edi, dword ptr [esp + 38h]
        add edi, 4
        add eax, 4
        inc ebx
        mov dword ptr [esp + 38h], edi
        mov dword ptr [esp + 34h], eax
        lea ecx, [ebx - 2]
        cmp ecx, 2
        ; Exact mapped bytes 0F 8C 3D FF FF FF: jl 0x1007ee1e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        push 0fffffeffh
        ; Exact mapped bytes E8 72 02 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 101h
        ; Exact mapped bytes E8 65 02 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 9B D8 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd8
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 4
        ; Exact mapped bytes 74 4A: je 0x1007ef5f
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x1007ef2c
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x1007ef2e
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        add edx, 187h
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 1d2h
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
        ; Exact mapped bytes E8 63 83 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1007ef61
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 EB 01 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x08
        __asm _emit 0x00
        push 0a0h
        ; Exact mapped bytes E8 21 D8 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd8
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 4E: je 0x1007efdd
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [esi + 60h]
        cmp dword ptr [ecx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x1007efaa
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x1007efaa
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 40h
        ; Exact mapped bytes EB 02: jmp 0x1007efac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        push 40h
        add edx, 187h
        push edx
        mov edx, dword ptr [esp + 30h]
        add edx, 224h
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
        ; Exact mapped bytes E8 E5 82 F9 FF: call 0x100172c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1007efdf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 6D 01 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5f0h
        pop edi
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, esi
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
