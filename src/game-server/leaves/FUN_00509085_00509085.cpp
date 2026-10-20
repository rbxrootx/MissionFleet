// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509085 .. +0x28C bytes.
extern "C" __declspec(naked) void FUN_00509085_00509085() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 74h], ecx
        push 7fh
        push 5cb450h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 BF 20 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 74h]
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 75 4C: jne 0x5090f6
        __asm _emit 0x75
        __asm _emit 0x4c
        push 5cb4cch
        push 5cb508h
        ; Exact mapped bytes E8 5C 6B FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        push 5cb50ch
        push 5cb52ch
        ; Exact mapped bytes E8 4A 6B FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x5090eb
        __asm _emit 0x74
        __asm _emit 0x14
        push 86h
        push 5cb450h
        ; Exact mapped bytes E8 1A B9 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5090eb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5090ce
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 12 02 00 00: jmp 0x509308
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 7C 09: jl 0x509108
        __asm _emit 0x7c
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 74h]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 7D 14: jge 0x50911c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 8ah
        push 5cb450h
        ; Exact mapped bytes E8 E9 B8 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50911c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x5090f6
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 40h]
        mov dword ptr [ebp - 78h], edx
        cmp dword ptr [ebp - 78h], -1
        ; Exact mapped bytes 74 02: je 0x509133
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 79: jmp 0x5091ac
        __asm _emit 0xeb
        __asm _emit 0x79
        push 8
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 44h]
        mov edx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 F1 02 00: call 0x5382b9
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 F0 02 00: call 0x5381fe
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 74h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 09: je 0x509198
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 74h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 75 12: jne 0x5091aa
        __asm _emit 0x75
        __asm _emit 0x12
        push 5cb530h
        push 5cb55ch
        ; Exact mapped bytes E8 6E 6A FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 35: jmp 0x5091e1
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 74h]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 7F 14: jg 0x5091c9
        __asm _emit 0x7f
        __asm _emit 0x14
        push 96h
        push 5cb450h
        ; Exact mapped bytes E8 3C B8 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5091c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5091ac
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 40h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        push 0
        push 0
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 7C C7 02 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4F E7 02 00: call 0x537944
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x5092d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 60 C7 02 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        lea edx, [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 EE 02 00: call 0x5380ab
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 40 C8 02 00: call 0x535a6f
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x509247
        __asm _emit 0x75
        __asm _emit 0x14
        push 9eh
        push 5cb450h
        ; Exact mapped bytes E8 BE B7 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x509247
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 B0: jne 0x5091fd
        __asm _emit 0x75
        __asm _emit 0xb0
        lea ecx, [ebp - 60h]
        push ecx
        lea edx, [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 75 06 00 00: call 0x5098d2
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 91 C9 02 00: call 0x535bf5
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 74h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 74 60: je 0x5092d8
        __asm _emit 0x74
        __asm _emit 0x60
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 D1 CA 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 6F 2E 03 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 A6 CB 02 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 74h]
        cmp dword ptr [edx + 4ch], eax
        ; Exact mapped bytes 7D 16: jge 0x5092b2
        __asm _emit 0x7d
        __asm _emit 0x16
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 96 CB 02 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        sub eax, dword ptr [ecx + 4ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 96 CB 02 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 74h]
        cmp dword ptr [edx + 50h], eax
        ; Exact mapped bytes 7D 16: jge 0x5092d8
        __asm _emit 0x7d
        __asm _emit 0x16
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 86 CB 02 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        sub eax, dword ptr [ecx + 50h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        lea eax, [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A7 EE 02 00: call 0x53819f
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 80 F6 FF FF: call 0x508988
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
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
