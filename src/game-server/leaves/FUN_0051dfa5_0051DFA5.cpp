// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051DFA5 .. +0x1FB bytes.
extern "C" __declspec(naked) void FUN_0051dfa5_0051DFA5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ea13h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 64h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 11 09 FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x09
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x51dfed
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b6h
        push 5cb84ch
        ; Exact mapped bytes E8 18 6A 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51dfed
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51dfd3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D1 12 02 00: call 0x53f2cc
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 88 4C 01 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x51e0e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes E8 8E 4C 01 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        push 586a28h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5C D0 FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51e04c
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c0h
        push 5cb84ch
        ; Exact mapped bytes E8 B9 69 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51e04c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x51e027
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 AD 2E 01 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 2
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x51e0d4
        __asm _emit 0x74
        __asm _emit 0x5e
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 0E 2F 01 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 52: jne 0x51e0d4
        __asm _emit 0x75
        __asm _emit 0x52
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 20 2F 01 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 35 11 02 00: call 0x53f1c8
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], -1
        ; Exact mapped bytes 75 28: jne 0x51e0c4
        __asm _emit 0x75
        __asm _emit 0x28
        push -1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 31 29 FD FF: call 0x4f09d7
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 90 F7 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x51e18f
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C4 0B 02 00: call 0x53ec98
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 69 F7 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 21 FF FF FF: jmp 0x51e009
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B0 07 02 00: call 0x53e8a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 1E: jne 0x51e117
        __asm _emit 0x75
        __asm _emit 0x1e
        push 5cb8dch
        push 5cb90ch
        ; Exact mapped bytes E8 0D 1B FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x1b
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        push -1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C2 28 FD FF: call 0x4f09d7
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 70: jmp 0x51e187
        __asm _emit 0xeb
        __asm _emit 0x70
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 75 60: jne 0x51e17d
        __asm _emit 0x75
        __asm _emit 0x60
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1B 0B 02 00: call 0x53ec42
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 60h], eax
        push 1dbh
        push 5cb84ch
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        ; Exact mapped bytes E8 1D D0 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        push 586a28h
        mov edx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 3D CF FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51e16b
        __asm _emit 0x75
        __asm _emit 0x14
        push 1dch
        push 5cb84ch
        ; Exact mapped bytes E8 9A 68 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51e16b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x51e143
        __asm _emit 0x75
        __asm _emit 0xd2
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 5C 28 FD FF: call 0x4f09d7
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x51e187
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BD 07 02 00: call 0x53e944
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 53 2A FD FF: call 0x4f0be2
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x2a
        __asm _emit 0xfd
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
