// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D49D6 .. +0x2BF bytes.
extern "C" __declspec(naked) void FUN_004d49d6_004D49D6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4ch], ecx
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 7B 02 00 00: je 0x4d4c6e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 6B 02 00 00: je 0x4d4c6e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 0F 84 5B 02 00 00: je 0x4d4c6e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D F0: mov word ptr [ebp - 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        mov edx, dword ptr [ebp - 8]
        add edx, 2
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 8]
        add edx, 2
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        cmp eax, 1234h
        ; Exact mapped bytes 75 08: jne 0x4d4a61
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 66 C7 45 EC 01 04: mov word ptr [ebp - 0x14], 0x401
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x04
        ; Exact mapped bytes EB 30: jmp 0x4d4a91
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        cmp ecx, 401h
        ; Exact mapped bytes 75 08: jne 0x4d4a7a
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 66 C7 45 EC 80 01: mov word ptr [ebp - 0x14], 0x180
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x80
        __asm _emit 0x01
        ; Exact mapped bytes EB 17: jmp 0x4d4a91
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        cmp edx, 403h
        ; Exact mapped bytes 75 06: jne 0x4d4a91
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 C7 45 EC 43 01: mov word ptr [ebp - 0x14], 0x143
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x43
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        cmp eax, 180h
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x4d4b2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        cmp ecx, 143h
        ; Exact mapped bytes 74 76: je 0x4d4b2b
        __asm _emit 0x74
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        cmp edx, 401h
        ; Exact mapped bytes 74 65: je 0x4d4b2b
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        cmp eax, 376h
        ; Exact mapped bytes 74 56: je 0x4d4b2b
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        cmp ecx, 37ah
        ; Exact mapped bytes 74 45: je 0x4d4b2b
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        cmp edx, 377h
        ; Exact mapped bytes 74 34: je 0x4d4b2b
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        cmp eax, 37bh
        ; Exact mapped bytes 74 25: je 0x4d4b2b
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        cmp ecx, 378h
        ; Exact mapped bytes 74 14: je 0x4d4b2b
        __asm _emit 0x74
        __asm _emit 0x14
        push 0cf1h
        push 671a64h
        ; Exact mapped bytes E8 1A 42 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4b2b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 0F 85 5C FF FF FF: jne 0x4d4a91
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        cmp eax, 180h
        ; Exact mapped bytes 74 22: je 0x4d4b66
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        cmp ecx, 143h
        ; Exact mapped bytes 74 11: je 0x4d4b66
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        cmp edx, 401h
        ; Exact mapped bytes 75 29: jne 0x4d4b8f
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax - 1]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4d4b89
        __asm _emit 0x74
        __asm _emit 0x14
        push 0cfah
        push 671a64h
        ; Exact mapped bytes E8 BC 41 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4b89
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x4d4b66
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        cmp eax, 401h
        ; Exact mapped bytes 75 6D: jne 0x4d4c0b
        __asm _emit 0x75
        __asm _emit 0x6d
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 40h], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 44h], 0
        mov dword ptr [ebp - 3ch], 1
        mov dword ptr [ebp - 38h], 0ffffffffh
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 9F 51 F7 FF: call 0x449d70
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x51
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        lea edx, [ebp - 3ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 78 BE 68 00: call dword ptr [0x68be78]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 07: jne 0x4d4c09
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 55: jmp 0x4d4c60
        __asm _emit 0xeb
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        cmp ecx, 180h
        ; Exact mapped bytes 74 11: je 0x4d4c2d
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        cmp edx, 143h
        ; Exact mapped bytes 75 33: jne 0x4d4c60
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 10h]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 78 BE 68 00: call dword ptr [0x68be78]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 07: jne 0x4d4c60
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 8B FD FF FF: jmp 0x4d49f9
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 15: je 0x4d4c89
        __asm _emit 0x74
        __asm _emit 0x15
        push 0
        push 0
        push 0
        push 0
        push 364h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 5A 75 05 00: call 0x52c1e3
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
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
