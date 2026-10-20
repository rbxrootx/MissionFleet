// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58743AE0 .. +0x50D bytes.
extern "C" __declspec(naked) void FUN_58743ae0_58743AE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 48h], ecx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 30h], 2
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 34h], 2
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 38h], 80h
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 3ch], 14h
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 40h], 7dh
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 44h], 7dh
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 48h], 1
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 4ch], 1
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, 3
        ; Exact mapped bytes 66 89 82 84 00 00 00: mov word ptr [edx + 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, 3
        ; Exact mapped bytes 66 89 42 36: mov word ptr [edx + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 50h]
        mov al, byte ptr [edx + 32h]
        or al, 20h
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 32h], al
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 50h]
        mov dl, byte ptr [ecx + 32h]
        and dl, 0f0h
        or dl, 2
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 32h], dl
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 50h]
        mov cl, byte ptr [eax + 31h]
        and cl, 80h
        or cl, 30h
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 31h], cl
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 47h], 7dh
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 46h], 1
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 40h], 0ffffffffh
        push 588b4b0ch
        ; Exact mapped bytes E8 01 E4 DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 50h]
        add edx, 0a6h
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 0fffffffdh
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 3ch], ecx
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx + 3ch]
        and eax, 0fffffffeh
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [edx + 3ch], eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx + 3ch]
        or edx, 4
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ecx + 3ch], edx
        push 588b4b20h
        ; Exact mapped bytes E8 95 E3 DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe3
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        push 30h
        mov edx, dword ptr [ebp - 64h]
        push edx
        ; Exact mapped bytes E8 07 05 07 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 09: jmp 0x58743c8e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 54h]
        add eax, 1
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 2
        ; Exact mapped bytes 7D 1D: jge 0x58743cb1
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + ecx*4 + 88h]
        mov dword ptr [ebp - 68h], eax
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 32 22 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x22
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58743c85
        __asm _emit 0xeb
        __asm _emit 0xd4
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 07 03 00 00: je 0x58743fc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x58743ccd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 1
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp - 50h], 3
        ; Exact mapped bytes 7D 1A: jge 0x58743ced
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + edx*4 + 74h]
        mov dword ptr [ebp - 6ch], ecx
        push -1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 A6 D8 07 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D7: jmp 0x58743cc4
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x58743cff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 50h]
        add edx, 1
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp - 50h], 3
        ; Exact mapped bytes 7D 12: jge 0x58743d17
        __asm _emit 0x7d
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ecx + eax*4 + 74h]
        ; Exact mapped bytes E8 AC CB 07 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xcb
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DF: jmp 0x58743cf6
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov edx, dword ptr [ebp - 48h]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 74 36: je 0x58743d59
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 59 DE FF: call 0x585296c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x59
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 05 0D D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 20h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 D4 E1 FF: call 0x58561220
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd4
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58743d59
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 83 02 00 00: jmp 0x58743fdc
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x58743d6b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 50h]
        add edx, 1
        mov dword ptr [ebp - 50h], edx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 59 DE FF: call 0x58529710
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x59
        __asm _emit 0xde
        __asm _emit 0xff
        cmp dword ptr [ebp - 50h], eax
        ; Exact mapped bytes 0F 8D 43 02 00 00: jge 0x58743fc2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 0B FC FF: call 0x58704900
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x0b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 05: jne 0x58743d9c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 26 02 00 00: jmp 0x58743fc2
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 AC 0B FC FF: call 0x58704950
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 11 02 00 00: je 0x58743fbd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 0F 84 23 01 00 00: je 0x58743edf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 FC 0B D4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x0b
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 45: je 0x58743e0e
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 EF 0B D4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0b
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 74 38: je 0x58743e0e
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 E2 0B D4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 66h
        ; Exact mapped bytes 74 2B: je 0x58743e0e
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 D5 0B D4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x0b
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 67h
        ; Exact mapped bytes 74 1E: je 0x58743e0e
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C8 0B D4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 68h
        ; Exact mapped bytes 74 11: je 0x58743e0e
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BB 0B D4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0b
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x58743eda
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 2A 0C D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0c
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [eax + 28h]
        push edx
        push 588b4b40h
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + edx + 74h]
        mov dword ptr [ebp - 78h], ecx
        push 969696h
        mov edx, dword ptr [ebp - 4ch]
        push edx
        lea eax, [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 CD C6 07 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc6
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + ecx + 74h]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 D3 0B D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        push 969696h
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 9D C6 07 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc6
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B5 0B D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 AB 0B D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x0b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [esi + 2ch]
        imul edx, dword ptr [eax + 30h]
        push edx
        push 588b4b44h
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + ecx + 74h]
        mov dword ptr [ebp - 84h], eax
        push 969696h
        push 0
        lea ecx, [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 47 C6 07 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc6
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x58743fbd
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 59 0B D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x0b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [eax + 28h]
        push edx
        push 588b4b48h
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + edx + 74h]
        mov dword ptr [ebp - 88h], ecx
        push 969696h
        mov edx, dword ptr [ebp - 4ch]
        push edx
        lea eax, [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 F6 C5 07 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc5
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + ecx + 74h]
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F9 0A D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x0a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 969696h
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 BA C5 07 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc5
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 D2 0A D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C8 0A D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [esi + 2ch]
        imul edx, dword ptr [eax + 30h]
        push edx
        push 588b4b4ch
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + ecx + 74h]
        mov dword ptr [ebp - 94h], eax
        push 969696h
        push 0
        lea ecx, [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 64 C5 07 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc5
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A0 FD FF FF: jmp 0x58743d62
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 98h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 B5 1F D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x1f
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 69 D0 0E 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
