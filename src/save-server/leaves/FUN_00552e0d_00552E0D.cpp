// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00552E0D .. +0x1C5 bytes.
extern "C" __declspec(naked) void FUN_00552e0d_00552E0D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 2ch], 0
        push 2a3h
        push 67c1e0h
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 18 74 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x552e65
        __asm _emit 0x74
        __asm _emit 0x14
        push 2a4h
        push 67c1e0h
        ; Exact mapped bytes E8 E0 5E FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552e65
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x552e48
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 34h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x552e88
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a5h
        push 67c1e0h
        ; Exact mapped bytes E8 BD 5E FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552e88
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x552e6b
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 25: je 0x552eb9
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 C5 05 F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x552eb9
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a7h
        push 67c1e0h
        ; Exact mapped bytes E8 8C 5E FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552eb9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x552e8e
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 EB EB FF FF: call 0x551ab2
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 28h], eax
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x552ef8
        __asm _emit 0x75
        __asm _emit 0x14
        push 2ach
        push 67c1e0h
        ; Exact mapped bytes E8 4D 5E FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552ef8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x552edb
        __asm _emit 0x75
        __asm _emit 0xdd
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 DE 96 FF FF: call 0x54c5ee
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 14h], eax
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 09: jne 0x552f39
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 36: jmp 0x552f6f
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 48 30 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x30
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], esp
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 84 A6 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 34h]
        add edx, 20h
        push edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 640d30h
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 44 C2 68 00: call dword ptr [0x68c244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 2b9h
        push 67c1e0h
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 9D 72 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        lea esp, [ebp - 48h]
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
