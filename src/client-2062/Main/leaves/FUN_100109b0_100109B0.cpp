// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100109B0 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_100109b0_100109B0() {
    __asm {
        push -1
        push 1016d1e6h
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
        mov ebp, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 1ch]
        push esi
        push edi
        mov edi, ecx
        lea eax, [ebp + 1eh]
        push 40h
        lea ecx, [ebx + 64h]
        push eax
        push ecx
        push ebp
        push ebx
        push edx
        mov ecx, edi
        mov dword ptr [esp + 28h], edi
        ; Exact mapped bytes E8 C0 DF 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xdf
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 67 24 F0 FF: and word ptr [edi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        push 70h
        mov dword ptr [esp + 20h], 0
        mov dword ptr [edi], 10175378h
        mov dword ptr [edi + 60h], 1
        ; Exact mapped bytes E8 8E BD 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xbd
        __asm _emit 0x15
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 6D: je 0x10010a91
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes A1 9C 56 1C 10: mov eax, dword ptr [0x101c569c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [ebp + 18h]
        mov dword ptr [esp + 2ch], eax
        push 40h
        lea edx, [ebx + 190h]
        push ecx
        lea eax, [ebp + 6]
        push edx
        lea ecx, [ebx + 0ah]
        push eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 66 DF 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esp + 2ch]
        xor eax, eax
        mov dword ptr [esi + 50h], edx
        mov dword ptr [esi + 60h], 0ffffffh
        mov dword ptr [esi + 64h], eax
        mov dword ptr [esi + 68h], eax
        mov dword ptr [esi + 58h], 8
        mov dword ptr [esi + 5ch], 10h
        mov dword ptr [esi + 54h], eax
        push 80h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 1A BD 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xbd
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], 0
        ; Exact mapped bytes EB 02: jmp 0x10010a93
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [edi + 58h], esi
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 60h], 0ffffffh
        ; Exact mapped bytes E8 F4 BC 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbc
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        xor esi, esi
        mov byte ptr [esp + 1ch], 3
        cmp eax, esi
        ; Exact mapped bytes 74 38: je 0x10010af6
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 29h
        ; Exact mapped bytes 7E 12: jle 0x10010adf
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, esi
        ; Exact mapped bytes 74 08: je 0x10010adf
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 0a40h
        ; Exact mapped bytes EB 02: jmp 0x10010ae1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        add ebp, 5
        add ebx, -12h
        push ebp
        push ebx
        push 2
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 9C E7 0E 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10010af8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [edi + 5ch], eax
        ; Exact mapped bytes E8 54 E6 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe6
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [edi + 5ch]
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov dword ptr [edi + 54h], esi
        mov dword ptr [edi + 50h], esi
        mov eax, edi
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
