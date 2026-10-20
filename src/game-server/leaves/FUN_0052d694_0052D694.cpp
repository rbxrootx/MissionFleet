// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052D694 .. +0x3AB bytes.
extern "C" __declspec(naked) void FUN_0052d694_0052D694() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 70fh
        push 5c8fcch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 9C DA FC FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1C: je 0x52d6e6
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 13: je 0x52d6e6
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 6ch
        ; Exact mapped bytes E8 96 55 00 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x52d7b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 6ch
        ; Exact mapped bytes E8 9C 55 00 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 14h], edx
        push 71ah
        push 5c8fcch
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 34 DA FC FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0e800h
        ; Exact mapped bytes 72 6A: jb 0x52d7b4
        __asm _emit 0x72
        __asm _emit 0x6a
        cmp dword ptr [ebp - 10h], 0e81fh
        ; Exact mapped bytes 77 61: ja 0x52d7b4
        __asm _emit 0x77
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 0e800h
        mov eax, 1
        shl eax, cl
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x52d781
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        or eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x52d79c
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], 0e81fh
        ; Exact mapped bytes 74 18: je 0x52d7b4
        __asm _emit 0x74
        __asm _emit 0x18
        push 1
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        and ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 97 ED FF FF: call 0x52c54b
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 42 FF FF FF: jmp 0x52d6fb
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 4F 01 00 00: je 0x52d91b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 9ch], 0
        ; Exact mapped bytes 74 14: je 0x52d7ec
        __asm _emit 0x74
        __asm _emit 0x14
        push 72ah
        push 5c8fcch
        ; Exact mapped bytes E8 19 72 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52d7ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x52d7cc
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ecx + 9ch], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 DE D2 FF FF: call 0x52aae9
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x52d83b
        __asm _emit 0x75
        __asm _emit 0x14
        push 732h
        push 5c8fcch
        ; Exact mapped bytes E8 CA 71 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52d83b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52d821
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 10 26 5E 00: call dword ptr [0x5e2610]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B4 27 5E 00: call dword ptr [0x5e27b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 29: je 0x52d892
        __asm _emit 0x74
        __asm _emit 0x29
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 DC EC 00 00: call 0x53c54f
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F9 E4 00 00: call 0x53bd76
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 0b8h]
        and ecx, 0fffffffeh
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0b8h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 48h]
        mov dword ptr [eax + 14h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 48h], 0
        push 7915h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 84 C9 FF FF: call 0x52a239
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx], 0e900h
        ; Exact mapped bytes 74 15: je 0x52d8d5
        __asm _emit 0x74
        __asm _emit 0x15
        push 0e900h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 11: je 0x52d8ec
        __asm _emit 0x74
        __asm _emit 0x11
        push 0ea21h
        push -0ch
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push -10h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 300000h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x52d916
        __asm _emit 0x74
        __asm _emit 0x12
        push 5c91e8h
        push 5c922ch
        ; Exact mapped bytes E8 02 23 FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 1B 01 00 00: jmp 0x52da36
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 9ch], 0
        push 0ea21h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3D: je 0x52d980
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0e900h
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 11: je 0x52d96f
        __asm _emit 0x74
        __asm _emit 0x11
        push 0ea21h
        push -0ch
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push 0e900h
        push -0ch
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 1E: je 0x52d9a7
        __asm _emit 0x74
        __asm _emit 0x1e
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BC EB 00 00: call 0x53c54f
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B0 27 5E 00: call dword ptr [0x5e27b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 13: je 0x52d9c3
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        push 1
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 0e900h
        ; Exact mapped bytes 74 16: je 0x52d9f4
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x52da0e
        __asm _emit 0x75
        __asm _emit 0x14
        push 773h
        push 5c8fcch
        ; Exact mapped bytes E8 F7 6F 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52da0e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52d9f4
        __asm _emit 0x75
        __asm _emit 0xe0
        push 5
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 10 26 5E 00: call dword ptr [0x5e2610]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ecx + 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B3 D0 FF FF: call 0x52aae9
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
