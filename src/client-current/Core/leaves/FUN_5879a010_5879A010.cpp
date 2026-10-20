// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A010 .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_5879a010_5879A010() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891a0ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, ecx
        mov esi, dword ptr [ebp + 8]
        mov al, byte ptr [esi + 8]
        mov byte ptr [ebx + 8], al
        and dword ptr [ebx + 8], 0fffffeffh
        mov eax, dword ptr [ebx + 8]
        movzx eax, al
        cmp eax, 7
        ; Exact mapped bytes 0F 87 26 01 00 00: ja 0x5879a17f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 94 A1 79 58: jmp dword ptr [eax*4 + 0x5879a194]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xa1
        __asm _emit 0x79
        __asm _emit 0x58
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [ebx], eax
        mov dword ptr [ebx + 4], ecx
        mov ecx, dword ptr [ebp - 0ch]
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
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 30: je 0x5879a0b4
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [esi + 8]
        shr eax, 8
        and al, 1
        ; Exact mapped bytes 74 26: je 0x5879a0b4
        __asm _emit 0x74
        __asm _emit 0x26
        lea edx, [ebp - 10h]
        push edx
        lea edx, [ebp + 8]
        push edx
        push ecx
        push eax
        ; Exact mapped bytes E8 33 FF FF FF: call 0x58799fd0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 8]
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 18 01 00 00: call 0x5879a1c0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov ecx, eax
        or dword ptr [ebx + 8], 100h
        mov dword ptr [ebx], ecx
        mov ecx, dword ptr [ebp - 0ch]
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
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes E8 33 6F 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [ebp + 8], edi
        mov dword ptr [ebp - 4], 0
        test edi, edi
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x5879a17b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi]
        push 30h
        mov dword ptr [edi], 0
        mov dword ptr [edi + 4], 0
        mov dword ptr [ebp - 14h], edi
        mov dword ptr [ebp - 10h], edi
        ; Exact mapped bytes E8 00 6F 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], eax
        mov dword ptr [eax + 4], eax
        mov dword ptr [eax + 8], eax
        ; Exact mapped bytes 66 C7 40 0C 01 01: mov word ptr [eax + 0xc], 0x101
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x01
        mov dword ptr [edi], eax
        push eax
        mov eax, dword ptr [esi]
        mov ecx, edi
        mov byte ptr [ebp - 4], 1
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 78 E0 FF FF: call 0x587981a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [esi + 4]
        mov esi, dword ptr [edi]
        mov dword ptr [edi + 4], eax
        mov edx, dword ptr [esi + 4]
        cmp byte ptr [edx + 0dh], 0
        ; Exact mapped bytes 75 34: jne 0x5879a172
        __asm _emit 0x75
        __asm _emit 0x34
        mov ecx, dword ptr [edx]
        cmp byte ptr [ecx + 0dh], 0
        ; Exact mapped bytes 75 0C: jne 0x5879a152
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        mov edx, ecx
        mov ecx, eax
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 74 F4: je 0x5879a146
        __asm _emit 0x74
        __asm _emit 0xf4
        mov dword ptr [esi], edx
        mov edx, dword ptr [edi]
        mov ecx, dword ptr [edx + 4]
        mov eax, dword ptr [ecx + 8]
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 75 0B: jne 0x5879a16d
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, eax
        mov eax, dword ptr [ecx + 8]
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 74 F5: je 0x5879a162
        __asm _emit 0x74
        __asm _emit 0xf5
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes EB 0B: jmp 0x5879a17d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov dword ptr [esi], esi
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 8], eax
        ; Exact mapped bytes EB 02: jmp 0x5879a17d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [ebx], edi
        mov ecx, dword ptr [ebp - 0ch]
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
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
