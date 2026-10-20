// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044AA31 .. +0x246 bytes.
extern "C" __declspec(naked) void FUN_0044aa31_0044AA31() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 0F 84 24 02 00 00: je 0x44ac6e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 34h]
        add ecx, 20h
        ; Exact mapped bytes E8 92 CB 0D 00: call 0x5275ea
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcb
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 B3 01 00 00: je 0x44ac18
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 34h]
        add ecx, 20h
        ; Exact mapped bytes E8 E8 D1 07 00: call 0x4c7c67
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x44ab35
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x44ab35
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 21 99 00 00: call 0x4543cc
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 74 67: je 0x44ab1f
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A7 B2 08 00: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x44aae7
        __asm _emit 0x75
        __asm _emit 0x14
        push 1edh
        push 67288ch
        ; Exact mapped bytes E8 5E E2 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe2
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44aae7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x44aacd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x44ab0a
        __asm _emit 0x75
        __asm _emit 0x14
        push 1eeh
        push 67288ch
        ; Exact mapped bytes E8 3B E2 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe2
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44ab0a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x44aaed
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 38h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C2 98 00 00: call 0x4543e1
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes E8 DF 98 00 00: call 0x45440c
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x44aa95
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 90 00 00 00: mov dx, word ptr [ecx + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x44ac13
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 90 00 00 00: mov cx, word ptr [eax + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 B2 08 00: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x44ab7b
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f9h
        push 67288ch
        ; Exact mapped bytes E8 CA E1 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe1
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44ab7b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x44ab61
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x44ab9e
        __asm _emit 0x75
        __asm _emit 0x14
        push 1fah
        push 67288ch
        ; Exact mapped bytes E8 A7 E1 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xe1
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44ab9e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x44ab81
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 38h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 38h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 B8 00 00 00: call dword ptr [eax + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 38h]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 75 14: jne 0x44abdb
        __asm _emit 0x75
        __asm _emit 0x14
        push 1feh
        push 67288ch
        ; Exact mapped bytes E8 6A E1 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe1
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44abdb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x44abb8
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 38h]
        mov dword ptr [ecx + 90h], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 38h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes E9 43 FE FF FF: jmp 0x44aa5b
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 34h]
        add ecx, 20h
        ; Exact mapped bytes E8 C4 C9 0D 00: call 0x5275ea
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3F: je 0x44ac6e
        __asm _emit 0x74
        __asm _emit 0x3f
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 34h]
        add ecx, 20h
        ; Exact mapped bytes E8 1E D0 07 00: call 0x4c7c67
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 17: je 0x44ac6c
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 88h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes EB BB: jmp 0x44ac29
        __asm _emit 0xeb
        __asm _emit 0xbb
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
