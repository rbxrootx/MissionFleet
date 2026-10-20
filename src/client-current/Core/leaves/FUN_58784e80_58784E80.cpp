// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58784E80 .. +0x22E bytes.
extern "C" __declspec(naked) void FUN_58784e80_58784E80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588909a9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 50h
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
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7D 05: jge 0x58784eb3
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes E9 EA 01 00 00: jmp 0x5878509d
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 0D: jne 0x58784ed4
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0F 12 D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0B: jmp 0x58784edf
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 2
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 02 12 D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x12
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58784ef1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8D 8D 01 00 00: jge 0x5878508a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 33ch
        ; Exact mapped bytes E8 FD C0 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 74: je 0x58784f8e
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EE 07 D1 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x07
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3C B7 D1 FF: call 0x584a0670
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb7
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 166h
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EC B6 D1 FF: call 0x584a0630
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb6
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0f9h
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1C B7 D1 FF: call 0x584a0670
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb7
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 2ah
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CE B6 D1 FF: call 0x584a0630
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb6
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 41h
        mov dword ptr [ebp - 44h], eax
        movzx ecx, word ptr [ebp - 0eh]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 67 A2 F1 FF: call 0x5869f1f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa2
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58784f95
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 18h], edx
        push 27ch
        ; Exact mapped bytes E8 52 C0 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 18: je 0x58784fdd
        __asm _emit 0x74
        __asm _emit 0x18
        imul eax, dword ptr [ebp - 1ch], 180h
        add eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 28 31 D7 FF: call 0x584f8100
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x31
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58784fe4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 4ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 30h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8F 0F D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0f
        __asm _emit 0xd0
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D5 0E D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x0e
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BD 9D F4 FF: call 0x586cedd0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9d
        __asm _emit 0xf4
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CF 1E F2 FF: call 0x586a6ef0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1e
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 50h], edx
        push 2
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 9C FA CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfa
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 31 E3 D3 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe3
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 37 11 DC FF: call 0x58546190
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x11
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 0D: je 0x5878506f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B2 1E F2 FF: call 0x586a6f20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x1e
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 68h
        mov dword ptr [ebp - 5ch], ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 9C 31 D0 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x31
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5E FE FF FF: jmp 0x58784ee8
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1C 00 00 00: call 0x587850b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 54 FC FF FF: call 0x58784cf0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
