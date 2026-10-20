// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D12D0 .. +0x2C1 bytes.
extern "C" __declspec(naked) void FUN_588d12d0() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 30h]
        push esi
        mov esi, ecx
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x588d1331
        __asm _emit 0x74
        __asm _emit 0x52
        movzx ecx, word ptr [esp + 8]
        cmp ecx, 5
        ; Exact mapped bytes 0F 87 50 01 00 00: ja 0x588d143d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 8D 94 15 8D 58: jmp dword ptr [ecx*4 + 0x588d1594]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x15
        __asm _emit 0x8d
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 8B 49 04: mov cx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 74 2F: je 0x588d1337
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 66 83 F9 07: cmp cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x07
        ; Exact mapped bytes 74 29: je 0x588d1337
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 74 23: je 0x588d1337
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 74 1D: je 0x588d1337
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 7d3h
        ; Exact mapped bytes E8 C6 A7 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FF 39 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x39
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax + 9a4h]
        test eax, eax
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x588d143d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 50 5E: mov dx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        xor dl, 0aah
        cmp dl, 50h
        ; Exact mapped bytes 0F 82 E4 00 00 00: jb 0x588d143d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 7ddh
        ; Exact mapped bytes E8 87 A7 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C0 39 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x39
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0cc0h]
        mov cl, byte ptr [eax + 4]
        and cl, 1fh
        cmp cl, 8
        ; Exact mapped bytes 74 1D: je 0x588d13a4
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 7d4h
        ; Exact mapped bytes E8 59 A7 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 92 39 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x39
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 1100h
        mov ecx, esi
        ; Exact mapped bytes E8 50 EE FF FF: call 0x588d0200
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 7C 0E: jl 0x588d13c3
        __asm _emit 0x7c
        __asm _emit 0x0e
        push 10h
        mov ecx, esi
        ; Exact mapped bytes E8 42 EE FF FF: call 0x588d0200
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7D 7A: jge 0x588d143d
        __asm _emit 0x7d
        __asm _emit 0x7a
        push 0
        push 0
        push 0
        push 7e5h
        ; Exact mapped bytes E8 1D A7 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 56 39 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x39
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 8B 4A 04: mov cx, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 F9 02: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 74 23: je 0x588d1417
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 83 F9 01: cmp cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 74 1D: je 0x588d1417
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 7d5h
        ; Exact mapped bytes E8 E6 A6 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F 39 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x39
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        lea edx, [eax + 9a4h]
        nop
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x588d1434
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 40 5E: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        xor al, 0aah
        cmp al, 1eh
        ; Exact mapped bytes 77 12: ja 0x588d1446
        __asm _emit 0x77
        __asm _emit 0x12
        inc ecx
        add edx, 4
        cmp ecx, 20h
        ; Exact mapped bytes 75 E3: jne 0x588d1420
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 7d6h
        ; Exact mapped bytes E8 9A A6 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D3 38 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x38
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 8B 49 04: mov cx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 74 29: je 0x588d14a0
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 66 83 F9 03: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 74 23: je 0x588d14a0
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 74 1D: je 0x588d14a0
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 7dah
        ; Exact mapped bytes E8 5D A6 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 38 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        lea edx, [eax + 9a4h]
        mov eax, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x588d14bc
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 40 5E: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        xor al, 0aah
        cmp al, 55h
        ; Exact mapped bytes 77 10: ja 0x588d14cc
        __asm _emit 0x77
        __asm _emit 0x10
        inc ecx
        add edx, 4
        cmp ecx, 20h
        ; Exact mapped bytes 75 E3: jne 0x588d14a8
        __asm _emit 0x75
        __asm _emit 0xe3
        lea eax, [ecx - 1fh]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 7dbh
        ; Exact mapped bytes E8 14 A6 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4D 38 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x38
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 8B 49 04: mov cx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 F9 07: cmp cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x07
        ; Exact mapped bytes 74 23: je 0x588d1520
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 74 1D: je 0x588d1520
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 7e2h
        ; Exact mapped bytes E8 DD A5 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 16 38 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x38
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax + 9a4h]
        test eax, eax
        ; Exact mapped bytes 0F 84 0F FF FF FF: je 0x588d143d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 5E: mov dx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        xor dl, 0aah
        cmp dl, 50h
        ; Exact mapped bytes 0F 83 FB FE FF FF: jae 0x588d143d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 7deh
        ; Exact mapped bytes E8 9E A5 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D7 37 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x37
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0cc0h]
        mov cl, byte ptr [eax + 4]
        and cl, 1fh
        cmp cl, 9
        ; Exact mapped bytes 0F 84 C9 FE FF FF: je 0x588d143d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 7e6h
        ; Exact mapped bytes E8 6C A5 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A5 37 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x37
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
