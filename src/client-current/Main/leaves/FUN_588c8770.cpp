// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C8770 .. +0x259 bytes.
extern "C" __declspec(naked) void FUN_588c8770() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        movzx ecx, byte ptr [esi + 98h]
        xor cl, byte ptr [esi + 62h]
        mov edx, dword ptr [esi + 1f4h]
        and cl, 7fh
        xor byte ptr [esi + 98h], cl
        movzx eax, byte ptr [edx + 64h]
        xor al, byte ptr [esi + 9ah]
        mov ecx, dword ptr [esi + 1f8h]
        ; Exact mapped bytes 8B 1D 98 C1 98 58: mov ebx, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D 30 C0 98 58: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        and al, 0fh
        xor byte ptr [esi + 9ah], al
        mov dl, byte ptr [ecx + 64h]
        mov eax, dword ptr [esi + 1fch]
        dec dl
        xor dl, byte ptr [esi + 99h]
        push edi
        and dl, 7fh
        xor byte ptr [esi + 99h], dl
        cmp dword ptr [esi + 130h], 0
        movzx ecx, byte ptr [eax + 64h]
        mov edx, dword ptr [esi + 200h]
        mov byte ptr [esi + 0aeh], cl
        movzx eax, byte ptr [edx + 64h]
        mov byte ptr [esi + 0afh], al
        ; Exact mapped bytes 74 22: je 0x588c881c
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [esi + 1d0h]
        mov eax, dword ptr [ecx + 80h]
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 75 0A: jne 0x588c8815
        __asm _emit 0x75
        __asm _emit 0x0a
        push 589a06fch
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 4
        push eax
        lea edx, [esi + 68h]
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp dword ptr [esi + 13ch], 0
        ; Exact mapped bytes 74 75: je 0x588c889a
        __asm _emit 0x74
        __asm _emit 0x75
        movzx eax, word ptr [esi + 0ech]
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 5E: je 0x588c8890
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 58: je 0x588c8890
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [esi + 23ch]
        mov edi, dword ptr [eax + 6ch]
        push 58997fd0h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 4
        push eax
        push edi
        ; Exact mapped bytes FF 15 A4 C1 98 58: call dword ptr [0x5898c1a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x588c886a
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 28 46 A2 58: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE E4 EC FF: call 0x58796d40
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe4
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes EB 30: jmp 0x588c889a
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [esi + 24ch]
        mov eax, dword ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x588c8885
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes EB 15: jmp 0x588c889a
        __asm _emit 0xeb
        __asm _emit 0x15
        or eax, 0ffffffffh
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x588c889a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 0e8h], 0
        mov ecx, dword ptr [esi + 23ch]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        lea eax, [esi + 10eh]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 0D 28 46 A2 58: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        lea ebp, [esi + 68h]
        push ebp
        lea edi, [esi + 0f0h]
        ; Exact mapped bytes E8 CE E4 EC FF: call 0x58796d90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe4
        __asm _emit 0xec
        __asm _emit 0xff
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 0D 28 46 A2 58: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 AE E3 EC FF: call 0x58796c80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe3
        __asm _emit 0xec
        __asm _emit 0xff
        test byte ptr [esi + 0a4h], 8
        mov dword ptr [esi + 124h], eax
        ; Exact mapped bytes 74 77: je 0x588c8958
        __asm _emit 0x74
        __asm _emit 0x77
        movzx eax, word ptr [esi + 0ech]
        xor edx, edx
        ; Exact mapped bytes 66 83 F8 0C: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0c
        ; Exact mapped bytes 75 1F: jne 0x588c890f
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [esi + 1a4h]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 02 EF FC FF: call 0x58897800
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [esi + 1a4h]
        mov ecx, dword ptr [edx + 78h]
        mov edx, dword ptr [ecx + 1a4h]
        ; Exact mapped bytes EB 28: jmp 0x588c8937
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1F: jne 0x588c8933
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [esi + 19ch]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 DE EE FC FF: call 0x58897800
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 19ch]
        mov edx, dword ptr [ecx + 70h]
        mov edx, dword ptr [edx + 1a4h]
        ; Exact mapped bytes EB 04: jmp 0x588c8937
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        test edx, edx
        ; Exact mapped bytes 7E 1D: jle 0x588c8958
        __asm _emit 0x7e
        __asm _emit 0x1d
        lea ecx, [esi + 0b7h]
        mov edi, edx
        movzx edx, byte ptr [eax]
        mov byte ptr [ecx - 7], dl
        movzx edx, byte ptr [eax + 4]
        mov byte ptr [ecx], dl
        add eax, 8
        inc ecx
        sub edi, 1
        ; Exact mapped bytes 75 EB: jne 0x588c8943
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ecx, dword ptr [esi + 30h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 18h]
        push 0
        push 0eeach
        push esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        movzx eax, word ptr [esi + 0ech]
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 40: je 0x588c89b7
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 3A: je 0x588c89b7
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 34: je 0x588c89b7
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 2E: je 0x588c89b7
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 28: je 0x588c89b7
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 22: je 0x588c89b7
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 74 1C: je 0x588c89b7
        __asm _emit 0x74
        __asm _emit 0x1c
        movzx eax, word ptr [esi + 62h]
        movzx ecx, word ptr [esi + 60h]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        ; Exact mapped bytes E8 1F 07 EF FF: call 0x587b90d0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x07
        __asm _emit 0xef
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 2D 12 EF FF: call 0x587b9bf0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x12
        __asm _emit 0xef
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
