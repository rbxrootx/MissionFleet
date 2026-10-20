// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D8D44 .. +0x1F8 bytes.
extern "C" __declspec(naked) void FUN_004d8d44_004D8D44() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 14: je 0x4d8d6d
        __asm _emit 0x74
        __asm _emit 0x14
        push 18bh
        push 6725f0h
        ; Exact mapped bytes E8 D8 FF 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d8d6d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d8d50
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1ch
        push 0
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 40 CB F8 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xcb
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E8 ED 73 06 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 1
        push 0
        ; Exact mapped bytes FF 15 BC B9 68 00: call dword ptr [0x68b9bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 1
        push 0
        ; Exact mapped bytes FF 15 BC B9 68 00: call dword ptr [0x68b9bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 06: je 0x4d8dc5
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 39: jne 0x4d8dfe
        __asm _emit 0x75
        __asm _emit 0x39
        push 672670h
        push 6726ach
        ; Exact mapped bytes E8 41 78 FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x4d8de7
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x4d8df7
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 35 01 00 00: jmp 0x4d8f33
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 2ch
        push ecx
        mov edx, dword ptr [ebp + 8]
        or edx, 4
        push edx
        lea eax, [ebp - 1ch]
        push eax
        push 4d8500h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 AE 13 F9 FF: call 0x46a1d0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 28h], eax
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 28h], 0
        ; Exact mapped bytes 75 07: jne 0x4d8e3b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x4d8f33
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 19 88 05 00: call 0x53165c
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 14: jne 0x4d8e5c
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a5h
        push 6725f0h
        ; Exact mapped bytes E8 E9 FE 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d8e5c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4d8e3b
        __asm _emit 0x75
        __asm _emit 0xd9
        push -1
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 C4 B9 68 00: call dword ptr [0x68b9c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4d8e86
        __asm _emit 0x74
        __asm _emit 0x14
        push 1a6h
        push 6725f0h
        ; Exact mapped bytes E8 BF FE 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d8e86
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4d8e62
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 2C: je 0x4d8ecc
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 CC B9 68 00: call dword ptr [0x68b9cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 14: jne 0x4d8ec6
        __asm _emit 0x75
        __asm _emit 0x14
        push 1abh
        push 6725f0h
        ; Exact mapped bytes E8 7F FE 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d8ec6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4d8ea0
        __asm _emit 0x75
        __asm _emit 0xd4
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 52: je 0x4d8f24
        __asm _emit 0x74
        __asm _emit 0x52
        push -1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 C4 B9 68 00: call dword ptr [0x68b9c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4d8ef9
        __asm _emit 0x74
        __asm _emit 0x14
        push 1b0h
        push 6725f0h
        ; Exact mapped bytes E8 4C FE 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d8ef9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x4d8ed2
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 28h], 0
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 0F: jmp 0x4d8f33
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 C0 B9 68 00: call dword ptr [0x68b9c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
