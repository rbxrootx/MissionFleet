// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10078360 .. +0x372 bytes.
extern "C" __declspec(naked) void FUN_10078360_10078360() {
    __asm {
        push -1
        push 1016f92fh
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
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        mov edx, dword ptr [esp + 30h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 AB F1 FC FF: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10175cf4h
        ; Exact mapped bytes E8 E8 43 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 73: je 0x1007843d
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 23h
        ; Exact mapped bytes 7E 12: jle 0x100783ea
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100783ea
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 8ch]
        ; Exact mapped bytes EB 02: jmp 0x100783ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 AE 65 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10078439
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x1007843f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 84h], ecx
        ; Exact mapped bytes E8 0D 6D 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6d
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 3A 43 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x43
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 73: je 0x100784eb
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 22h
        ; Exact mapped bytes 7E 12: jle 0x10078498
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10078498
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 88h]
        ; Exact mapped bytes EB 02: jmp 0x1007849a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 00 65 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100784e7
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
        ; Exact mapped bytes EB 02: jmp 0x100784ed
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0c8h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 88h], ecx
        ; Exact mapped bytes E8 1F 6C 08 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        push 54h
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 8C 42 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 73: je 0x10078599
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 21h
        ; Exact mapped bytes 7E 12: jle 0x10078546
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10078546
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 84h]
        ; Exact mapped bytes EB 02: jmp 0x10078548
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push 40h
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 52 64 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10078595
        __asm _emit 0x74
        __asm _emit 0x2a
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
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x1007859b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 8ch], ecx
        ; Exact mapped bytes E8 B1 6B 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x6b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        push 0fch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 DB 41 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x41
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 4
        mov ebp, 0cch
        ; Exact mapped bytes 74 3F: je 0x10078619
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 12: jle 0x100785fa
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100785fa
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3300h
        ; Exact mapped bytes EB 02: jmp 0x100785fc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        add edx, -0ah
        push edx
        mov edx, dword ptr [esp + 2ch]
        add edx, 2
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 79 6C 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007861b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 2F 6B 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        mov edi, 0fffeh
        push 0fch
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes E8 56 41 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x41
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 5
        ; Exact mapped bytes 74 3F: je 0x10078699
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebp
        ; Exact mapped bytes 7E 12: jle 0x1007867a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1007867a
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 3300h
        ; Exact mapped bytes EB 02: jmp 0x1007867c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 2ch]
        add edx, -0ah
        push edx
        mov edx, dword ptr [esp + 2ch]
        add edx, 1ah
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F9 6B 08 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6b
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007869b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 AF 6A 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
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
