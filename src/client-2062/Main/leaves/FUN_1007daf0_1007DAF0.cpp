// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007DAF0 .. +0x2EC bytes.
extern "C" __declspec(naked) void FUN_1007daf0_1007DAF0() {
    __asm {
        sub esp, 40h
        ; Exact mapped bytes 66 8B 44 24 44: mov ax, word ptr [esp + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 60h]
        mov ebp, 6
        lea edi, [esi + 74h]
        ; Exact mapped bytes 66 89 86 A8 00 00 00: mov word ptr [esi + 0xa8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0a4h], ecx
        mov dword ptr [esp + 60h], edi
        mov ebx, edi
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 EC 6B 08 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6b
        __asm _emit 0x08
        __asm _emit 0x00
        add ebx, 4
        dec ebp
        ; Exact mapped bytes 75 F3: jne 0x1007db1d
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [edi]
        push 777777h
        push 0
        push 101ab958h
        ; Exact mapped bytes E8 73 61 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 777777h
        push 0
        push 101ab954h
        ; Exact mapped bytes E8 5F 61 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push 777777h
        push 0
        push 101ab954h
        ; Exact mapped bytes E8 4B 61 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push 777777h
        push 0
        push 101ab954h
        ; Exact mapped bytes E8 34 61 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 777777h
        push 0
        push 101ab954h
        ; Exact mapped bytes E8 1D 61 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 777777h
        push 0
        push 101ab954h
        ; Exact mapped bytes E8 06 61 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 0
        push 0
        ; Exact mapped bytes E8 2B 62 08 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 0
        push 0
        ; Exact mapped bytes E8 1F 62 08 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push 0
        push 0
        ; Exact mapped bytes E8 13 62 08 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push 0
        push 0
        ; Exact mapped bytes E8 04 62 08 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 0
        push 0
        ; Exact mapped bytes E8 F5 61 08 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 0
        push 0
        ; Exact mapped bytes E8 E6 61 08 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 58h]
        mov dword ptr [esp + 54h], 1
        test eax, eax
        ; Exact mapped bytes 0F 8E A6 01 00 00: jle 0x1007ddb4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 5ch]
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 5ch], eax
        lea ebp, [edx + 8]
        ; Exact mapped bytes 66 8B 45 F8: mov ax, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 51 73 FA FF: call 0x10024f80
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x73
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 65 01 00 00: je 0x1007dd9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 60h]
        push 777777h
        lea ecx, [edi + 78h]
        push edi
        push ecx
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 62 60 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 24h]
        lea ecx, [esp + 10h]
        push eax
        push 101ab94ch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [edi + 24h]
        mov ecx, dword ptr [esi + 78h]
        add esp, 0ch
        lea eax, [esp + 10h]
        push 777777h
        push edx
        push eax
        ; Exact mapped bytes E8 39 60 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        lea edx, [esp + 10h]
        push ecx
        push 101ab944h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [ebp]
        add esp, 0ch
        lea ecx, [esp + 10h]
        push 777777h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes E8 10 60 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 A8 00 00 00: mov ax, word ptr [esi + 0xa8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 77 57: ja 0x1007dd05
        __asm _emit 0x77
        __asm _emit 0x57
        ; Exact mapped bytes FF 24 85 DC DD 07 10: jmp dword ptr [eax*4 + 0x1007dddc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xdd
        __asm _emit 0x07
        __asm _emit 0x10
        xor edx, edx
        xor eax, eax
        mov dl, byte ptr [edi + 99h]
        mov al, byte ptr [edi + 98h]
        push edx
        push eax
        lea ecx, [esp + 18h]
        push 101ab938h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 10h
        ; Exact mapped bytes EB 2D: jmp 0x1007dd05
        __asm _emit 0xeb
        __asm _emit 0x2d
        xor edx, edx
        lea eax, [esp + 10h]
        mov dl, byte ptr [edi + 9bh]
        push edx
        push 101ab934h
        push eax
        ; Exact mapped bytes EB 13: jmp 0x1007dd00
        __asm _emit 0xeb
        __asm _emit 0x13
        xor ecx, ecx
        lea edx, [esp + 10h]
        mov cl, byte ptr [edi + 9ah]
        push ecx
        push 101ab934h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        mov ecx, dword ptr [esi + 80h]
        push 777777h
        lea eax, [esp + 14h]
        push 0
        push eax
        ; Exact mapped bytes E8 94 5F 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        lea edx, [esp + 10h]
        push ecx
        push 101ab944h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 84h]
        add esp, 0ch
        lea eax, [esp + 10h]
        push 777777h
        push 0
        push eax
        ; Exact mapped bytes E8 6A 5F 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [esp + 10h]
        push 101ab954h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 88h]
        add esp, 8
        lea edx, [esp + 10h]
        push 777777h
        push 0
        push edx
        ; Exact mapped bytes E8 44 5F 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [esi + 0a4h], edi
        ; Exact mapped bytes 75 26: jne 0x1007dd9a
        __asm _emit 0x75
        __asm _emit 0x26
        mov edi, dword ptr [esp + 60h]
        mov dword ptr [esp + 58h], 6
        mov eax, dword ptr [esp + 54h]
        mov ecx, dword ptr [edi]
        push eax
        ; Exact mapped bytes E8 C4 69 08 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 58h]
        add edi, 4
        dec eax
        mov dword ptr [esp + 58h], eax
        ; Exact mapped bytes 75 E6: jne 0x1007dd80
        __asm _emit 0x75
        __asm _emit 0xe6
        inc dword ptr [esp + 54h]
        mov eax, dword ptr [esp + 5ch]
        add ebp, 0ch
        dec eax
        mov dword ptr [esp + 5ch], eax
        ; Exact mapped bytes 0F 85 6F FE FF FF: jne 0x1007dc1f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 60h]
        mov eax, dword ptr [esi + 0a4h]
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x1007ddd2
        __asm _emit 0x75
        __asm _emit 0x14
        mov esi, 6
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 84 69 08 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        dec esi
        ; Exact mapped bytes 75 F1: jne 0x1007ddc3
        __asm _emit 0x75
        __asm _emit 0xf1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 40h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
