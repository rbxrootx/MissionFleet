// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587499E0 .. +0x2A5 bytes.
extern "C" __declspec(naked) void FUN_587499e0_587499E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov eax, dword ptr [ebp + 8]
        cdq
        idiv ecx
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 6B 05 64 77 94 58 75: imul eax, dword ptr [0x58947764], 0x75
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x75
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov eax, dword ptr [ebp + 0ch]
        cdq
        idiv ecx
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 C0 D4 FF: call 0x58495a30
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58749a40
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 BE D4 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 28 01 00 00: jne 0x58749b68
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 24 D4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x58749a5b
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 26 D4 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x26
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 03 01 00 00: je 0x58749b68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 26 DD FF: call 0x5851c0e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x26
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x58749b63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 7B D8 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x7b
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x58749b63
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 23ch]
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x58749b63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B BE D4 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 66: jne 0x58749b0f
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C BE D4 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 56: jne 0x58749b0f
        __asm _emit 0x75
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 59 36 D4 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x36
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x58749b0f
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D 36 D4 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x36
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x58749b0f
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 24 D4 FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 23ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FF 8C DA FF: call 0x584f2800
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8c
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 74 05: je 0x58749b0f
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x58749a50
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 29 D4 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x29
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 7C 05: jl 0x58749b24
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 2C FF FF FF: jmp 0x58749a50
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 86 01 00: call 0x58762220
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x58749b63
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 200h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 26 D4 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x26
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 1e4h], eax
        mov eax, 1
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x58749c7f
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E8 FE FF FF: jmp 0x58749a50
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 23 D4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x23
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x58749b83
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B0 25 D4 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x25
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x58749c7d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BB 7A D8 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x7a
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x58749c78
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 23ch]
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x58749c78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 BD D4 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xbd
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 66: jne 0x58749c27
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 BD D4 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xbd
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 56: jne 0x58749c27
        __asm _emit 0x75
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 41 35 D4 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x35
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x58749c27
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 35 35 D4 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x35
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x58749c27
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 23 D4 FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 23ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E7 8B DA FF: call 0x584f2800
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x8b
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 3
        ; Exact mapped bytes 74 05: je 0x58749c27
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x58749b78
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 28 D4 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x28
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 7C 05: jl 0x58749c3c
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 3C FF FF FF: jmp 0x58749b78
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D0 85 01 00: call 0x58762220
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x58749c78
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 200h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E8 24 D4 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 1e4h], eax
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x58749c7f
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 FB FE FF FF: jmp 0x58749b78
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
