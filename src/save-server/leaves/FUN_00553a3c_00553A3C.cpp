// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00553A3C .. +0x1DB bytes.
extern "C" __declspec(naked) void FUN_00553a3c_00553A3C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 AE 2D 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 3c1h
        push 67c1e0h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 DE 67 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x553a9f
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c2h
        push 67c1e0h
        ; Exact mapped bytes E8 A6 52 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553a9f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553a82
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 53: jne 0x553b01
        __asm _emit 0x75
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 75 14: jne 0x553acb
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c5h
        push 67c1e0h
        ; Exact mapped bytes E8 7A 52 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553acb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553aae
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x553b01
        __asm _emit 0x75
        __asm _emit 0x17
        push 67c244h
        push 67c284h
        ; Exact mapped bytes E8 1C CB F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xcb
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 DB F3 F4 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf3
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x553b1e
        __asm _emit 0x75
        __asm _emit 0x14
        push 3cdh
        push 67c1e0h
        ; Exact mapped bytes E8 27 52 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553b1e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x553b01
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 20 E0 FF FF: call 0x551b50
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 24h]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 09: jne 0x553b45
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 36: jmp 0x553b7b
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 3C 24 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], esp
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 78 9A EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x9a
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        lea edx, [ebp - 2ch]
        push edx
        push 0
        push 0
        push 11012h
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1A: je 0x553bc1
        __asm _emit 0x74
        __asm _emit 0x1a
        lea ecx, [ebp - 24h]
        push ecx
        push 67c288h
        ; Exact mapped bytes E8 60 CA F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xca
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 39 83 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x553bdb
        __asm _emit 0x75
        __asm _emit 0x14
        push 3deh
        push 67c1e0h
        ; Exact mapped bytes E8 6A 51 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x51
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553bdb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x553bc1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 34h], edx
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x553c07
        __asm _emit 0x75
        __asm _emit 0x14
        push 3e2h
        push 67c1e0h
        ; Exact mapped bytes E8 3E 51 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x51
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553c07
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x553bea
        __asm _emit 0x75
        __asm _emit 0xdd
        lea esp, [ebp - 4ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
