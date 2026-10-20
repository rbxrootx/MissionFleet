// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B3C70 .. +0x3ED bytes.
extern "C" __declspec(naked) void FUN_587b3c70() {
    __asm {
        sub esp, 2ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 1
        ; Exact mapped bytes 0F 84 CE 03 00 00: je 0x587b4053
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 243ech], 0
        mov ebp, dword ptr [esp + 48h]
        mov ebx, dword ptr [esp + 44h]
        ; Exact mapped bytes 0F 84 18 03 00 00: je 0x587b3fb2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 144h], 0
        ; Exact mapped bytes 0F 84 0B 03 00 00: je 0x587b3fb2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 148h], 0
        ; Exact mapped bytes 0F 84 FE 02 00 00: je 0x587b3fb2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F7 CA FF FF: call 0x587b07b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes E8 2C CB FF FF: call 0x587b07f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 244fch], 0
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 84 DD 02 00 00: je 0x587b3fb2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 243ech], 2
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 43: jne 0x587b3d26
        __asm _emit 0x75
        __asm _emit 0x43
        cmp dword ptr [esi + 0f4h], 0
        ; Exact mapped bytes 74 1D: je 0x587b3d09
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [eax + 164h], 6
        ; Exact mapped bytes 7E 4E: jle 0x587b3d43
        __asm _emit 0x7e
        __asm _emit 0x4e
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 45: je 0x587b3d43
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 18h]
        ; Exact mapped bytes EB 3C: jmp 0x587b3d45
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp dword ptr [eax + 164h], 7
        ; Exact mapped bytes 7E 31: jle 0x587b3d43
        __asm _emit 0x7e
        __asm _emit 0x31
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 28: je 0x587b3d43
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes EB 1F: jmp 0x587b3d45
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp dword ptr [eax + 164h], 5
        ; Exact mapped bytes 7E 14: jle 0x587b3d43
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x587b3d43
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes EB 02: jmp 0x587b3d45
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 244fch], eax
        mov eax, dword ptr [esi + 74h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [esp + 48h], 0
        test eax, eax
        ; Exact mapped bytes 0F 8E 4B 02 00 00: jle 0x587b3fb2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 44h], 10h
        nop
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 44h]
        push edx
        lea eax, [esp + 20h]
        mov dword ptr [esp + 28h], ecx
        push eax
        lea ecx, [esp + 2ch]
        push ecx
        mov dword ptr [esp + 34h], 0
        ; Exact mapped bytes E8 0C 82 FB FF: call 0x5876bfa0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [esi + 4]
        add edx, dword ptr [ebp]
        mov ecx, dword ptr [esp + 28h]
        add ecx, edx
        mov edx, dword ptr [esp + 2ch]
        imul edx, edx, 56h
        mov edi, dword ptr [esi + 243f4h]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub edi, eax
        add edi, dword ptr [ebp + 4]
        mov eax, 66666667h
        imul dword ptr [esp + 54h]
        add edi, dword ptr [esi + 8]
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        lea edx, [eax + eax*4]
        mov eax, dword ptr [esp + 54h]
        add edx, edx
        add esp, 0ch
        add edx, edx
        sub eax, edx
        mov edx, dword ptr [ebx]
        push 101h
        mov dword ptr [esp + 20h], ecx
        mov dword ptr [esp + 24h], edi
        mov dword ptr [esp + 1ch], eax
        push 100h
        ; Exact mapped bytes 75 1F: jne 0x587b3e22
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [esi + 24504h]
        add ecx, dword ptr [eax + 10h]
        mov dword ptr [esp + 24h], ecx
        add edi, dword ptr [eax + 14h]
        sub esp, 10h
        mov eax, esp
        push edi
        push ecx
        mov ecx, dword ptr [esi + 24504h]
        ; Exact mapped bytes EB 1D: jmp 0x587b3e3f
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [esi + 244fch]
        add ecx, dword ptr [eax + 10h]
        mov dword ptr [esp + 24h], ecx
        add edi, dword ptr [eax + 14h]
        sub esp, 10h
        mov eax, esp
        push edi
        push ecx
        mov ecx, dword ptr [esi + 244fch]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ebx + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ebx + 8]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esp + 60h]
        push eax
        mov dword ptr [esp + 44h], edi
        ; Exact mapped bytes E8 FF FE 14 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0x14
        __asm _emit 0x00
        cmp dword ptr [esi + 140h], 0
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x587b3f90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 174h], 0
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x587b3f90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 24h]
        mov ecx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx*4 + 58a0ed18h]
        imul ecx, edi
        mov eax, 10624dd3h
        imul ecx
        mov ecx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx*4 + 58a0b4d8h]
        sar edx, 6
        imul ecx, edi
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [esp + 2ch], eax
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        mov edx, dword ptr [esp + 14h]
        push edx
        lea eax, [esp + 20h]
        push eax
        lea ecx, [esp + 34h]
        push ecx
        mov dword ptr [esp + 3ch], 0
        ; Exact mapped bytes E8 C3 80 FB FF: call 0x5876bfa0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [esi + 4]
        add edx, dword ptr [ebp]
        mov ecx, dword ptr [esp + 28h]
        add ecx, edx
        mov edx, dword ptr [esp + 2ch]
        imul edx, edx, 56h
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esi + 243f4h]
        add esp, 0ch
        sub eax, edx
        add eax, dword ptr [ebp + 4]
        push 101h
        add eax, dword ptr [esi + 8]
        push 100h
        sub esp, 10h
        cmp dword ptr [esp + 30h], 0
        mov dword ptr [esp + 34h], ecx
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes 75 20: jne 0x587b3f4e
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [esi + 24504h]
        add ecx, dword ptr [edx + 10h]
        mov dword ptr [esp + 34h], ecx
        mov edx, dword ptr [edx + 14h]
        sub edx, edi
        add eax, edx
        mov edx, esp
        push eax
        push ecx
        mov ecx, dword ptr [esi + 24504h]
        ; Exact mapped bytes EB 1E: jmp 0x587b3f6c
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [esi + 24500h]
        add ecx, dword ptr [edx + 10h]
        mov dword ptr [esp + 34h], ecx
        mov edx, dword ptr [edx + 14h]
        sub edx, edi
        add eax, edx
        mov edx, esp
        push eax
        push ecx
        mov ecx, dword ptr [esi + 24500h]
        mov edi, dword ptr [ebx]
        mov dword ptr [edx], edi
        mov edi, dword ptr [ebx + 4]
        mov dword ptr [edx + 4], edi
        mov edi, dword ptr [ebx + 8]
        mov dword ptr [edx + 8], edi
        mov edi, dword ptr [ebx + 0ch]
        mov dword ptr [esp + 40h], eax
        mov eax, dword ptr [esp + 60h]
        push eax
        mov dword ptr [edx + 0ch], edi
        ; Exact mapped bytes E8 D0 FD 14 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [esp + 48h]
        add dword ptr [esp + 44h], 4
        cdq
        and edx, 3
        add eax, edx
        inc ecx
        sar eax, 2
        cmp ecx, eax
        mov dword ptr [esp + 48h], ecx
        ; Exact mapped bytes 0F 8C BE FD FF FF: jl 0x587b3d70
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esi + 4ch]
        test edi, edi
        ; Exact mapped bytes 74 25: je 0x587b3fde
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7F 26 00: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 17: jge 0x587b3fde
        __asm _emit 0x7d
        __asm _emit 0x17
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 40h]
        mov edx, dword ptr [edx + 14h]
        push ebp
        push ebx
        push eax
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E2: jne 0x587b3fc0
        __asm _emit 0x75
        __asm _emit 0xe2
        mov ecx, dword ptr [esi + 54h]
        test ecx, ecx
        ; Exact mapped bytes 74 51: je 0x587b4036
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [esi + 0ch]
        add eax, dword ptr [esi + 4]
        mov edx, dword ptr [ebp + 4]
        add eax, dword ptr [ebp]
        add edx, dword ptr [esi + 10h]
        mov dword ptr [esp + 34h], eax
        add edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 2ch]
        push eax
        mov eax, dword ptr [esi + 0a0h]
        mov dword ptr [esp + 3ch], edx
        mov edx, dword ptr [esi + 28h]
        push edx
        push eax
        mov eax, dword ptr [esp + 4ch]
        push ebx
        lea edx, [esp + 44h]
        push edx
        push eax
        ; Exact mapped bytes E8 B2 65 F8 FF: call 0x5873a5d0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x65
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3d8h]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x587b4036
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 40h]
        mov edx, dword ptr [edx + 14h]
        push ebp
        push ebx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test edi, edi
        ; Exact mapped bytes 74 19: je 0x587b4053
        __asm _emit 0x74
        __asm _emit 0x19
        mov esi, dword ptr [esp + 40h]
        mov edi, edi
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 14h]
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 ED: jne 0x587b4040
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 2ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
