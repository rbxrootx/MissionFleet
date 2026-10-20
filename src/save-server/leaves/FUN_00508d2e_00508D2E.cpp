// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508D2E .. +0x3A3 bytes.
extern "C" __declspec(naked) void FUN_00508d2e_00508D2E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 13ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 13ch], ecx
        push 0d2h
        push 6791a4h
        mov eax, dword ptr [ebp - 13ch]
        push eax
        ; Exact mapped bytes E8 0A 15 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0d3h
        push 6791a4h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F7 14 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        push 636f08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 14 FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x508d8e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d4h
        push 6791a4h
        ; Exact mapped bytes E8 B7 FF 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508d8e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x508d69
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 70h]
        cmp ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 75 14: jne 0x508db6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d5h
        push 6791a4h
        ; Exact mapped bytes E8 8F FF 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508db6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x508d94
        __asm _emit 0x75
        __asm _emit 0xd8
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 03 94 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F 2D 02 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 70h]
        cmp edx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 75 1B: jne 0x508df9
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 10: je 0x508df4
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 38 98 02 00: call 0x532628
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x508df9
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 CF 02 00 00: jmp 0x5090c8
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 22: je 0x508e27
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 68h]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x508e27
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
        ; Exact mapped bytes 75 2A: jne 0x508e93
        __asm _emit 0x75
        __asm _emit 0x2a
        push 104h
        lea edx, [ebp - 120h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 D6 FC FF: call 0x4d64d0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        lea eax, [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 B0 2F FE FF: call 0x4ebe43
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 F2 01 00: call 0x528163
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf2
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
        ; Exact mapped bytes 74 0B: je 0x508ed8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        or edx, 1
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 08: jmp 0x508ee0
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        and al, 0feh
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE 83 03 00: call 0x5412aa
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        push -1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 B1 0E 00 00: call 0x509dbd
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 17: jle 0x508f2c
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 06 D6 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x50901d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 130h]
        ; Exact mapped bytes E8 E1 92 02 00: call 0x532226
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 130h]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 F6 E9 FD FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x508fe6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 130h]
        ; Exact mapped bytes E8 5A 93 02 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 12ch]
        add edx, eax
        push edx
        lea ecx, [ebp - 130h]
        ; Exact mapped bytes E8 2B 93 02 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 130h]
        add ecx, eax
        push ecx
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 BE 8E 02 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x8e
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 D6 0E 00 00: call 0x509eb9
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        push 114h
        lea ecx, [ebp - 130h]
        ; Exact mapped bytes E8 D0 92 02 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 130h]
        ; Exact mapped bytes E8 AE 92 02 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 12ch]
        push edx
        mov eax, dword ptr [ebp - 130h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 05 D7 FC FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd7
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 4C: jmp 0x509069
        __asm _emit 0xeb
        __asm _emit 0x4c
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 7D 22: jge 0x509045
        __asm _emit 0x7d
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 B4 D4 01 00: call 0x5264e9
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 A4 D4 01 00: call 0x5264e9
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        push 115h
        push 0
        push 0
        ; Exact mapped bytes 8B 15 C4 6D 68 00: mov edx, dword ptr [0x686dc4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg edx
        push edx
        ; Exact mapped bytes A1 C0 6D 68 00: mov eax, dword ptr [0x686dc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 D6 FC FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 3A 02 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 74 0F: je 0x509088
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 3A 02 00: call 0x52cae8
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 13: je 0x5090a4
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 C9 00 00 00: call 0x50916d
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 44 C7 00 00: call 0x5157ff
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A1 48 02 00: call 0x52d969
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x02
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
