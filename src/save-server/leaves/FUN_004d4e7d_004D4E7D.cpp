// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4E7D .. +0x2C6 bytes.
extern "C" __declspec(naked) void FUN_004d4e7d_004D4E7D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d4eae
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d64h
        push 671a64h
        ; Exact mapped bytes E8 97 3E 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4eae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d4e89
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4d4ed5
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d65h
        push 671a64h
        ; Exact mapped bytes E8 70 3E 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4ed5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x4d4eb4
        __asm _emit 0x75
        __asm _emit 0xd9
        mov dword ptr [ebp - 10h], 1
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 8]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x4d4f0d
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 93 13 00 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4d4f0d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x4d4f14
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 24h]
        or edx, 18h
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 24h], edx
        ; Exact mapped bytes E8 1B 39 00 00: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 34h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d4f67
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d72h
        push 671a64h
        ; Exact mapped bytes E8 DE 3D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4f67
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4d4f44
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x4d5043
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 88 BE 68 00: call dword ptr [0x68be88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x4d5043
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 50 78: call dword ptr [eax + 0x78]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d4fb4
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d78h
        push 671a64h
        ; Exact mapped bytes E8 91 3D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4fb4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4d4f91
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 19: je 0x4d4fd9
        __asm _emit 0x74
        __asm _emit 0x19
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F5 17 00 00: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A2 6E 05 00: call 0x52be74
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp + 8]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 75 24: jne 0x4d5007
        __asm _emit 0x75
        __asm _emit 0x24
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x4d5007
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 18: jne 0x4d5007
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        push 0
        push 121h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x4d5037
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 0
        push 36ah
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 06 66 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4d503e
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes E9 2A FF FF FF: jmp 0x4d4f6d
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d5066
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d93h
        push 671a64h
        ; Exact mapped bytes E8 DF 3C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d5066
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4d5043
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes E8 E8 37 00 00: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x4d5092
        __asm _emit 0x75
        __asm _emit 0x0f
        push 0
        ; Exact mapped bytes E8 EB 41 0B 00: call 0x589275
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x41
        __asm _emit 0x0b
        __asm _emit 0x00
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x4d513a
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 31: je 0x4d50c9
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 118h
        ; Exact mapped bytes 74 0C: je 0x4d50b0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], 104h
        ; Exact mapped bytes 75 19: jne 0x4d50c9
        __asm _emit 0x75
        __asm _emit 0x19
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 05 17 00 00: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B2 6D 05 00: call 0x52be74
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 50 78: call dword ptr [eax + 0x78]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x4d50da
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 5E: jmp 0x4d5138
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 76 37 00 00: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4d5103
        __asm _emit 0x74
        __asm _emit 0x0e
        mov dword ptr [ebp - 10h], 1
        mov dword ptr [ebp - 0ch], 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 88 BE 68 00: call dword ptr [0x68be88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 26 FF FF FF: jne 0x4d5043
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 22 FE FF FF: jmp 0x4d4f44
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 24h]
        and al, 0e7h
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x4d513a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB E8: jmp 0x4d5122
        __asm _emit 0xeb
        __asm _emit 0xe8
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
