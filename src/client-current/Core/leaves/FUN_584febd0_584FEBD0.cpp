// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FEBD0 .. +0x491 bytes.
extern "C" __declspec(naked) void FUN_584febd0_584FEBD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887fe92h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 6ch
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
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 14h], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        ; Exact mapped bytes 75 0C: jne 0x584fec2c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes E9 EB 01 00 00: jmp 0x584fee17
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 1
        ; Exact mapped bytes 75 1A: jne 0x584fec5b
        __asm _emit 0x75
        __asm _emit 0x1a
        mov dword ptr [ebp - 18h], 0eh
        mov dword ptr [ebp - 1ch], 14h
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes E9 BC 01 00 00: jmp 0x584fee17
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 3
        ; Exact mapped bytes 72 50: jb 0x584fecc1
        __asm _emit 0x72
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 1dh
        ; Exact mapped bytes 77 3A: ja 0x584fecc1
        __asm _emit 0x77
        __asm _emit 0x3a
        ; Exact mapped bytes E8 E0 1F 35 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x1f
        __asm _emit 0x35
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x584fec98
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 0fh
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes E8 C9 1F 35 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x1f
        __asm _emit 0x35
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x584fecaf
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 15h
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes E9 56 01 00 00: jmp 0x584fee17
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 1eh
        ; Exact mapped bytes 72 16: jb 0x584fecec
        __asm _emit 0x72
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 38h
        ; Exact mapped bytes 76 2F: jbe 0x584fed1b
        __asm _emit 0x76
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 66h
        ; Exact mapped bytes 0F 82 93 00 00 00: jb 0x584fed99
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 67h
        ; Exact mapped bytes 77 7E: ja 0x584fed99
        __asm _emit 0x77
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 1fh
        ; Exact mapped bytes 72 16: jb 0x584fed47
        __asm _emit 0x72
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 28h
        ; Exact mapped bytes 76 2B: jbe 0x584fed72
        __asm _emit 0x76
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 66h
        ; Exact mapped bytes 72 26: jb 0x584fed82
        __asm _emit 0x72
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 67h
        ; Exact mapped bytes 77 10: ja 0x584fed82
        __asm _emit 0x77
        __asm _emit 0x10
        mov dword ptr [ebp - 18h], 12h
        mov dword ptr [ebp - 1ch], 18h
        ; Exact mapped bytes EB 0E: jmp 0x584fed90
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 18h], 13h
        mov dword ptr [ebp - 1ch], 19h
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 7E: jmp 0x584fee17
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 39h
        ; Exact mapped bytes 72 2C: jb 0x584feddb
        __asm _emit 0x72
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 4bh
        ; Exact mapped bytes 77 17: ja 0x584feddb
        __asm _emit 0x77
        __asm _emit 0x17
        mov dword ptr [ebp - 18h], 11h
        mov dword ptr [ebp - 1ch], 17h
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 3C: jmp 0x584fee17
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 4ch
        ; Exact mapped bytes 72 1F: jb 0x584fee10
        __asm _emit 0x72
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 4fh
        ; Exact mapped bytes 77 09: ja 0x584fee10
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x584fee17
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x584feea4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes E8 DC 21 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x21
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 37: je 0x584fee72
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes E8 2C 1E 35 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1e
        __asm _emit 0x35
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x584fee4c
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes 8B 0D FC 06 96 58: mov ecx, dword ptr [0x589606fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 5C F8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B3 EB 06 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584fee79
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [edx + 1d0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1d4h], 0
        ; Exact mapped bytes E9 AC 01 00 00: jmp 0x584ff050
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 1d0h], 0
        ; Exact mapped bytes 74 3D: je 0x584feeed
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1d0h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x584feed9
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x584feee0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1d0h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1d4h], 0
        ; Exact mapped bytes 74 3D: je 0x584fef36
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1d4h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x584fef22
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 54h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x584fef29
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1d4h], 0
        push 20h
        ; Exact mapped bytes E8 C7 20 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x20
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 23: je 0x584fef73
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 5B F8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B2 EA 06 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x584fef7a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx + 1d0h], edx
        push 20h
        ; Exact mapped bytes E8 6A 20 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x20
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 23: je 0x584fefd0
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 5A F8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 55 EA 06 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584fefd7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 68h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [eax + 1d4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 1
        ; Exact mapped bytes 75 4B: jne 0x584ff050
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1d0h]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1d0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 70h], eax
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 55 90: call dword ptr [ebp - 0x70]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x90
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1d4h]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1d4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 78h], eax
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        nop
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
