// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586929D0 .. +0x290 bytes.
extern "C" __declspec(naked) void FUN_586929d0_586929D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888a53dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 48h
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 17 D2 FE FF: call 0x5867fc30
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b027ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 30h], edx
        push 12dh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 20 DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x20
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 DC 34 DF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x34
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 0cch
        ; Exact mapped bytes E8 A5 E5 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe5
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 25: je 0x58692a94
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 23h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 51 40 EF FF: call 0x58586ae0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x40
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58692a9b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 34h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + 0a8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 38h], edx
        push 7d0h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B6 33 DF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x33
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 3ch], ecx
        push 3
        push 0
        push 3
        push 14h
        ; Exact mapped bytes 8B 15 6C 75 94 58: mov edx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 13 45 EF FF: call 0x58587000
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 40h], ecx
        push 2
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 DD 4A EF FF: call 0x585875e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4a
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 F9 E4 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe4
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 38: je 0x58692b53
        __asm _emit 0x74
        __asm _emit 0x38
        push 0ch
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 1F DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x1f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 0bb8h
        mov edx, dword ptr [ebp + 10h]
        add edx, 1dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C2 3C DF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58692b5a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 0ach], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 4ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 CA C9 E0 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc9
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        push 6ch
        ; Exact mapped bytes E8 76 E4 19 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe4
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 38: je 0x58692bd6
        __asm _emit 0x74
        __asm _emit 0x38
        push 0dh
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 1F DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0bb8h
        mov edx, dword ptr [ebp + 10h]
        add edx, 17h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 37h
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2F 1D EA FF: call 0x58534900
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58692bdd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ecx + 0b0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 2F 21 EA FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x21
        __asm _emit 0xea
        __asm _emit 0xff
        push 22h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 1E DF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x1e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b4h], eax
        push 21h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 1E DF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x1e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b8h], eax
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 A4 00 00 00: mov word ptr [ecx + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 A6 00 00 00: mov word ptr [eax + 0xa6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
