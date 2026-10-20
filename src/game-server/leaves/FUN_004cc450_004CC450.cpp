// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC450 .. +0x336 bytes.
extern "C" __declspec(naked) void FUN_004cc450_004CC450() {
    __asm {
        sub esp, 44h
        push ebx
        push esi
        mov esi, dword ptr [esp + 50h]
        push edi
        push ebp
        push -10h
        push esi
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        test eax, 10000000h
        ; Exact mapped bytes 0F 84 0B 03 00 00: je 0x4cc77e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 60h], 3
        ; Exact mapped bytes 75 1E: jne 0x4cc498
        __asm _emit 0x75
        __asm _emit 0x1e
        and al, 3
        cmp al, 3
        ; Exact mapped bytes 75 18: jne 0x4cc498
        __asm _emit 0x75
        __asm _emit 0x18
        push 0
        push 0
        push 157h
        push esi
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 E6 02 00 00: jne 0x4cc77e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 5ch], 0
        ; Exact mapped bytes 74 07: je 0x4cc4a6
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 A0 26 5E 00: call dword ptr [0x5e26a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        lea eax, [esp + 24h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 88 27 5E 00: call dword ptr [0x5e2788]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 8B 1D 78 27 5E 00: mov ebx, dword ptr [0x5e2778]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        lea eax, [esp + 24h]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea ecx, [esp + 2ch]
        ; Exact mapped bytes 66 BD 0F 00: mov bp, 0xf
        __asm _emit 0x66
        __asm _emit 0xbd
        __asm _emit 0x0f
        __asm _emit 0x00
        push ecx
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push edi
        ; Exact mapped bytes FF 15 6C 27 5E 00: call dword ptr [0x5e276c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ebx, eax
        mov eax, dword ptr [esp + 10h]
        and eax, 100000h
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 74 04: je 0x4cc4f1
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 BD 07 00: mov bp, 7
        __asm _emit 0x66
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        and eax, 200000h
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 74 05: je 0x4cc505
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E5 FB FF: and bp, 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe5
        __asm _emit 0xfb
        __asm _emit 0xff
        push -0ch
        push esi
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 5ch]
        sub ecx, eax
        cmp ecx, 0fffffc18h
        ; Exact mapped bytes 0F 85 52 01 00 00: jne 0x4cc672
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 18h], 29ah
        lea eax, [esp + 18h]
        push eax
        push 0
        push 1944h
        push edi
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [esp + 18h], 29ah
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 75 17: jne 0x4cc560
        __asm _emit 0x75
        __asm _emit 0x17
        lea eax, [esp + 18h]
        push eax
        push 0
        push 1943h
        push edi
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [esp + 34h], eax
        lea eax, [esp + 44h]
        push 10h
        push eax
        push edi
        ; Exact mapped bytes FF 15 C4 25 5E 00: call dword ptr [0x5e25c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [esp + 44h]
        push 58edd0h
        push ecx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x4cc59b
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [esp + 18h], 1
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x4cc672
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 34h], 3ebh
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x4cc672
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [esp + 14h], eax
        push 2
        lea eax, [esp + 28h]
        mov ecx, dword ptr [esp + 18h]
        push eax
        push ecx
        push edi
        ; Exact mapped bytes FF 15 80 27 5E 00: call dword ptr [0x5e2780]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push ebx
        push edi
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        push ecx
        ; Exact mapped bytes FF 15 6C 27 5E 00: call dword ptr [0x5e276c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [esp + 5ch], 0
        mov ebx, eax
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x4cc665
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -10h
        push edi
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 3
        cmp eax, 2
        ; Exact mapped bytes 74 4C: je 0x4cc636
        __asm _emit 0x74
        __asm _emit 0x4c
        cmp eax, 3
        ; Exact mapped bytes 74 47: je 0x4cc636
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 66 81 E5 F7 FF: and bp, 0xfff7
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe5
        __asm _emit 0xf7
        __asm _emit 0xff
        push 5
        push edi
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [esp + 34h]
        push ecx
        push eax
        ; Exact mapped bytes FF 15 88 27 5E 00: call dword ptr [0x5e2788]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        push 1008h
        sub eax, dword ptr [esp + 40h]
        lea ecx, [esp + 28h]
        add dword ptr [esp + 30h], eax
        push ecx
        push ebx
        ; Exact mapped bytes E8 FB D7 FF FF: call 0x4c9e20
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 48h]
        sub eax, dword ptr [esp + 40h]
        add dword ptr [esp + 38h], eax
        add esp, 0ch
        ; Exact mapped bytes EB 38: jmp 0x4cc66e
        __asm _emit 0xeb
        __asm _emit 0x38
        push 0
        push 0
        push 157h
        push edi
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x4cc66e
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esp + 14h]
        push ebx
        push eax
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes FF 15 9C 26 5E 00: call dword ptr [0x5e269c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        ret
        ; Exact mapped bytes 66 81 E5 FD FF: and bp, 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        inc dword ptr [esp + 28h]
        mov edi, dword ptr [esp + 14h]
        lea eax, [esp + 24h]
        push ebp
        push eax
        push ebx
        ; Exact mapped bytes E8 A2 D7 FF FF: call 0x4c9e20
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [esp + 60h], 3
        ; Exact mapped bytes 75 3E: jne 0x4cc6c6
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [esp + 10h]
        and al, 3
        cmp al, 3
        ; Exact mapped bytes 75 34: jne 0x4cc6c6
        __asm _emit 0x75
        __asm _emit 0x34
        mov ebp, dword ptr [esp + 2ch]
        push 2
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        sub ebp, eax
        push 0ch
        lea eax, [esp + 28h]
        push 7
        mov dword ptr [esp + 2ch], ebp
        push 7
        push eax
        push ebx
        ; Exact mapped bytes E8 2B D6 FF FF: call 0x4c9ce0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        push esi
        ; Exact mapped bytes E8 B2 F1 FF FF: call 0x4cb870
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x4cc768
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 20h], 0
        ; Exact mapped bytes 74 52: je 0x4cc71f
        __asm _emit 0x74
        __asm _emit 0x52
        lea eax, [esp + 24h]
        push 4
        inc dword ptr [esp + 30h]
        push 0
        push 0
        push eax
        push ebx
        ; Exact mapped bytes E8 FE D5 FF FF: call 0x4c9ce0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 38h]
        dec dword ptr [esp + 40h]
        mov ebp, dword ptr [esp + 40h]
        mov dword ptr [esp + 58h], eax
        add esp, 14h
        push 2
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        sub ebp, eax
        push 8
        lea eax, [esp + 28h]
        push 7
        mov dword ptr [esp + 2ch], ebp
        push 7
        push eax
        push ebx
        ; Exact mapped bytes E8 CC D5 FF FF: call 0x4c9ce0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 58h]
        mov dword ptr [esp + 38h], eax
        add esp, 14h
        cmp dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 74 42: je 0x4cc768
        __asm _emit 0x74
        __asm _emit 0x42
        lea eax, [esp + 24h]
        push 8
        inc dword ptr [esp + 34h]
        push 0
        push 0
        push eax
        push ebx
        ; Exact mapped bytes E8 A5 D5 FF FF: call 0x4c9ce0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        dec dword ptr [esp + 44h]
        add esp, 14h
        mov ebp, dword ptr [esp + 30h]
        push 15h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        sub ebp, eax
        push 4
        lea eax, [esp + 28h]
        push 7
        mov dword ptr [esp + 30h], ebp
        push 7
        push eax
        push ebx
        ; Exact mapped bytes E8 7B D5 FF FF: call 0x4c9ce0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        push ebx
        push edi
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [esp + 5ch], 0
        ; Exact mapped bytes 74 07: je 0x4cc77e
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 9C 26 5E 00: call dword ptr [0x5e269c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        ret
    }
}
