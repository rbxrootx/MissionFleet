// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00553C17 .. +0x392 bytes.
extern "C" __declspec(naked) void FUN_00553c17_00553C17() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 44h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D3 2B 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 3eah
        push 67c1e0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 03 66 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x553c7a
        __asm _emit 0x75
        __asm _emit 0x14
        push 3ebh
        push 67c1e0h
        ; Exact mapped bytes E8 CB 50 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553c7a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553c5d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x553c9d
        __asm _emit 0x75
        __asm _emit 0x14
        push 3ech
        push 67c1e0h
        ; Exact mapped bytes E8 A8 50 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553c9d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x553c80
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 14: je 0x553cc0
        __asm _emit 0x74
        __asm _emit 0x14
        push 3edh
        push 67c1e0h
        ; Exact mapped bytes E8 85 50 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553cc0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x553ca3
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 44h]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 74 14: je 0x553ce3
        __asm _emit 0x74
        __asm _emit 0x14
        push 3eeh
        push 67c1e0h
        ; Exact mapped bytes E8 62 50 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553ce3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553cc6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x553e1e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 AD F8 FF FF: call 0x5535af
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 1C: je 0x553d27
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 34h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x553d02
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 74 1C: je 0x553d52
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 38h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x553d2d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 52 DD FF FF: call 0x551ab2
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 28h], eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 CE FC FF FF: call 0x553a3c
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 640ca0h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 77 6B FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x553d9c
        __asm _emit 0x75
        __asm _emit 0x14
        push 3fdh
        push 67c1e0h
        ; Exact mapped bytes E8 A9 4F FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553d9c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x553d82
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 50 C2 68 00: call dword ptr [0x68c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7D 1E: jge 0x553ddc
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x553e07
        __asm _emit 0x74
        __asm _emit 0x14
        push 404h
        push 67c1e0h
        ; Exact mapped bytes E8 3E 4F FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553e07
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x553ddc
        __asm _emit 0x75
        __asm _emit 0xcf
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes E9 7F 01 00 00: jmp 0x553f9d
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 26 DD FF FF: call 0x551b50
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 3ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x553e3f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 36: jmp 0x553e75
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 42 21 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x21
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], esp
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 7E 97 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x97
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        lea eax, [ebp - 40h]
        push eax
        push 0
        push 0
        push 10012h
        push 0
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1A: je 0x553ebd
        __asm _emit 0x74
        __asm _emit 0x1a
        lea edx, [ebp - 3ch]
        push edx
        push 67c2b8h
        ; Exact mapped bytes E8 64 C7 F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc7
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 3D 80 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 14: jne 0x553ed7
        __asm _emit 0x75
        __asm _emit 0x14
        push 418h
        push 67c1e0h
        ; Exact mapped bytes E8 6E 4E FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553ed7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x553ebd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 34h], eax
        mov ecx, dword ptr [ebp - 44h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x553f03
        __asm _emit 0x75
        __asm _emit 0x14
        push 41ch
        push 67c1e0h
        ; Exact mapped bytes E8 42 4E FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553f03
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553ee6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 20h], 0
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 640d30h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        ; Exact mapped bytes FF 15 4C C2 68 00: call dword ptr [0x68c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x553f64
        __asm _emit 0x75
        __asm _emit 0x14
        push 425h
        push 67c1e0h
        ; Exact mapped bytes E8 E1 4D FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553f64
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x553f4a
        __asm _emit 0x75
        __asm _emit 0xe0
        push 640cd0h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 7E 69 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 44h]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 0A: jne 0x553f9d
        __asm _emit 0x75
        __asm _emit 0x0a
        push 8007000eh
        ; Exact mapped bytes E8 5D 7F FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        lea esp, [ebp - 58h]
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
