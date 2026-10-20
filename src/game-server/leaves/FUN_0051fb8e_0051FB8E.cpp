// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051FB8E .. +0x3A3 bytes.
extern "C" __declspec(naked) void FUN_0051fb8e_0051FB8E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 13ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 13ch], ecx
        push 0d2h
        push 5cc9cch
        mov eax, dword ptr [ebp - 13ch]
        push eax
        ; Exact mapped bytes E8 AA B5 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0d3h
        push 5cc9cch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 97 B5 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        push 585e50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA B4 FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51fbee
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d4h
        push 5cc9cch
        ; Exact mapped bytes E8 17 4E 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51fbee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x51fbc9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 70h]
        cmp ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 75 14: jne 0x51fc16
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d5h
        push 5cc9cch
        ; Exact mapped bytes E8 EF 4D 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51fc16
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x51fbf4
        __asm _emit 0x75
        __asm _emit 0xd8
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2D 61 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F C4 01 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 70h]
        cmp edx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 75 1B: jne 0x51fc59
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 10: je 0x51fc54
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 80 65 01 00: call 0x5361d0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x51fc59
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 CF 02 00 00: jmp 0x51ff28
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 22: je 0x51fc87
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 68h]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x51fc87
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 64h]
        or edx, 40h
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 64h]
        and edx, 0fffffff9h
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 6
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 64h]
        or ecx, edx
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 75 2A: jne 0x51fcf3
        __asm _emit 0x75
        __asm _emit 0x2a
        push 104h
        lea edx, [ebp - 120h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 F3 FC FF: call 0x4ef040
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf3
        __asm _emit 0xfc
        __asm _emit 0xff
        lea eax, [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 90 71 FE FF: call 0x506e83
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC 46 01 00: call 0x5343c7
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        and ah, 0fh
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 64h]
        and edx, 0f000h
        or dh, 0fh
        mov eax, dword ptr [ebp - 18h]
        or eax, edx
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 13ch]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 0B: je 0x51fd38
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        or edx, 1
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 08: jmp 0x51fd40
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        and al, 0feh
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE 63 02 00: call 0x54612a
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        push -1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 D0 0E 00 00: call 0x520c3c
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 17: jle 0x51fd8c
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 DD 29 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x51fe7d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 130h]
        ; Exact mapped bytes E8 0B 60 01 00: call 0x535db0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 130h]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 B6 2B FE FF: call 0x50296d
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x51fe46
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 130h]
        ; Exact mapped bytes E8 84 60 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 12ch]
        add edx, eax
        push edx
        lea ecx, [ebp - 130h]
        ; Exact mapped bytes E8 55 60 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 130h]
        add ecx, eax
        push ecx
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 6B 5B 01 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov eax, dword ptr [ebp - 138h]
        push eax
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 128h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 F5 0E 00 00: call 0x520d38
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        push 114h
        lea ecx, [ebp - 130h]
        ; Exact mapped bytes E8 FA 5F 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 130h]
        ; Exact mapped bytes E8 D8 5F 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 12ch]
        push edx
        mov eax, dword ptr [ebp - 130h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 F4 FC FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 4C: jmp 0x51fec9
        __asm _emit 0xeb
        __asm _emit 0x4c
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 7D 22: jge 0x51fea5
        __asm _emit 0x7d
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 8B 28 01 00: call 0x532720
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 7B 28 01 00: call 0x532720
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        push 115h
        push 0
        push 0
        ; Exact mapped bytes 8B 15 AC E8 5D 00: mov edx, dword ptr [0x5de8ac]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg edx
        push edx
        ; Exact mapped bytes A1 A8 E8 5D 00: mov eax, dword ptr [0x5de8a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg eax
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 F3 FC FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 D1 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 74 0F: je 0x51fee8
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 D1 01 00: call 0x53d088
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 13: je 0x51ff04
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 C9 00 00 00: call 0x51ffcd
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 C5 E1 00 00: call 0x52e0e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E1 DF 01 00: call 0x53df09
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xdf
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
