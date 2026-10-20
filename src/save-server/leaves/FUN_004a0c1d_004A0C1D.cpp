// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0C1D .. +0x22E bytes.
extern "C" __declspec(naked) void FUN_004a0c1d_004A0C1D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 88 41 08 00: call 0x524dba
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4a0c42
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 00 02 00 00: jmp 0x4a0e42
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 6F 41 08 00: call 0x524dba
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 54 40 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 43: jae 0x4a0cbb
        __asm _emit 0x73
        __asm _emit 0x43
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 AB 8A FA FF: call 0x449730
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x8a
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 14: je 0x4a0ca5
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB D3: jmp 0x4a0c78
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB B5: jmp 0x4a0c70
        __asm _emit 0xeb
        __asm _emit 0xb5
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 8E 7A 01 00 00: jle 0x4a0e3f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2A BB 02 00: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E4 3F 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 0ch]
        imul ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 1ch]
        add edx, ecx
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C4 3F 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 7C 0D: jl 0x4a0d0a
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B4 3F 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 7E 41: jle 0x4a0d4b
        __asm _emit 0x7e
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A7 3F 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 90 B8 02 00: call 0x4cc5b9
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 C1 45 FC FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 B7 B9 02 00: call 0x4cc702
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5E 3F 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 83 95 00 00 00: jae 0x4a0e07
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 B1 89 FA FF: call 0x449730
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 63: je 0x4a0dee
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 1ch]
        sub edx, ecx
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 AB 4E FC FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 37 45 FC FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 2ch]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 1ch]
        add eax, edx
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 84: jmp 0x4a0d72
        __asm _emit 0xeb
        __asm _emit 0x84
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x4a0d66
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 0C 02: movsx ecx, byte ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x02
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4a0e2b
        __asm _emit 0x74
        __asm _emit 0x14
        push 117h
        push 671534h
        ; Exact mapped bytes E8 1A 7F 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a0e2b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4a0e07
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 80 3E 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 4], ecx
        mov eax, dword ptr [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
