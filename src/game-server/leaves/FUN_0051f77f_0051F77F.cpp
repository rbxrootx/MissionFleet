// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F77F .. +0x40F bytes.
extern "C" __declspec(naked) void FUN_0051f77f_0051F77F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 144h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 140h], ecx
        push 71h
        push 5cc9cch
        mov eax, dword ptr [ebp - 140h]
        push eax
        ; Exact mapped bytes E8 BC B9 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        push 72h
        push 5cc9cch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 AC B9 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        push 585e50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF B8 FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51f7d6
        __asm _emit 0x75
        __asm _emit 0x11
        push 73h
        push 5cc9cch
        ; Exact mapped bytes E8 2F 52 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f7d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x51f7b4
        __asm _emit 0x75
        __asm _emit 0xd8
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6D 65 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF C8 01 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 70h]
        cmp edx, dword ptr [ebp - 140h]
        ; Exact mapped bytes 75 1B: jne 0x51f819
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 10: je 0x51f814
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C0 69 01 00: call 0x5361d0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x51f819
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 6C 03 00 00: jmp 0x51fb85
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 140h]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 22: je 0x51f847
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 68h]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x51f847
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 140h]
        mov edx, dword ptr [ecx + 64h]
        or edx, 40h
        mov eax, dword ptr [ebp - 140h]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp - 140h]
        mov edx, dword ptr [ecx + 64h]
        and edx, 0fffffff9h
        mov eax, dword ptr [ebp - 140h]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 6
        mov eax, dword ptr [ebp - 140h]
        mov ecx, dword ptr [eax + 64h]
        or ecx, edx
        mov edx, dword ptr [ebp - 140h]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp - 140h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 75 2A: jne 0x51f8b3
        __asm _emit 0x75
        __asm _emit 0x2a
        push 104h
        lea edx, [ebp - 124h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 F7 FC FF: call 0x4ef040
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        lea eax, [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 D0 75 FE FF: call 0x506e83
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C 4B 01 00: call 0x5343c7
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        and ah, 0fh
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 140h]
        mov edx, dword ptr [ecx + 64h]
        and edx, 0f000h
        or dh, 0fh
        mov eax, dword ptr [ebp - 1ch]
        or eax, edx
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 140h]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 0B: je 0x51f8f8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 1ch]
        or edx, 1
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 08: jmp 0x51f900
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        and al, 0feh
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E 68 02 00: call 0x54612a
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 70h]
        cmp eax, dword ptr [ebp - 140h]
        ; Exact mapped bytes 74 2A: je 0x51f94b
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 CD 01 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x51f94b
        __asm _emit 0x74
        __asm _emit 0x1e
        push 97h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C F9 FC FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 1
        mov dword ptr [ebp - 18h], 0ffffffffh
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x51fa39
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 45 64 01 00: call 0x535db0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [ebp - 134h]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 F0 2F FE FF: call 0x50296d
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 C8 64 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 130h]
        add ecx, eax
        push ecx
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 99 64 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 134h]
        add edx, eax
        push edx
        lea ecx, [ebp - 13ch]
        ; Exact mapped bytes E8 AF 5F 01 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        sub esp, 10h
        mov edx, esp
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 128h]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 39 13 00 00: call 0x520d38
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 114h
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 3E 64 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 134h]
        ; Exact mapped bytes E8 1C 64 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 F8 FC FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 46: jmp 0x51fa7f
        __asm _emit 0xeb
        __asm _emit 0x46
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 7ch
        ; Exact mapped bytes E8 D5 2C 01 00: call 0x532720
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 7ch
        ; Exact mapped bytes E8 C5 2C 01 00: call 0x532720
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        push 115h
        push 0
        push 0
        ; Exact mapped bytes A1 AC E8 5D 00: mov eax, dword ptr [0x5de8ac]
        __asm _emit 0xa1
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg eax
        push eax
        ; Exact mapped bytes 8B 0D A8 E8 5D 00: mov ecx, dword ptr [0x5de8a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg ecx
        push ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 F8 FC FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 D5 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 140h]
        ; Exact mapped bytes 74 0F: je 0x51fa9e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EA D5 01 00: call 0x53d088
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 70h]
        cmp ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes 75 17: jne 0x51fac3
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 0C 05 00 00: call 0x51ffcd
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4F: jmp 0x51fb12
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 46: je 0x51fb12
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 140h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 18: je 0x51faf0
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 70h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 75 0C: jne 0x51faf0
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 144h], 1
        ; Exact mapped bytes EB 0A: jmp 0x51fafa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov eax, dword ptr [ebp - 144h]
        push eax
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 BB 04 00 00: call 0x51ffcd
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [eax + 70h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 3A: je 0x51fb5e
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF CB 01 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x51fb44
        __asm _emit 0x74
        __asm _emit 0x14
        push 0c3h
        push 5cc9cch
        ; Exact mapped bytes E8 C1 4E 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51fb44
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x51fb24
        __asm _emit 0x75
        __asm _emit 0xda
        push 57h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 F7 FC FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 C4 03 00 00: call 0x51ff31
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 68 E5 00 00: call 0x52e0e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 84 E3 01 00: call 0x53df09
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
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
