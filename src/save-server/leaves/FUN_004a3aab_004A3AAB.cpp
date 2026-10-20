// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A3AAB .. +0x23B bytes.
extern "C" __declspec(naked) void FUN_004a3aab_004A3AAB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 4bh
        push 674ab0h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 99 67 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 90h]
        and edx, 20h
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4a3ae8
        __asm _emit 0x75
        __asm _emit 0x11
        push 4ch
        push 674ab0h
        ; Exact mapped bytes E8 5D 52 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3ae8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4a3ac7
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 75 11: jne 0x4a3b0b
        __asm _emit 0x75
        __asm _emit 0x11
        push 4dh
        push 674ab0h
        ; Exact mapped bytes E8 3A 52 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3b0b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4a3aee
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 78h]
        push eax
        ; Exact mapped bytes E8 40 F9 FF FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4a3b3b
        __asm _emit 0x75
        __asm _emit 0x11
        push 50h
        push 674ab0h
        ; Exact mapped bytes E8 0A 52 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3b3b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x4a3b11
        __asm _emit 0x75
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 78h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 76 11: jbe 0x4a3b70
        __asm _emit 0x76
        __asm _emit 0x11
        push 52h
        push 674ab0h
        ; Exact mapped bytes E8 D5 51 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3b70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x4a3b54
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 7ch]
        sub edx, dword ptr [ebp - 8]
        push edx
        push 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 78h]
        add ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 2F 1D FC FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes FF 15 90 BE 68 00: call dword ptr [0x68be90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DB A9 02 00: call 0x4ce587
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 60h], eax
        ; Exact mapped bytes E8 9A C7 02 00: call 0x4d0351
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 74 27: je 0x4a3be7
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 60h]
        push edx
        ; Exact mapped bytes FF 15 AC BF 68 00: call dword ptr [0x68bfac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4a3be7
        __asm _emit 0x74
        __asm _emit 0x16
        mov dword ptr [ebp - 10h], 1
        push 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        ; Exact mapped bytes FF 15 B8 BF 68 00: call dword ptr [0x68bfb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 89 C5 09 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4a3c09
        __asm _emit 0x74
        __asm _emit 0x11
        push 63h
        push 674ab0h
        ; Exact mapped bytes E8 3C 51 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3c09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4a3bef
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 90h]
        and edx, 80000h
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x4a3c2d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 18h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4a3c36
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 29 C6 02 00: call 0x4d025f
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 74 11: je 0x4a3c53
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 5ch
        push ecx
        ; Exact mapped bytes E8 6A 03 FE FF: call 0x483fb8
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0F: jmp 0x4a3c62
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 18h]
        add edx, 5ch
        push edx
        ; Exact mapped bytes E8 53 03 FE FF: call 0x483fb2
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x4a3c88
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4a3c82
        __asm _emit 0x74
        __asm _emit 0x11
        push 71h
        push 674ab0h
        ; Exact mapped bytes E8 C3 50 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3c82
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a3c68
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x4a3ca7
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        ; Exact mapped bytes FF 15 B8 BF 68 00: call dword ptr [0x68bfb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4a3cbf
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 94 BE 68 00: call dword ptr [0x68be94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 35 A9 02 00: call 0x4ce5fc
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 08: je 0x4a3cd5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x4a3cdc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 2
        mov eax, dword ptr [ebp - 1ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
