// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861D6E0 .. +0x2E2 bytes.
extern "C" __declspec(naked) void FUN_5861d6e0_5861D6E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 54h]
        ; Exact mapped bytes E8 04 73 E6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x73
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 5ch], edx
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE 92 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x92
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 E9 E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 5ch]
        sub ecx, dword ptr [ebp - 64h]
        push ecx
        ; Exact mapped bytes E8 DE 38 23 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x38
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        cmp eax, 1eh
        ; Exact mapped bytes 7D 14: jge 0x5861d74b
        __asm _emit 0x7d
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 58h]
        sub edx, dword ptr [ebp - 60h]
        push edx
        ; Exact mapped bytes E8 CA 38 23 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x38
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        cmp eax, 28h
        ; Exact mapped bytes 7C 0A: jl 0x5861d755
        __asm _emit 0x7c
        __asm _emit 0x0a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 67 02 00 00: je 0x5861d9bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 5C EA FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5c
        __asm _emit 0xea
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
        imul edx, ecx, 6900h
        add edx, 5890bfd0h
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 5B EA FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x5b
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [eax + 54h]
        shr eax, 1
        and eax, 7fffffffh
        imul ecx, eax, 0e0h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 44h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 40000000h
        ; Exact mapped bytes 0F 84 0F 02 00 00: je 0x5861d9bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d20h], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0cch], 0
        ; Exact mapped bytes 75 0D: jne 0x5861d7dc
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 1
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 04 ED FF FF: call 0x5861c500
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 25 87 E6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 B5 EC FF FF: call 0x5861c4e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F6 86 E6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 8ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 E6 EC FF FF: call 0x5861c540
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C7 86 E6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 97 EC FF FF: call 0x5861c520
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 98 86 E6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 D1 EC FF FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E2 87 E6 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 40h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 D0 7C 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x7c
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 8ch]
        mov dword ptr [ebp - 44h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 AE 7C 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x7c
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 48h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 8C 7C 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7c
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 8ch]
        mov dword ptr [ebp - 4ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 6A 7C 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x7c
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5861d959
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x5861d97c
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 84h]
        mov dword ptr [ebp - 50h], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 67 85 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x5861d950
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5861d98e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x5861d9b1
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 54h], eax
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 32 85 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x5861d985
        __asm _emit 0xeb
        __asm _emit 0xd4
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 00 00 00: call 0x5861d9d0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
