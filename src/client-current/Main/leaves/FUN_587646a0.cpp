// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587646A0 .. +0x24E bytes.
extern "C" __declspec(naked) void FUN_587646a0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 0D FC 47 A2 58: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 58h]
        push edi
        cmp eax, 3e9h
        ; Exact mapped bytes 72 0D: jb 0x587646c2
        __asm _emit 0x72
        __asm _emit 0x0d
        cmp eax, 3f1h
        ; Exact mapped bytes 77 06: ja 0x587646c2
        __asm _emit 0x77
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 DE C6 15 00: call 0x588c0da0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc6
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e4ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 400h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov edi, 1
        ; Exact mapped bytes 66 09 7E 24: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 04: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x04
        mov edx, dword ptr [esi + 80h]
        xor ebx, ebx
        mov dword ptr [edx + 50h], ebx
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [esi + 74h], ebx
        ; Exact mapped bytes E8 15 AC FF FF: call 0x5875f320
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes E8 0D AC FF FF: call 0x5875f320
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 05 AC FF FF: call 0x5875f320
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes E8 FD AB FF FF: call 0x5875f320
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 7ch]
        mov dword ptr [esi + 58h], ebx
        cmp eax, 386h
        ; Exact mapped bytes 74 15: je 0x58764745
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 387h
        ; Exact mapped bytes 74 0E: je 0x58764745
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 388h
        ; Exact mapped bytes 74 07: je 0x58764745
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 3afh
        ; Exact mapped bytes 75 24: jne 0x58764769
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [eax + 0a00h]
        mov edx, dword ptr [edx + 18h]
        push ebx
        push 64h
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0a4h], edi
        mov eax, dword ptr [esi + 7ch]
        cmp eax, 3a4h
        ; Exact mapped bytes 74 45: je 0x587647b8
        __asm _emit 0x74
        __asm _emit 0x45
        cmp eax, 3a5h
        ; Exact mapped bytes 74 3E: je 0x587647b8
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp eax, 3a6h
        ; Exact mapped bytes 74 37: je 0x587647b8
        __asm _emit 0x74
        __asm _emit 0x37
        cmp eax, 3a7h
        ; Exact mapped bytes 74 30: je 0x587647b8
        __asm _emit 0x74
        __asm _emit 0x30
        cmp eax, 3ach
        ; Exact mapped bytes 74 29: je 0x587647b8
        __asm _emit 0x74
        __asm _emit 0x29
        cmp eax, 3aeh
        ; Exact mapped bytes 74 22: je 0x587647b8
        __asm _emit 0x74
        __asm _emit 0x22
        cmp eax, 32h
        ; Exact mapped bytes 74 1D: je 0x587647b8
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp eax, 2bh
        ; Exact mapped bytes 74 18: je 0x587647b8
        __asm _emit 0x74
        __asm _emit 0x18
        cmp eax, 2ch
        ; Exact mapped bytes 74 13: je 0x587647b8
        __asm _emit 0x74
        __asm _emit 0x13
        cmp eax, 2eh
        ; Exact mapped bytes 74 0E: je 0x587647b8
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 2714h
        ; Exact mapped bytes 74 07: je 0x587647b8
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 2715h
        ; Exact mapped bytes 75 41: jne 0x587647f9
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0a00h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 26: jne 0x587647f9
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 15 84 45 A2 58: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes 8B 15 A0 45 A2 58: mov edx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [edx + 0a00h]
        mov eax, dword ptr [eax + 18h]
        push ebx
        push 64h
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 0a4h], edi
        cmp dword ptr [esi + 78h], ebx
        ; Exact mapped bytes 75 4B: jne 0x58764849
        __asm _emit 0x75
        __asm _emit 0x4b
        mov eax, dword ptr [esi + 7ch]
        cmp eax, 7d0h
        ; Exact mapped bytes 75 0B: jne 0x58764813
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D 84 45 A2 58: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes EB 67: jmp 0x5876487a
        __asm _emit 0xeb
        __asm _emit 0x67
        cmp eax, 0bb8h
        ; Exact mapped bytes 75 7C: jne 0x58764896
        __asm _emit 0x75
        __asm _emit 0x7c
        ; Exact mapped bytes A1 EC 45 A2 58: mov eax, dword ptr [0x58a245ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 67: jne 0x58764896
        __asm _emit 0x75
        __asm _emit 0x67
        ; Exact mapped bytes 8B 0D EC 45 A2 58: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D EC 45 A2 58: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 D2 FC FF: call 0x58731a70
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 47: jmp 0x58764890
        __asm _emit 0xeb
        __asm _emit 0x47
        cmp dword ptr [esi + 7ch], 15eh
        ; Exact mapped bytes 75 44: jne 0x58764896
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 0a00h]
        cmp eax, ebx
        ; Exact mapped bytes 74 34: je 0x58764896
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 24: jne 0x58764896
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0a00h]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 18h]
        push ebx
        push 64h
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0a4h], edi
        cmp dword ptr [esi + 0a4h], ebx
        ; Exact mapped bytes 75 36: jne 0x587648d4
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, dword ptr [esi + 0a8h]
        push ebx
        push 64h
        cmp eax, ebx
        ; Exact mapped bytes 74 19: je 0x587648c4
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 84 45 A2 58: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 30h]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 0a8h], ebx
        ; Exact mapped bytes EB 10: jmp 0x587648d4
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 0ach], 177h
        pop esi
        pop ebx
        ret
    }
}
