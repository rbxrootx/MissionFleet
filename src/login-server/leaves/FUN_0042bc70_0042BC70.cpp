// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042BC70 .. +0x22E bytes.
extern "C" __declspec(naked) void FUN_0042bc70_0042BC70() {
    __asm {
        sub esp, 20h
        push ebx
        push esi
        mov esi, dword ptr [esp + 30h]
        push edi
        cmp esi, 82h
        ; Exact mapped bytes 75 24: jne 0x42bca6
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 38h]
        push eax
        mov edi, dword ptr [esp + 34h]
        push ecx
        push edx
        push esi
        push edi
        ; Exact mapped bytes E8 D4 D3 FF FF: call 0x429070
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ret
        xor eax, eax
        mov edi, dword ptr [esp + 30h]
        ; Exact mapped bytes 66 A1 14 14 45 00: mov ax, word ptr [0x451414]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push edi
        ; Exact mapped bytes FF 15 5C C4 43 00: call dword ptr [0x43c45c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x42bce6
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 40h]
        push eax
        push ecx
        push esi
        push edi
        push edx
        push edi
        ; Exact mapped bytes E8 6B D1 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ret
        cmp esi, 18h
        ; Exact mapped bytes 77 33: ja 0x42bd1e
        __asm _emit 0x77
        __asm _emit 0x33
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x42bd81
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 0fh
        ; Exact mapped bytes 74 53: je 0x42bd49
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 40h]
        push eax
        push ecx
        push esi
        push edi
        push edx
        push edi
        ; Exact mapped bytes E8 33 D1 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ret
        cmp esi, 83h
        ; Exact mapped bytes 77 0D: ja 0x42bd33
        __asm _emit 0x77
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x42bdcd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 46h
        ; Exact mapped bytes 74 7A: je 0x42bdab
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes EB C3: jmp 0x42bcf6
        __asm _emit 0xeb
        __asm _emit 0xc3
        cmp esi, 1943h
        ; Exact mapped bytes 72 BB: jb 0x42bcf6
        __asm _emit 0x72
        __asm _emit 0xbb
        cmp esi, 1944h
        ; Exact mapped bytes 0F 86 41 01 00 00: jbe 0x42be88
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB AD: jmp 0x42bcf6
        __asm _emit 0xeb
        __asm _emit 0xad
        mov ebx, dword ptr [esp + 40h]
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        push eax
        push ecx
        push esi
        push edi
        push ebx
        push edi
        ; Exact mapped bytes E8 E0 D0 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        push ebx
        push 0
        push edi
        ; Exact mapped bytes E8 3B FA FF FF: call 0x42b7b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ret
        ; Exact mapped bytes 66 81 3D 20 14 45 00 0A 03: cmp word ptr [0x451420], 0x30a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x03
        ; Exact mapped bytes 0F 83 66 FF FF FF: jae 0x42bcf6
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esp + 38h], 0
        ; Exact mapped bytes 0F 85 5B FF FF FF: jne 0x42bcf6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push edi
        ; Exact mapped bytes E8 6D ED FF FF: call 0x42ab10
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x42bcf6
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 81 3D 20 14 45 00 0A 03: cmp word ptr [0x451420], 0x30a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x03
        ; Exact mapped bytes 0F 82 3C FF FF FF: jb 0x42bcf6
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 3ch]
        push eax
        push edi
        ; Exact mapped bytes E8 4B ED FF FF: call 0x42ab10
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 29 FF FF FF: jmp 0x42bcf6
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 81 3D 20 14 45 00 0A 03: cmp word ptr [0x451420], 0x30a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x03
        ; Exact mapped bytes 0F 83 1A FF FF FF: jae 0x42bcf6
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 1ch]
        push eax
        push edi
        ; Exact mapped bytes FF 15 90 C4 43 00: call dword ptr [0x43c490]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 3ch]
        mov eax, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 40h]
        push ecx
        push eax
        push esi
        push edi
        push edx
        push edi
        ; Exact mapped bytes E8 41 D0 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        mov edx, dword ptr [esp + 3ch]
        lea ecx, [esp + 0ch]
        mov eax, dword ptr [edx]
        mov ebx, dword ptr [edx + 4]
        push 1
        push 2
        mov dword ptr [ecx], eax
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 4], ebx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 0ch], edx
        lea ecx, [esp + 14h]
        push ecx
        ; Exact mapped bytes FF 15 70 C3 43 00: call dword ptr [0x43c370]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 28h]
        cmp dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 7D 3D: jge 0x42be7f
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov eax, dword ptr [esp + 18h]
        push edi
        inc eax
        mov dword ptr [esp + 14h], eax
        lea eax, [ecx + 1]
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 8B 1D 14 C4 43 00: mov ebx, dword ptr [0x43c414]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x14
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [esp + 0ch]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea ecx, [esp + 14h]
        push ecx
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea eax, [esp + 0ch]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF 15 74 C3 43 00: call dword ptr [0x43c374]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 20h
        ret
        mov eax, dword ptr [esp + 3ch]
        pop edi
        pop esi
        pop ebx
        mov dword ptr [eax], 1
        mov eax, 3e9h
        add esp, 20h
        ret
    }
}
