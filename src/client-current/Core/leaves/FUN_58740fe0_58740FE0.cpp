// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58740FE0 .. +0x33D bytes.
extern "C" __declspec(naked) void FUN_58740fe0_58740FE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f2e1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 74h
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
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9C 3A 00 00: call 0x58744ac0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx], 588b4a74h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 2ch], eax
        push 16h
        ; Exact mapped bytes 8B 0D BC 07 96 58: mov ecx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 3A D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CE 4E D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 34h], ecx
        push 17h
        ; Exact mapped bytes 8B 0D BC 07 96 58: mov ecx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F 3A D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x3a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A0 4E D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        ; Exact mapped bytes 8B 0D BC 07 96 58: mov ecx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 3A D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x3a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 03 B0 D4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 44 B5 DA FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb5
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x587410cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D B6 00 00 00: jge 0x5874118f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 21 FF 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 5E: je 0x58741151
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D BC 07 96 58: mov ecx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 39 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x39
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 48h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9eh
        push ecx
        imul edx, dword ptr [ebp - 10h], 50h
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 1d2h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 94 AB D8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xab
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58741158
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [edx + ecx*4 + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 70h]
        mov dword ptr [ebp - 50h], eax
        push 101h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 27 44 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 37 FF FF FF: jmp 0x587410c6
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 1b4h
        ; Exact mapped bytes E8 6B FE 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 2A: je 0x587411d3
        __asm _emit 0x74
        __asm _emit 0x2a
        push 6
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0afh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 23h
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 92 4B FA FF: call 0x586e5d60
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x4b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x587411da
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 54h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 58h], edx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 60 05 00 00: call 0x58741760
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        push 18h
        ; Exact mapped bytes 8B 0D BC 07 96 58: mov ecx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 39 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 11 4D D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x4d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 64h], edx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 2E 05 00 00: call 0x58741760
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        push 19h
        ; Exact mapped bytes 8B 0D BC 07 96 58: mov ecx, dword ptr [0x589607bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 38 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x38
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 DF 4C D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4c
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58741264
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 7D 25: jge 0x5874128f
        __asm _emit 0x7d
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx*8 + 57h]
        push edx
        push 5ah
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 74 63 FA FF: call 0x586e7600
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CC: jmp 0x5874125b
        __asm _emit 0xeb
        __asm _emit 0xcc
        ; Exact mapped bytes EB 09: jmp 0x5874129a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 6
        ; Exact mapped bytes 7D 28: jge 0x587412c8
        __asm _emit 0x7d
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx*8 - 9]
        push edx
        push 16ah
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 3B 63 FA FF: call 0x586e7600
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C9: jmp 0x58741291
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 78h], edx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 45 08 00 00: call 0x58741b20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 7ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 52 08 00 00: call 0x58741b40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 80h], eax
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 8F 4C D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x4c
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
