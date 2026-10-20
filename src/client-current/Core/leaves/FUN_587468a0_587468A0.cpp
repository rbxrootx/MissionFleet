// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587468A0 .. +0x27A bytes.
extern "C" __declspec(naked) void FUN_587468a0_587468A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f581h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 58h
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DC E1 FF FF: call 0x58744ac0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588b4d10h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        ; Exact mapped bytes 8B 0D B8 07 96 58: mov ecx, dword ptr [0x589607b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D E2 D3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe2
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0E F6 D3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf6
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 34h], ecx
        push 1
        ; Exact mapped bytes 8B 0D B8 07 96 58: mov ecx, dword ptr [0x589607b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF E1 D3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe1
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E0 F5 D3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf5
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        ; Exact mapped bytes 8B 0D B8 07 96 58: mov ecx, dword ptr [0x589607b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA E1 D3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe1
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 43 57 D4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x57
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 84 5C DA FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 7D A6 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 53: je 0x587469ea
        __asm _emit 0x74
        __asm _emit 0x53
        push 0ah
        ; Exact mapped bytes 8B 0D B8 07 96 58: mov ecx, dword ptr [0x589607b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C E1 D3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe1
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 48h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 9bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1c4h
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FB 52 D8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x52
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587469f1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [edx + ecx + 70h], eax
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 50h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 84 EB 06 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58746a3f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D B6 00 00 00: jge 0x58746aff
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 B1 A5 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 5E: je 0x58746ac1
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 14h]
        add eax, 5
        push eax
        ; Exact mapped bytes 8B 0D B8 07 96 58: mov ecx, dword ptr [0x589607b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B E0 D3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe0
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5ch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 82h
        push eax
        imul ecx, dword ptr [ebp - 14h], 30h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 1c4h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 24 52 D8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x52
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58746ac8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 60h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx + eax*4 + 70h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 70h]
        mov dword ptr [ebp - 64h], edx
        push 101h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 B7 EA 06 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 37 FF FF FF: jmp 0x58746a36
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
