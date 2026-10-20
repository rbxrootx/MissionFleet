// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00553FA9 .. +0x311 bytes.
extern "C" __declspec(naked) void FUN_00553fa9_00553FA9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 41 28 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        push 432h
        push 67c1e0h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 71 62 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x55400c
        __asm _emit 0x75
        __asm _emit 0x14
        push 433h
        push 67c1e0h
        ; Exact mapped bytes E8 39 4D FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55400c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553fef
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x55402f
        __asm _emit 0x75
        __asm _emit 0x14
        push 434h
        push 67c1e0h
        ; Exact mapped bytes E8 16 4D FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55402f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x554012
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 48h]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 74 14: je 0x554052
        __asm _emit 0x74
        __asm _emit 0x14
        push 435h
        push 67c1e0h
        ; Exact mapped bytes E8 F3 4C FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554052
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x554035
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x55410c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 34h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [eax + 34h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 38h], 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 CD F3 FF FF: call 0x553460
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 98 F7 FF FF: call 0x553837
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 48h]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 74 1C: je 0x5540c4
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 34h]
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 34h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 34h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x55409f
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 48h]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 1C: je 0x5540ef
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 38h]
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 38h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 38h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5540ca
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [edx + 38h], eax
        ; Exact mapped bytes E9 A2 01 00 00: jmp 0x5542ae
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 38 DA FF FF: call 0x551b50
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x554135
        __asm _emit 0x75
        __asm _emit 0x14
        push 44bh
        push 67c1e0h
        ; Exact mapped bytes E8 10 4C FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554135
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x554118
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x5541f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 09: jne 0x554166
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 36: jmp 0x55419c
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 1B 1E F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1e
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], esp
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 57 94 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x94
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        lea eax, [ebp - 30h]
        push eax
        push 0
        push 0
        push 11012h
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 1A: je 0x5541e2
        __asm _emit 0x74
        __asm _emit 0x1a
        lea edx, [ebp - 28h]
        push edx
        push 67c2e4h
        ; Exact mapped bytes E8 3F C4 F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc4
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 18 7D FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 48h], edx
        mov eax, dword ptr [ebp - 48h]
        mov byte ptr [eax + 43h], 1
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 14: jne 0x55420c
        __asm _emit 0x75
        __asm _emit 0x14
        push 45dh
        push 67c1e0h
        ; Exact mapped bytes E8 39 4B FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55420c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5541f2
        __asm _emit 0x75
        __asm _emit 0xe0
        push 640ca0h
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 D3 66 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x554240
        __asm _emit 0x75
        __asm _emit 0x14
        push 462h
        push 67c1e0h
        ; Exact mapped bytes E8 05 4B FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554240
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x554226
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 74 10: je 0x554266
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x55427e
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 50 C2 68 00: call dword ptr [0x68c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 09: jge 0x554299
        __asm _emit 0x7d
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 61 7C FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov byte ptr [edx + 43h], 1
        push 2
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        lea esp, [ebp - 5ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
