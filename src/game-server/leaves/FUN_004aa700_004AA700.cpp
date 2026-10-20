// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AA700 .. +0x511 bytes.
extern "C" __declspec(naked) void FUN_004aa700_004AA700() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x4aa733
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 05 FB FF FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 D7 04 00 00: jmp 0x4aac0a
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 1D: je 0x4aa756
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 17: jne 0x4aa756
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 74 05 00 00: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 B4 04 00 00: jmp 0x4aac0a
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 12 5D 00: mov eax, dword ptr [0x5d12b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x4aa792
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes E8 69 0C 00 00: call 0x4ab3d0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x4aa78c
        __asm _emit 0x75
        __asm _emit 0x21
        push 58bc14h
        push 0
        push 239h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 AD 63 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa78c
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x4aa762
        __asm _emit 0x75
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 15 B4 12 5D 00: mov edx, dword ptr [0x5d12b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 3B 05 B8 12 5D 00: cmp eax, dword ptr [0x5d12b8]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 01: jne 0x4aa7a7
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 2
        ; Exact mapped bytes FF 15 88 1A 5D 00: call dword ptr [0x5d1a88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 5E: jne 0x4aa82c
        __asm _emit 0x75
        __asm _emit 0x5e
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 2B: je 0x4aa7ff
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 58bd90h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 42 63 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa7f7
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4aa7d4
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes EB 26: jmp 0x4aa825
        __asm _emit 0xeb
        __asm _emit 0x26
        push 58bd6ch
        push 58bba8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 1A 63 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa81f
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4aa7ff
        __asm _emit 0x75
        __asm _emit 0xda
        xor eax, eax
        ; Exact mapped bytes E9 DE 03 00 00: jmp 0x4aac0a
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], -25h
        ; Exact mapped bytes 76 2C: jbe 0x4aa85e
        __asm _emit 0x76
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 58bd3ch
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 E8 62 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa851
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4aa832
        __asm _emit 0x75
        __asm _emit 0xdb
        xor eax, eax
        ; Exact mapped bytes E9 AC 03 00 00: jmp 0x4aac0a
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 42: je 0x4aa8a6
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        cmp ecx, 4
        ; Exact mapped bytes 74 34: je 0x4aa8a6
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffffh
        cmp edx, 2
        ; Exact mapped bytes 74 26: je 0x4aa8a6
        __asm _emit 0x74
        __asm _emit 0x26
        push 58bb50h
        push 58bba8h
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 99 62 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa8a0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4aa880
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 81 0F 00 00: call 0x4ab830
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x4aa8d7
        __asm _emit 0x75
        __asm _emit 0x21
        push 58bd18h
        push 0
        push 261h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 62 62 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa8d7
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x4aa8a6
        __asm _emit 0x75
        __asm _emit 0xc9
        mov eax, dword ptr [ebp + 8]
        sub eax, 20h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 75 07: jne 0x4aa8f6
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 3E: je 0x4aa93a
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0ch], 0fedcbabch
        ; Exact mapped bytes 75 09: jne 0x4aa911
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 74 21: je 0x4aa932
        __asm _emit 0x74
        __asm _emit 0x21
        push 58bcd0h
        push 0
        push 26bh
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 07 62 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa932
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C4: jne 0x4aa8fc
        __asm _emit 0x75
        __asm _emit 0xc4
        ; Exact mapped bytes EB 64: jmp 0x4aa99e
        __asm _emit 0xeb
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 75 15: jne 0x4aa95f
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 07: jne 0x4aa95f
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 10h], 2
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        cmp eax, ecx
        ; Exact mapped bytes 74 21: je 0x4aa998
        __asm _emit 0x74
        __asm _emit 0x21
        push 58bc94h
        push 0
        push 272h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 A1 61 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aa998
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C1: jne 0x4aa95f
        __asm _emit 0x75
        __asm _emit 0xc1
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 25: je 0x4aa9c9
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 0ch]
        add eax, 24h
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 8C AD 00 00: call 0x4b5740
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4aa9c7
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 43 02 00 00: jmp 0x4aac0a
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x4aa9ec
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp + 0ch]
        add edx, 24h
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 B7 AC 00 00: call 0x4b5690
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4aa9ec
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1E 02 00 00: jmp 0x4aac0a
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 12 5D 00: mov ecx, dword ptr [0x5d12b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 1
        ; Exact mapped bytes 89 0D B4 12 5D 00: mov dword ptr [0x5d12b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 56: jne 0x4aaa57
        __asm _emit 0x75
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A1 14 ED 5D 00: mov eax, dword ptr [0x5ded14]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        sub eax, dword ptr [edx + 10h]
        ; Exact mapped bytes A3 14 ED 5D 00: mov dword ptr [0x5ded14], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 ED 5D 00: mov ecx, dword ptr [0x5ded14]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 89 0D 14 ED 5D 00: mov dword ptr [0x5ded14], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A1 1C ED 5D 00: mov eax, dword ptr [0x5ded1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        sub eax, dword ptr [edx + 10h]
        ; Exact mapped bytes A3 1C ED 5D 00: mov dword ptr [0x5ded1c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 1C ED 5D 00: mov ecx, dword ptr [0x5ded1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 89 0D 1C ED 5D 00: mov dword ptr [0x5ded1c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 1C ED 5D 00: mov edx, dword ptr [0x5ded1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 3B 15 20 ED 5D 00: cmp edx, dword ptr [0x5ded20]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 76 0A: jbe 0x4aaa57
        __asm _emit 0x76
        __asm _emit 0x0a
        ; Exact mapped bytes A1 1C ED 5D 00: mov eax, dword ptr [0x5ded1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A3 20 ED 5D 00: mov dword ptr [0x5ded20], eax
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 20h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 76 24: jbe 0x4aaa8f
        __asm _emit 0x76
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ecx + 10h]
        push edx
        xor eax, eax
        ; Exact mapped bytes A0 BE 12 5D 00: mov al, byte ptr [0x5d12be]
        __asm _emit 0xa0
        __asm _emit 0xbe
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes E8 E4 E8 FF FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push 4
        xor eax, eax
        ; Exact mapped bytes A0 BC 12 5D 00: mov al, byte ptr [0x5d12bc]
        __asm _emit 0xa0
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 CB E8 FF FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 1B: jne 0x4aaac9
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 2F: jne 0x4aab07
        __asm _emit 0x75
        __asm _emit 0x2f
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 08: jne 0x4aaae6
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 21: je 0x4aab07
        __asm _emit 0x74
        __asm _emit 0x21
        push 58bc60h
        push 0
        push 2a8h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 32 60 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aab07
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C5: jne 0x4aaad2
        __asm _emit 0x75
        __asm _emit 0xc5
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 06: je 0x4aab1b
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 08: je 0x4aab23
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x4aac0a
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 10: je 0x4aab3b
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 3C: jmp 0x4aab77
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes A1 10 ED 5D 00: mov eax, dword ptr [0x5ded10]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 21: je 0x4aab66
        __asm _emit 0x74
        __asm _emit 0x21
        push 58bc44h
        push 0
        push 2b7h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 D3 5F 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aab66
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x4aab3b
        __asm _emit 0x75
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes A3 10 ED 5D 00: mov dword ptr [0x5ded10], eax
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 0F: je 0x4aab8f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 3B: jmp 0x4aabca
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes A1 18 ED 5D 00: mov eax, dword ptr [0x5ded18]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 21: je 0x4aabba
        __asm _emit 0x74
        __asm _emit 0x21
        push 58bc28h
        push 0
        push 2c2h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 7F 5F 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4aabba
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x4aab8f
        __asm _emit 0x75
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes A3 18 ED 5D 00: mov dword ptr [0x5ded18], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 18 ED 5D 00 00: cmp dword ptr [0x5ded18], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x4aabe1
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 18 ED 5D 00: mov ecx, dword ptr [0x5ded18]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes EB 08: jmp 0x4aabe9
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A3 10 ED 5D 00: mov dword ptr [0x5ded10], eax
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 15 18 ED 5D 00: mov edx, dword ptr [0x5ded18]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 89 0D 18 ED 5D 00: mov dword ptr [0x5ded18], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
