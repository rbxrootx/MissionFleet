// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051CA23 .. +0x143 bytes.
extern "C" __declspec(naked) void FUN_0051ca23_0051CA23() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 1
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 2A 6A F8 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x6a
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51ca51
        __asm _emit 0x75
        __asm _emit 0x11
        push 48h
        push 6778d4h
        ; Exact mapped bytes E8 F4 C2 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51ca51
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x51ca2f
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 44: je 0x51caa1
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 69 79 01 00: call 0x5343ce
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 7
        ; Exact mapped bytes 7D 33: jge 0x51caa1
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 2D: je 0x51caa1
        __asm _emit 0x74
        __asm _emit 0x2d
        push 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 3C: call dword ptr [eax + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 16 B9 FC FF: call 0x4e83a3
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x51cb5d
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 4C: je 0x51caf3
        __asm _emit 0x74
        __asm _emit 0x4c
        push 59h
        push 6778d4h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 A9 D7 FB FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 11: jne 0x51cad1
        __asm _emit 0x75
        __asm _emit 0x11
        push 5ah
        push 6778d4h
        ; Exact mapped bytes E8 74 C2 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51cad1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x51cab7
        __asm _emit 0x75
        __asm _emit 0xe0
        push 58h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 93 73 01 00: call 0x533e74
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 5ah
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 86 73 01 00: call 0x533e74
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 11: jmp 0x51cb04
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes A1 C8 6D 68 00: mov eax, dword ptr [0x686dc8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D CC 6D 68 00: mov ecx, dword ptr [0x686dcc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 06: je 0x51cb10
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x51cb21
        __asm _emit 0x75
        __asm _emit 0x11
        push 63h
        push 6778d4h
        ; Exact mapped bytes E8 24 C2 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51cb21
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x51cb04
        __asm _emit 0x75
        __asm _emit 0xdd
        push 9ech
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 B4 B9 68 00: call dword ptr [0x68b9b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        push 9ech
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 B4 B9 68 00: call dword ptr [0x68b9b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
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
