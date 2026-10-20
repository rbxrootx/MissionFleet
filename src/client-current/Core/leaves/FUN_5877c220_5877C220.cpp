// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877C220 .. +0x391 bytes.
extern "C" __declspec(naked) void FUN_5877c220_5877C220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 3ech]
        sub ecx, 8
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 28 4A 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4a
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 A7 51 04 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x51
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5877c26c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 7D 15: jge 0x5877c287
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 11ch]
        ; Exact mapped bytes E8 7C 51 04 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x51
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x5877c263
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 DB 49 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 0F 84 0D 03 00 00: je 0x5877c5ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 04 88 DB FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x88
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5877c2c1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 3ech]
        ; Exact mapped bytes 0F 8D 8B 02 00 00: jge 0x5877c55e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 98h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C1 8F 03 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 134h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A5 8F 03 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 1b4h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 89 8F 03 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 234h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6D 8F 03 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 1E 49 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 8
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 13: jge 0x5877c36d
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 08 49 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 6E: jge 0x5877c3db
        __asm _emit 0x7d
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 98h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 09 9C D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x9c
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 134h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 EF 9B D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x9b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 1b4h]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D5 9B D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 234h]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 BB 9B D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9b
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7E 01 00 00: jmp 0x5877c559
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 98h]
        mov dword ptr [ebp - 34h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 EB 9A D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x9a
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 85 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 50 0C D1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x5877c559
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 85 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 2B 0C D1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0c
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 75 3A: jne 0x5877c477
        __asm _emit 0x75
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 134h]
        mov dword ptr [ebp - 40h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 39 9B D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x9b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1b4h]
        mov dword ptr [ebp - 44h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 1F 9B D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x9b
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x5877c559
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 84 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 CF 0B D1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x0b
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 6
        ; Exact mapped bytes 75 20: jne 0x5877c4b9
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 234h]
        mov dword ptr [ebp - 4ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 DD 9A D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x9a
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x5877c559
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 84 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 8D 0B D1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 0dh
        ; Exact mapped bytes 75 7E: jne 0x5877c559
        __asm _emit 0x75
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 134h]
        mov dword ptr [ebp - 54h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 9B 9A D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9a
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 84 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D8 84 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        mov ecx, dword ptr [ebp - 4]
        sub ecx, eax
        cmp ecx, 1
        ; Exact mapped bytes 74 1D: je 0x5877c53e
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 1b4h]
        mov dword ptr [ebp - 58h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 55 9A D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x9a
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5877c559
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 1b4h]
        mov dword ptr [ebp - 5ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 38 9A D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9a
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5A FD FF FF: jmp 0x5877c2b8
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 2bch]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 F2 46 04 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        mov edx, dword ptr [ebp - 8]
        mov edi, dword ptr [edx + 3ech]
        sub edi, 8
        mov eax, 46h
        cdq
        idiv edi
        imul ecx, eax
        lea eax, [esi + ecx + 48h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 86 91 03 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
