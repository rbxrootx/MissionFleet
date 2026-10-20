// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873C80 .. +0x12A bytes.
extern "C" __declspec(naked) void FUN_58873c80() {
    __asm {
        push -1
        push 58986378h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 28h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        xor edi, edi
        mov dword ptr [esp + 14h], 5899688ch
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [esp + 30h], edi
        cmp eax, edi
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x58873d94
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 2ch]
        cmp ecx, edi
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x58873d94
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 38h]
        lea ebx, [ebp - 1]
        cmp ebx, 3
        ; Exact mapped bytes 0F 87 94 00 00 00: ja 0x58873d87
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 9D AC 3D 87 58: jmp dword ptr [ebx*4 + 0x58873dac]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x9d
        __asm _emit 0xac
        __asm _emit 0x3d
        __asm _emit 0x87
        __asm _emit 0x58
        cmp dword ptr [esi + 84h], 3
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes 74 7B: je 0x58873d82
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes E8 54 F9 FF FF: call 0x58873660
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 79: jmp 0x58873d87
        __asm _emit 0xeb
        __asm _emit 0x79
        cmp dword ptr [esi + 84h], 2
        ; Exact mapped bytes 74 17: je 0x58873d2e
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [eax + 0d54h]
        and ecx, 0fh
        ; Exact mapped bytes 89 0D 84 83 A2 58: mov dword ptr [0x58a28384], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes EB 16: jmp 0x58873d44
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes A1 84 83 A2 58: mov eax, dword ptr [0x58a28384]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        inc eax
        cmp eax, 8
        ; Exact mapped bytes A3 84 83 A2 58: mov dword ptr [0x58a28384], eax
        __asm _emit 0xa3
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 7E 06: jle 0x58873d44
        __asm _emit 0x7e
        __asm _emit 0x06
        ; Exact mapped bytes 89 3D 84 83 A2 58: mov dword ptr [0x58a28384], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 2ch]
        mov ecx, dword ptr [edx + 24h]
        push eax
        push 58a28384h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 E8 F9 FF FF: call 0x58873740
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2D: jmp 0x58873d87
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp dword ptr [esi + 84h], 1
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes 74 1B: je 0x58873d82
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes E8 F4 FA FF FF: call 0x58873860
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x58873d87
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp dword ptr [esi + 84h], 4
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes 74 07: je 0x58873d82
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 B0 FB FF FF: call 0x58873930
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x58873d87
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 F9 FC FF FF: call 0x58873a80
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        mov dword ptr [esi + 84h], ebp
        ; Exact mapped bytes E8 5C F3 FF FF: call 0x588730f0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
