// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513E83 .. +0x2C0 bytes.
extern "C" __declspec(naked) void FUN_00513e83_00513E83() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 52 80 FD FF: call 0x4ebeed
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 05: je 0x513ea6
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 94 02 00 00: jmp 0x51413a
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 74 26: je 0x513ed5
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x513ed5
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 65 02 00 00: jmp 0x51413a
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x513eef
        __asm _emit 0x75
        __asm _emit 0x14
        push 526h
        push 673dc0h
        ; Exact mapped bytes E8 56 4E 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x513eef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x513ed5
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 21 39 FC FF: call 0x4d781e
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x39
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 14: je 0x513f1d
        __asm _emit 0x74
        __asm _emit 0x14
        push 52bh
        push 673dc0h
        ; Exact mapped bytes E8 28 4E 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x513f1d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x513f03
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 14: je 0x513f3d
        __asm _emit 0x74
        __asm _emit 0x14
        push 52ch
        push 673dc0h
        ; Exact mapped bytes E8 08 4E 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x513f3d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x513f23
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 2D C2 02 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 54h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 0B: jne 0x513f5e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x513fe8
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 40 BE 68 00: call dword ptr [0x68be40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 74: je 0x513fe8
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 C2 EB FB FF: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xeb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 63: je 0x513fe8
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 40 BE 68 00: call dword ptr [0x68be40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 4D: je 0x513fe8
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 A4 BC 68 00: call dword ptr [0x68bca4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x513fba
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 38h]
        add eax, 1
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        cmp ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7D 26: jge 0x513fe8
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes FF 15 90 BC 68 00: call dword ptr [0x68bc90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 0E: jne 0x513fe6
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 38 85 FC FF: call 0x4dc519
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 02: jmp 0x513fe8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C9: jmp 0x513fb1
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 66 37 02 00: call 0x537756
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x514005
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 83 29 01 00 00: jae 0x51413a
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 37 02 00: call 0x53779f
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 02: jne 0x514028
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D4: jmp 0x513ffc
        __asm _emit 0xeb
        __asm _emit 0xd4
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 14: je 0x514042
        __asm _emit 0x74
        __asm _emit 0x14
        push 54fh
        push 673dc0h
        ; Exact mapped bytes E8 03 4D 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514042
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x514028
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x514062
        __asm _emit 0x75
        __asm _emit 0x14
        push 550h
        push 673dc0h
        ; Exact mapped bytes E8 E3 4C 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514062
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x514048
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 24h], -1
        ; Exact mapped bytes 75 43: jne 0x5140b1
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 39 02 00: call 0x5379d3
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 19: je 0x51409c
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 12 37 02 00: call 0x53779f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 06: je 0x51409c
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 24h], -1
        ; Exact mapped bytes 75 05: jne 0x5140a1
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x513ffc
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 40h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 75 3B FC FF: call 0x4d7c24
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 39: jmp 0x5140ea
        __asm _emit 0xeb
        __asm _emit 0x39
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 12: je 0x5140d3
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 24h], 0f000h
        ; Exact mapped bytes 73 09: jae 0x5140d3
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 1
        ; Exact mapped bytes EB 07: jmp 0x5140da
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 3A 3B FC FF: call 0x4d7c24
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 36 02 00: call 0x537756
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 32: jae 0x51412f
        __asm _emit 0x73
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 20h]
        sub eax, edx
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 73 1C: jae 0x51412f
        __asm _emit 0x73
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 36 02 00: call 0x53779f
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 0B: jne 0x51412f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB DC: jmp 0x51410b
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 C2 FE FF FF: jmp 0x513ffc
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
