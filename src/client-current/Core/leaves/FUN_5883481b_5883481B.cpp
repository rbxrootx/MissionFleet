// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883481B .. +0x1A4 bytes.
extern "C" __declspec(naked) void FUN_5883481b_5883481B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 1], 0
        ; Exact mapped bytes 74 07: je 0x5883482f
        __asm _emit 0x74
        __asm _emit 0x07
        mov al, 1
        ; Exact mapped bytes E9 8B 01 00 00: jmp 0x588349ba
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        push 588f0f40h
        lea ebx, [esi + 28h]
        ; Exact mapped bytes E8 15 7B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        ; Exact mapped bytes E8 45 58 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [esi + 1], 1
        cmp byte ptr [esi + 24h], 0
        ; Exact mapped bytes 74 0B: je 0x5883485d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, esi
        ; Exact mapped bytes E8 66 01 00 00: call 0x588349bf
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 24h], 0
        mov eax, dword ptr [esi + 5ba4h]
        ; Exact mapped bytes 8B 3D F8 42 89 58: mov edi, dword ptr [0x588942f8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58834877
        __asm _emit 0x74
        __asm _emit 0x0a
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and dword ptr [esi + 5ba4h], 0
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 74 09: je 0x58834886
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and dword ptr [esi + 1ch], 0
        mov eax, dword ptr [esi + 5ba8h]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5883489a
        __asm _emit 0x74
        __asm _emit 0x0a
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and dword ptr [esi + 5ba8h], 0
        cmp byte ptr [esi + 5bach], 0
        ; Exact mapped bytes 74 0D: je 0x588348b0
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        ; Exact mapped bytes E8 5D 0A 00 00: call 0x58835307
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 99 4D 00 00: call 0x58839649
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 5bd8h], 0
        ; Exact mapped bytes 74 07: je 0x588348c0
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 4D 4D 00 00: call 0x5883960d
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 CA 12 00 00: call 0x58835b91
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 3F 11 00 00: call 0x58835a0d
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f0f5ch
        ; Exact mapped bytes E8 7B 7A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        ; Exact mapped bytes E8 AB 57 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov byte ptr [esi], 0
        lea edi, [esi + 22c4h]
        mov ecx, edi
        ; Exact mapped bytes E8 6F 83 00 00: call 0x5883cc61
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3D 40 68 96 58 00: cmp byte ptr [0x58966840], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        mov byte ptr [ebp - 1], al
        ; Exact mapped bytes 74 20: je 0x5883491e
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, edi
        ; Exact mapped bytes E8 26 89 00 00: call 0x5883d22b
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5883491e
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 80 3D 96 7D 96 58 00: cmp byte ptr [0x58967d96], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x96
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x5883491e
        __asm _emit 0x75
        __asm _emit 0x0c
        push 58966840h
        mov ecx, esi
        ; Exact mapped bytes E8 F2 51 00 00: call 0x58839b10
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3D 48 69 96 58 00: cmp byte ptr [0x58966948], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x58834947
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, edi
        ; Exact mapped bytes E8 FD 88 00 00: call 0x5883d22b
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x58834947
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 80 3D 96 7D 96 58 00: cmp byte ptr [0x58967d96], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x96
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x58834947
        __asm _emit 0x75
        __asm _emit 0x0c
        push 58966948h
        mov ecx, esi
        ; Exact mapped bytes E8 C9 51 00 00: call 0x58839b10
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3D 50 6A 96 58 00: cmp byte ptr [0x58966a50], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x6a
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x58834970
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, edi
        ; Exact mapped bytes E8 D4 88 00 00: call 0x5883d22b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x58834970
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 80 3D 96 7D 96 58 00: cmp byte ptr [0x58967d96], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x96
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x58834970
        __asm _emit 0x75
        __asm _emit 0x0c
        push 58966a50h
        mov ecx, esi
        ; Exact mapped bytes E8 A0 51 00 00: call 0x58839b10
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 84 7D 96 58: push dword ptr [0x58967d84]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        push dword ptr [esi + 10h]
        push 588f0f74h
        ; Exact mapped bytes E8 D0 79 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 FF 56 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10h]
        add esp, 10h
        pop edi
        pop ebx
        cmp eax, 755h
        ; Exact mapped bytes 75 09: jne 0x588349a3
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 84 7D 96 58 00: cmp dword ptr [0x58967d84], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x588349b7
        __asm _emit 0x74
        __asm _emit 0x14
        add esi, 1478h
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 74 09: je 0x588349b7
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        push eax
        ; Exact mapped bytes E8 70 4E 00 00: call 0x58839825
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov al, byte ptr [ebp - 1]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
