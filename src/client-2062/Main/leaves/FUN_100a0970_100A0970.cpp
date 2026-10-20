// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A0970 .. +0x294 bytes.
extern "C" __declspec(naked) void FUN_100a0970_100A0970() {
    __asm {
        push -1
        push 101710c9h
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
        mov ebp, dword ptr [esp + 20h]
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
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 5B E0 FF FF: call 0x1009ea10
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi], 10175fech
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ebx, ebx
        mov ecx, dword ptr [eax + 164h]
        mov dword ptr [esp + 1ch], ebx
        cmp ecx, 12ch
        ; Exact mapped bytes 7E 12: jle 0x100a09e6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a09e6
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 4b0h]
        ; Exact mapped bytes EB 02: jmp 0x100a09e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        cmp eax, ebx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a0a1d
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
        push 0cch
        ; Exact mapped bytes E8 79 BD 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbd
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 16: je 0x100a0a4d
        __asm _emit 0x74
        __asm _emit 0x16
        push 40h
        push ebx
        lea ecx, [edi + 13h]
        push ebx
        lea edx, [ebp + 27h]
        push ecx
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C5 E3 FA FF: call 0x1004ee10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe3
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a0a4f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0cch
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 3D BD 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xbd
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 16: je 0x100a0a89
        __asm _emit 0x74
        __asm _emit 0x16
        push 40h
        push ebx
        add edi, 25h
        push ebx
        add ebp, 27h
        push edi
        push ebp
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 89 E3 FA FF: call 0x1004ee10
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe3
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a0a8b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 0ach]
        mov dword ptr [esi + 0b0h], eax
        mov ebp, 7d0h
        mov byte ptr [esp + 1ch], bl
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a0ab1
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EF E4 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a0abe
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 42 E4 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 6F 26: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a0ad5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 CB E4 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a0ae2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 1E E4 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0ach]
        push 4
        push ebx
        push 3
        push 14h
        push eax
        ; Exact mapped bytes E8 76 E7 FA FF: call 0x1004f270
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe7
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 4
        push ebx
        push 3
        push 14h
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 5D E7 FA FF: call 0x1004f270
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe7
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 86 BC 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 7D: je 0x100a0ba9
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0bh
        ; Exact mapped bytes 7E 12: jle 0x100a0b4c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a0b4c
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 2c0h]
        ; Exact mapped bytes EB 02: jmp 0x100a0b4e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 0bb8h
        push ebx
        add edx, 16h
        push ebx
        add eax, 6
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 43 DE 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2E: je 0x100a0bab
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 18h]
        add ebp, 20h
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
        ; Exact mapped bytes EB 02: jmp 0x100a0bab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0a8h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 9E A4 00 00 00: mov word ptr [esi + 0xa4], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E A6 00 00 00: mov word ptr [esi + 0xa6], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 21h
        ; Exact mapped bytes 7E 12: jle 0x100a0be5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a0be5
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 84h]
        ; Exact mapped bytes EB 02: jmp 0x100a0be7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 0b4h], eax
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
