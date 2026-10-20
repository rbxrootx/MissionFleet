// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051C8E0 .. +0x143 bytes.
extern "C" __declspec(naked) void FUN_0051c8e0_0051C8E0() {
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
        ; Exact mapped bytes E8 6D 6B F8 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x6b
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51c90e
        __asm _emit 0x75
        __asm _emit 0x11
        push 25h
        push 6778d4h
        ; Exact mapped bytes E8 37 C4 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51c90e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x51c8ec
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 44: je 0x51c95e
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AC 7A 01 00: call 0x5343ce
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 7
        ; Exact mapped bytes 7D 33: jge 0x51c95e
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 2D: je 0x51c95e
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
        ; Exact mapped bytes E8 09 BB FC FF: call 0x4e8453
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xbb
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
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x51ca1a
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 4C: je 0x51c9b0
        __asm _emit 0x74
        __asm _emit 0x4c
        push 36h
        push 6778d4h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 EC D8 FB FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 11: jne 0x51c98e
        __asm _emit 0x75
        __asm _emit 0x11
        push 37h
        push 6778d4h
        ; Exact mapped bytes E8 B7 C3 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51c98e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x51c974
        __asm _emit 0x75
        __asm _emit 0xe0
        push 58h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D6 74 01 00: call 0x533e74
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 5ah
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 74 01 00: call 0x533e74
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 11: jmp 0x51c9c1
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
        ; Exact mapped bytes 74 06: je 0x51c9cd
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x51c9de
        __asm _emit 0x75
        __asm _emit 0x11
        push 40h
        push 6778d4h
        ; Exact mapped bytes E8 67 C3 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51c9de
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x51c9c1
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        push eax
        push 9ech
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
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 9ech
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
