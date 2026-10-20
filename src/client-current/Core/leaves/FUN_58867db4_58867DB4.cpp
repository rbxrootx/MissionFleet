// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867DB4 .. +0x21B bytes.
extern "C" __declspec(naked) void FUN_58867db4_58867DB4() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        lea eax, [ebp - 4]
        xor esi, esi
        push eax
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 4F 96 00 00: call 0x5887141b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 F0 01 00 00: jne 0x58867fc5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], esi
        ; Exact mapped bytes 0F 84 E3 01 00 00: je 0x58867fc1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 8]
        xor ecx, ecx
        push edi
        inc ecx
        mov edi, dword ptr [ebx + 14h]
        ; Exact mapped bytes 3B 3D 40 74 90 58: cmp edi, dword ptr [0x58907440]
        __asm _emit 0x3b
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 75 0C: jne 0x58867dfc
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 3D 4C 74 90 58: cmp edi, dword ptr [0x5890744c]
        __asm _emit 0x3b
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 5B 01 00 00: je 0x58867f57
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 35 C8 98 96 58: cmp dword ptr [0x589698c8], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x58867f03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 35 68 99 96 58: cmp word ptr [0x58969968], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 18: jne 0x58867e29
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 0F B7 1D 6C 99 96 58: movzx ebx, word ptr [0x5896996c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0x6c
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, ecx
        ; Exact mapped bytes 0F B7 15 6E 99 96 58: movzx edx, word ptr [0x5896996e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x15
        __asm _emit 0x6e
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], ebx
        mov dword ptr [ebp - 18h], esi
        ; Exact mapped bytes EB 11: jmp 0x58867e3a
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes 0F B7 1D 6E 99 96 58: movzx ebx, word ptr [0x5896996e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0x6e
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, esi
        mov edx, esi
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 18h], ebx
        ; Exact mapped bytes 0F B7 1D 70 99 96 58: movzx ebx, word ptr [0x58969970]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0x70
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 0D 6A 99 96 58: movzx ecx, word ptr [0x5896996a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x6a
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], ebx
        ; Exact mapped bytes 0F B7 1D 72 99 96 58: movzx ebx, word ptr [0x58969972]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], ebx
        ; Exact mapped bytes 0F B7 1D 74 99 96 58: movzx ebx, word ptr [0x58969974]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0x74
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], ebx
        ; Exact mapped bytes 0F B7 1D 76 99 96 58: movzx ebx, word ptr [0x58969976]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0x76
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        push ebx
        push dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ebx
        push dword ptr [ebp - 10h]
        push dword ptr [ebp - 14h]
        push dword ptr [ebp - 18h]
        push dword ptr [ebp - 1ch]
        push edx
        push ecx
        push edi
        push eax
        push esi
        ; Exact mapped bytes E8 4D 01 00 00: call 0x58867fd0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 1D 1C 99 96 58: movzx ebx, word ptr [0x5896991c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0x1c
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        add esp, 2ch
        ; Exact mapped bytes 0F B7 0D 16 99 96 58: movzx ecx, word ptr [0x58969916]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x16
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], ebx
        ; Exact mapped bytes 0F B7 1D 1E 99 96 58: movzx ebx, word ptr [0x5896991e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0x1e
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], ebx
        ; Exact mapped bytes 0F B7 1D 20 99 96 58: movzx ebx, word ptr [0x58969920]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], ebx
        ; Exact mapped bytes 0F B7 1D 22 99 96 58: movzx ebx, word ptr [0x58969922]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0x22
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], ebx
        mov ebx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 39 35 14 99 96 58: cmp word ptr [0x58969914], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 13: jne 0x58867ed4
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 0F B7 15 1A 99 96 58: movzx edx, word ptr [0x5896991a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x15
        __asm _emit 0x1a
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes 0F B7 3D 18 99 96 58: movzx edi, word ptr [0x58969918]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        inc eax
        ; Exact mapped bytes EB 0D: jmp 0x58867ee1
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, esi
        mov edx, esi
        mov edi, esi
        ; Exact mapped bytes 0F B7 35 1A 99 96 58: movzx esi, word ptr [0x5896991a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x35
        __asm _emit 0x1a
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        push dword ptr [ebp - 1ch]
        push dword ptr [ebp - 18h]
        push dword ptr [ebp - 14h]
        push dword ptr [ebp - 10h]
        push esi
        push edi
        push edx
        push ecx
        push dword ptr [ebx + 14h]
        xor esi, esi
        push eax
        inc esi
        push esi
        ; Exact mapped bytes E8 D2 00 00 00: call 0x58867fd0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes EB 57: jmp 0x58867f5a
        __asm _emit 0xeb
        __asm _emit 0x57
        push esi
        push esi
        push esi
        xor eax, eax
        cmp edi, 6bh
        push 2
        push esi
        setge al
        inc eax
        push esi
        push eax
        xor eax, eax
        cmp edi, 6bh
        setl al
        add eax, 3
        push eax
        push edi
        push ecx
        push esi
        ; Exact mapped bytes E8 A8 00 00 00: call 0x58867fd0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push esi
        push esi
        push 2
        push esi
        push esi
        push 5
        pop eax
        push 1
        pop esi
        cmp edi, 6bh
        cmovge eax, esi
        push eax
        xor eax, eax
        cmp edi, 6bh
        setge al
        add eax, 0ah
        push eax
        push dword ptr [ebx + 14h]
        push esi
        push esi
        ; Exact mapped bytes E8 7E 00 00 00: call 0x58867fd0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 58h
        ; Exact mapped bytes EB 03: jmp 0x58867f5a
        __asm _emit 0xeb
        __asm _emit 0x03
        xor esi, esi
        inc esi
        ; Exact mapped bytes 8B 15 44 74 90 58: mov edx, dword ptr [0x58907444]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A1 50 74 90 58: mov eax, dword ptr [0x58907450]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        mov ecx, dword ptr [ebx + 1ch]
        pop edi
        cmp edx, eax
        ; Exact mapped bytes 7D 16: jge 0x58867f83
        __asm _emit 0x7d
        __asm _emit 0x16
        cmp ecx, edx
        ; Exact mapped bytes 7C 50: jl 0x58867fc1
        __asm _emit 0x7c
        __asm _emit 0x50
        cmp ecx, eax
        ; Exact mapped bytes 7F 4C: jg 0x58867fc1
        __asm _emit 0x7f
        __asm _emit 0x4c
        cmp ecx, edx
        ; Exact mapped bytes 7E 1A: jle 0x58867f93
        __asm _emit 0x7e
        __asm _emit 0x1a
        cmp ecx, eax
        ; Exact mapped bytes 7D 16: jge 0x58867f93
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
        cmp ecx, eax
        ; Exact mapped bytes 7C F6: jl 0x58867f7d
        __asm _emit 0x7c
        __asm _emit 0xf6
        cmp ecx, edx
        ; Exact mapped bytes 7F F2: jg 0x58867f7d
        __asm _emit 0x7f
        __asm _emit 0xf2
        cmp ecx, eax
        ; Exact mapped bytes 7E 04: jle 0x58867f93
        __asm _emit 0x7e
        __asm _emit 0x04
        cmp ecx, edx
        ; Exact mapped bytes 7C 2E: jl 0x58867fc1
        __asm _emit 0x7c
        __asm _emit 0x2e
        imul eax, dword ptr [ebx + 8], 3ch
        add eax, dword ptr [ebx + 4]
        imul eax, eax, 3ch
        add eax, dword ptr [ebx]
        imul esi, eax, 3e8h
        xor eax, eax
        cmp ecx, edx
        ; Exact mapped bytes 75 0B: jne 0x58867fb6
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 3B 35 48 74 90 58: cmp esi, dword ptr [0x58907448]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x48
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        setge al
        ; Exact mapped bytes EB C9: jmp 0x58867f7f
        __asm _emit 0xeb
        __asm _emit 0xc9
        ; Exact mapped bytes 3B 35 54 74 90 58: cmp esi, dword ptr [0x58907454]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        setl al
        ; Exact mapped bytes EB BE: jmp 0x58867f7f
        __asm _emit 0xeb
        __asm _emit 0xbe
        xor eax, eax
        ; Exact mapped bytes EB BA: jmp 0x58867f7f
        __asm _emit 0xeb
        __asm _emit 0xba
        push esi
        push esi
        push esi
        push esi
        push esi
        ; Exact mapped bytes E8 0A 90 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
