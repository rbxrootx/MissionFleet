// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005196A9 .. +0x383 bytes.
extern "C" __declspec(naked) void FUN_005196a9_005196A9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5196d8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c3h
        push 67598ch
        ; Exact mapped bytes E8 6D F6 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5196d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x5196b5
        __asm _emit 0x75
        __asm _emit 0xd7
        push 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        push 0
        push 0
        lea eax, [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 40: call dword ptr [edx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x40
        push 0
        push 0
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 D5 FC FF: call 0x4e6cc5
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 8
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1D 3C 00 00: call 0x51d350
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx + 4]
        and edx, 3
        test edx, edx
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x5197d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax + 4]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 1A: je 0x519779
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 15 6C 6D 68 00: mov edx, dword ptr [0x686d6c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 F2 95 01 00: call 0x532d5d
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE CB FC FF: call 0x4e6342
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 10: jmp 0x519789
        __asm _emit 0xeb
        __asm _emit 0x10
        push 7
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        mov dword ptr [ebp - 20h], eax
        push 5
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        mov dword ptr [ebp - 18h], eax
        push 0dh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 CF FC FF: call 0x4e6759
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 1
        push 1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3C 8D 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 BE 01 00: call 0x5355ce
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 CF FC FF: call 0x4e6759
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 4]
        and eax, 24h
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5197f0
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 0D 70 6D 68 00: mov ecx, dword ptr [0x686d70]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 7C B6 68 00: call dword ptr [0x68b67c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 4]
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x519882
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 06: jne 0x51981d
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 70 6D 68 00: mov ecx, dword ptr [0x686d70]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 B1 96 01 00: call 0x532eda
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 CB FC FF: call 0x4e63d3
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 06: jne 0x519841
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C CE FC FF: call 0x4e6657
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xff
        push 3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 CF FC FF: call 0x4e6759
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 BD 01 00: call 0x5355ce
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 CE FC FF: call 0x4e6759
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 4]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x519969
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 70 6D 68 00: mov ecx, dword ptr [0x686d70]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 3B 96 01 00: call 0x532eda
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B CB FC FF: call 0x4e63d3
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 06: jne 0x5198b7
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        push 2
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 CD FC FF: call 0x4e6657
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 FE 88 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 82 07 00 00: call 0x51a057
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f0001h
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 2ch]
        push ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 C7 89 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 BE 01 00: call 0x535740
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        push 0f0001h
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, dword ptr [ebp - 4]
        push ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 A2 89 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 21 BE 01 00: call 0x535740
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        push 0f0001h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 9A 89 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC BD 01 00: call 0x535740
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        push 0f0001h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 75 89 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 BD 01 00: call 0x535740
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx + 4]
        and edx, 18h
        test edx, edx
        ; Exact mapped bytes 74 5E: je 0x5199d4
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x519996
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 8
        ; Exact mapped bytes 7D 38: jge 0x5199d4
        __asm _emit 0x7d
        __asm _emit 0x38
        mov edx, 1
        mov ecx, dword ptr [ebp - 34h]
        shl edx, cl
        mov eax, dword ptr [ebp - 38h]
        and eax, edx
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x5199d2
        __asm _emit 0x74
        __asm _emit 0x23
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 75 07 00 00: call 0x51a134
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F9 89 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 36 00 00: call 0x51cfe6
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B9: jmp 0x51998d
        __asm _emit 0xeb
        __asm _emit 0xb9
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 0C: je 0x5199e6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5C C9 FC FF: call 0x4e6342
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0C: je 0x5199f8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB C9 FC FF: call 0x4e63d3
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        push -1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x519a1d
        __asm _emit 0x75
        __asm _emit 0x14
        push 118h
        push 67598ch
        ; Exact mapped bytes E8 28 F3 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519a1d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5199f8
        __asm _emit 0x75
        __asm _emit 0xd5
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
