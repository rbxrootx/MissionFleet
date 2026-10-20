// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055CBDB .. +0x329 bytes.
extern "C" __declspec(naked) void FUN_0055cbdb_0055CBDB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 134h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x55cc1a
        __asm _emit 0x75
        __asm _emit 0x11
        push 32h
        push 67b3b8h
        ; Exact mapped bytes E8 2B C1 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55cc1a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x55cc03
        __asm _emit 0x75
        __asm _emit 0xe3
        push -1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 17 68 F4 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x55cc40
        __asm _emit 0x75
        __asm _emit 0x11
        push 33h
        push 67b3b8h
        ; Exact mapped bytes E8 05 C1 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55cc40
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x55cc20
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 11: jne 0x55cc5d
        __asm _emit 0x75
        __asm _emit 0x11
        push 34h
        push 67b3b8h
        ; Exact mapped bytes E8 E8 C0 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55cc5d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x55cc46
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 11: jne 0x55cc7a
        __asm _emit 0x75
        __asm _emit 0x11
        push 35h
        push 67b3b8h
        ; Exact mapped bytes E8 CB C0 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55cc7a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x55cc63
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x55cd0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0C: jne 0x55cca2
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 128h], 0
        ; Exact mapped bytes EB 3F: jmp 0x55cce1
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 10h]
        push eax
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
        ; Exact mapped bytes E8 DF 92 F0 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x92
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], esp
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 12ch]
        push eax
        ; Exact mapped bytes E8 15 09 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x09
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 128h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 EA 01 00 00: jmp 0x55cef4
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 73: je 0x55cd94
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 5ch
        ; Exact mapped bytes 74 2C: je 0x55cd58
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2fh
        ; Exact mapped bytes 74 21: je 0x55cd58
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 3ah
        ; Exact mapped bytes 74 16: je 0x55cd58
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 21h
        ; Exact mapped bytes 74 0B: je 0x55cd58
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 5bh
        ; Exact mapped bytes 75 3C: jne 0x55cd94
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 1ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        xor edx, edx
        mov dl, byte ptr [ecx + 688ca1h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x55cd80
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 83: jmp 0x55cd17
        __asm _emit 0xeb
        __asm _emit 0x83
        lea ecx, [ebp - 120h]
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x55ce79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 5ch
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x55ce79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2fh
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x55ce79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 3ah
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x55ce79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 21h
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x55ce79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 5bh
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x55ce79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 103h
        ; Exact mapped bytes 7D 77: jge 0x55ce79
        __asm _emit 0x7d
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 1ch]
        xor eax, eax
        mov al, byte ptr [edx]
        xor ecx, ecx
        mov cl, byte ptr [eax + 688ca1h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 2E: je 0x55ce46
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ebp - 1ch]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 124h]
        add edx, 1
        mov dword ptr [ebp - 124h], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ebp - 1ch]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 124h]
        add edx, 1
        mov dword ptr [ebp - 124h], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes E9 27 FF FF FF: jmp 0x55cda0
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx], eax
        lea ecx, [ebp - 120h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0C: jne 0x55ce9c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 130h], 0
        ; Exact mapped bytes EB 3F: jmp 0x55cedb
        __asm _emit 0xeb
        __asm _emit 0x3f
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
        ; Exact mapped bytes E8 E5 90 F0 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x90
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], esp
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 134h]
        push edx
        ; Exact mapped bytes E8 1B 07 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x07
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        push 67b450h
        ; Exact mapped bytes FF 15 C8 C2 68 00: call dword ptr [0x68c2c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        lea esp, [ebp - 140h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
