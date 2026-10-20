// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858DEE0 .. +0x2AB bytes.
extern "C" __declspec(naked) void FUN_5858dee0_5858DEE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58884206h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 64h
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
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5858df1a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 84 56 02 00 00: je 0x5858e17a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + ecx*4 + 30h], 0
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x5858dfd6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 C8 30 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x30
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 66: je 0x5858dfb5
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 E1 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe1
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 0c8h
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 8A EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x8a
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 12ch
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 10h]
        add eax, 28h
        push eax
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 6B EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x6b
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 40h], ecx
        push 2710h
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 70 43 EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x43
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5858dfbc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [edx + ecx*4 + 30h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 30h]
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x5858dff2
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0fffffeffh
        ; Exact mapped bytes EB 07: jmp 0x5858dff9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 101h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 AB 75 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x75
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + edx*4 + 38h], 0
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x5858e0d3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 E3 2F 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2f
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 63: je 0x5858e097
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 E0 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xe0
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 0c8h
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 89 EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x89
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, 276h
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5
        push ecx
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 6A EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x6a
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes 8B 15 10 06 96 58: mov edx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 DE C8 22 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc8
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858e09e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 5ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [eax + edx*4 + 38h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 38h]
        mov dword ptr [ebp - 60h], ecx
        push 2710h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 AE 7D EF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x7d
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 38h]
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x5858e0ef
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 0fffffeffh
        ; Exact mapped bytes EB 07: jmp 0x5858e0f6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 101h
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 AE 74 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x74
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 30h]
        mov dword ptr [ebp - 68h], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 C4 7D EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7d
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 38h]
        mov dword ptr [ebp - 6ch], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 AA 7D EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x7d
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 38: je 0x5858e175
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 38h]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 14h]
        movzx eax, byte ptr [edx + 0dh]
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5858e15e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes EB 0A: jmp 0x5858e168
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx + 0dh]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 1C D0 22 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd0
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 97 FD FF FF: jmp 0x5858df11
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
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
